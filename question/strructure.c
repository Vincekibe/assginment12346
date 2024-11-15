//create a structure
/*NAME:VINCENT KIBET KIPYEON
REG:CT101/G/24767/24 */
#include <stdio.h>

int main(){
    //employee details
  struct employee{
  int id;
  char name;
  float salary;
  };
  int main(){

  struct employee employees[3];
  //declaration of variables
  int i, highestsalaryindex =0;
//use of for loop for employee details
  for(i = 0; i < 3; i++){
    printf("Enter details for employee %d:\n, i+i");
  };
//prompting the user to input the details
   printf("Enter the ID:");
   scanf("%d", &employees[i].id);
   printf("Enter the name:");
   scanf("%d", &employees[i].name);
   printf("Enter the salary:");
   scanf("%f", &employees[i].salary);


    for(i=1; i < 3; i++){
    if(employees[i].salary > employees[highestsalaryindex].salary){
            highestsalaryindex = i;
    }
  }
  printf("\nThe employee with the highest salary:\n");
  printf("Employee ID:");
  printf("Employee name:");
  printf("Employee salary:");

  return 0;
}
