//calculate electricitybill
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24  */
#include <stdio.h>

#include<stdio.h>
float calculatebill(int units){
float totalbill,chageperunit,surecharge, totalamount;
totalbill=units*chageperunit;

if(units<=199){
totalbill=units*1.2;
} else if (units>=200&&units<400){
totalbill=units*1.5;
}else if (units>=400&& units<600){
totalbill=units*1.8;
}else if (units>=600){
totalbill=units*2.00;
}if(totalbill>=400){
surecharge=totalbill*0.15;
totalamount=totalbill+surecharge;

}
return totalbill;
}
int main() {
int customerID,unitconsumed, totalamount,totalbill, surecharge;
char customername[10];
totalamount=totalbill+surecharge;

printf("enter customerID:");
scanf("%d",&customerID);

printf("enter unitconsumed ");
scanf("%d",&unitconsumed );

printf("enter customername : ");
scanf("%s", &customername);

float bill=calculatebill(unitconsumed);

printf("in electrical bill for customer %d(%s):\n", customerID,customername);
printf(" units consumed: %d\n",unitconsumed);
printf("total bill:%.2f\n",bill);
printf("totalamount=%d",totalamount);
}


