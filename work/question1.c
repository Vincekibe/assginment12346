//calculate simple interest
#include <stdio.h>

int main(){
 float principle,rate,time,interest;

 printf("Enter the principle amount\n");
 scanf("%f", &principle);

 printf("Enter the rate(in %%)\n");
 scanf("%f", &rate);

 printf("Enter the time(in years)\n");
 scanf("%f", &time);
//simple interest formula
interest=(principle*rate*time)/100;

printf("simple interest=%.2f", interest);


return 0;
}
