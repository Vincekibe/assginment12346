//calculate compound interest.
/* NAME:VINCENT KIBET 
  REG:CT101/G/24767/24 */
#include <stdio.h>

#include <math.h>

int main(){

  float principle,rate,time,amount,compoundinterest;

  printf("Enter the principle\n");
  scanf("%f", &principle);

  printf("Enter the rate(in %%)\n");
  scanf("%f", &rate);

  printf("Enter the time(in years)\n");
  scanf("%f", &time);
//calculate amount
  amount=principle*pow((1+rate/100),time);

  compoundinterest=amount-principle;
  printf("total amount after %.2f years: %.2f\n", time,amount);


  printf("compound interest:%.2f\n", compoundinterest);


  return 0;
}
