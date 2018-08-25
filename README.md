# CE-4302-TallerOpeMP

Taller para utilizar el API OpenMP del curso Arquitectura de Computadores II

# Ejecución
Se deben ejecutar los siguientes comandos con la consola en esta carpeta:

## Ejercicio Pi

### Serial
```console
usuario@TallerOpeMP:~$ gcc -o bin/pi_serial Ejercicio_Pi/pi.c -fopenmp && ./bin/pi_serial
```

### Paralelo
```console
usuario@TallerOpeMP:~$ gcc -o bin/pi_parallel Ejercicio_Pi/pi_par.c -fopenmp && ./bin/pi_parallel
```
## Ejercicio SAXPY

### Serial
```console
usuario@TallerOpeMP:~$ gcc -o bin/saxpy_serial saxpy.c -fopenmp && ./bin/saxpy_serial 
```

### Paralelo
```console
usuario@TallerOpeMP:~$ gcc -o bin/saxpy_parallel saxpy_par.c -fopenmp && ./bin/saxpy_parallel
```

## Ejercicio Producto Punto

### Paralelo
```console
usuario@TallerOpeMP:~$ gcc -o bin/dot_product dot_product.c -fopenmp && ./bin/dot_product

```
