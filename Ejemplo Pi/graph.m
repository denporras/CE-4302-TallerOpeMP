D = load("data_time.dat");

time = D(:,1);
iterations = D(:,2);

figure(1);
plot(iterations,time,'r',"linewidth",3);
title("Time vs iterations");
xlabel("Iterations");
ylabel("Time(s)");