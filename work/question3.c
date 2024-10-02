//calculate age to be given a loan.

#include <stdio.h>

int main(){

int age=21;
int income=21000;

   printf("Enter your age:");
   scanf("%d", &age);

if(age>=21){
  printf("Congratulation you qualify a loan");

}

if(age<21){
   printf("Unfortunately,we are unable to offer you a loan at this time.");

}

return 0;
}
