/*

This program will numerically compute the integral of

                  4/(1+x*x) 
				  
from 0 to 1. 
				 
History: Written by Tim Mattson, 11/99.

#-----------------------------------------------------

Modified by JGG 

#--------------------------------------------------------

*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

static long num_steps = 100000000;
double step;
int main ()
{
	int nprocs;
	double x, pi, sum = 0.0;
	double start_time, run_time;

	step = 1.0/(double) num_steps;
	FILE *f = fopen("data_time.dat", "w");
	for (int j = 0; j <= num_steps; j+=10000000)
	{
		/*start timer */
		start_time = omp_get_wtime();

		int i, nprocs;
		for (int i=0;i< j; i++){
			x = (i-0.5)*step;
			sum = sum + 4.0/(1.0+x*x);
		}
		pi = step * sum;
		run_time = omp_get_wtime() - start_time;
		//printf("%d\n", j);
		if (f == NULL)
		{
		    printf("Error opening file!\n");
		    exit(1);
		}
		const char *text = "Write this to the file";
		fprintf(f, "%f\t%d\n", run_time, j);
	}
	fclose(f);
	
}	  


