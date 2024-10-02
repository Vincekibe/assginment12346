//calculate the fine for overdue library books.
#include <stdio.h>

int main(){

int BooKID;
int DueDate;
int ReturnDate;

printf("Enter the BooKID:\n");
scanf("%d", &BooKID);
printf("Enter the DueDate:\n");
scanf("%d", &DueDate);
printf("Enter the ReturnDate:\n");
scanf("%d", &ReturnDate);
int DaysOverdue;
  DaysOverdue=ReturnDate-DueDate;
printf("The days Overdue:\n");
printf("%d", DaysOverdue);


int FineAmount;

int Finerate;
if(DaysOverdue<=7){
    Finerate=DaysOverdue*20;
   FineAmount=Finerate*DaysOverdue;


   printf("\nThe FineAmount is %d\n", FineAmount);
   printf("\nThe Finerate is %d\n", Finerate);
}
else if(DaysOverdue<=14){
    Finerate=DaysOverdue*50;
    FineAmount=Finerate*DaysOverdue;


    printf("\nThe FineAmount is %d\n", FineAmount);
    printf("\nThe Finerate is %d\n", Finerate);
}
else{
    Finerate=DaysOverdue*100;
    FineAmount=Finerate*DaysOverdue;


    printf("\nThe FineAmount is %d\n", FineAmount);
    printf("\nThe Finerate is %d\n", Finerate);
}

printf("\nThe BooKID is %d", BooKID);
printf("\nThe DueDate is %d", DueDate);
printf("\nThe ReturnDate %d", ReturnDate);
printf("\nThe DaysOverdue %d", DaysOverdue);
printf("\nThe Finerate %.1d", Finerate);
printf("\nThe FineAmount %d", FineAmount);

return 0;
}
