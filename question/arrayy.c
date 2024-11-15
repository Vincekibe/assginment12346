//array
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24 */
#include <stdio.h>

int main(){
 //declaration of scores
   int scores[2][4]={
       {65, 92, 84, 72},
       {35, 70, 59, 67}
     };
//declaration of a and b
   int a, b;

   for(a=0;a < 2;a++){
    for(b=0;b < 4;b++){
        printf("%d", scores[a][b]);
        }
        printf("\n");
    }


  return 0;
}
