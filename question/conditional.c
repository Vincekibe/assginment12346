//creating of an array
/*NAME:VINCENT KIBET KIPYEGON
REG:CT1O1/G/24767/24 */
#include <stdio.h>

int main(){
    //declaration of array details
    int number, even, odd;
     printf("Enter a number:\n");
     scanf("%d", &number);
    if(number %2  != 0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
   return 0;
}
