//calculate age to be given a loan.
/*NAME:VINCENT KIBET
REG:CT101/G/24767/24 */
#include <stdio.h>

int main(){

int age=21;
int montlyincome=21000;

   printf("Enter your age:");
   scanf("%d", &age);
   Printf("Enter your monthly income");
   scanf("%d", &montlyincome);

if(age>=21){
  printf("Congratulation you qualify a loan");

}

else{
   printf("Unfortunately,we are unable to offer you a loan at this time.");

}

return 0;
}
