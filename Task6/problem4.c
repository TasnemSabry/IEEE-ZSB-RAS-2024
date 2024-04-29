   
#include <stdio.h>

int main(){

int hours, minutes, seconds;
int Time;

printf("Enter the time [hh:mm:ss]: ");
scanf("%d:%d:%d", &hours, &minutes, &seconds);

    Time = hours * 3600 + minutes * 60 + seconds;


printf("Time entered: %02d:%02d:%02d\n", hours, minutes, seconds);
printf("Time in seconds: %d seconds\n", Time);
printf("Time from the integer variable: %d hours, %d minutes, %d seconds\n", Time / 3600, (Time % 3600) / 60, Time % 60);

return 0;

}
   
