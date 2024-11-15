//creating a file for writing,appending and reading
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24 */
#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 200
void writetoFile(){
  FILE *file = fopen("output.txt", "w");
   if(file ==NULL){

    printf("Error opening the file");
    return 0;
   }
   char paragraph[MAX_CHAR + 1];
   printf("Enter a paragraph");
   fgets(paragraph, MAX_CHAR + 1, stdin);
   fprintf(file, "%s", paragraph);
   fclose(file);
   printf("Paragraph written to output.txt\n");
}

   void readFromFile(){
   FILE *file = fopen("output.txt", "r");
   if(file ==NULL){

    printf("Error opening file for reading");
    return 0;
   }
   char ch;
   printf("cotent of output.txt:\n");
   while((ch = fgetc(file)) !=EOF){
    putchar(ch);
   }
   fclose(file);
   }

   void appendToFile(){
    FILE *file = fopen("output.txt", "r");
   if(file ==NULL){

    printf("Error opening file for appending");
    return;
   }
   char paragraph[MAX_CHAR + 1];
   printf("Enter additional paragraph(up to 200 characters):");
   fprintf(file, "%s", paragraph);
   fclose(file);
   printf("Paragraph appended to ouput.txt\n");

   }
int main(){
  int choice;
  while(1){
    printf("\nFile operatins menu:\n");
    printf("a. Write to file\n");
    printf("b. Read from file\n");
    printf("c. Append to file\n ");
    printf("d. Exit\n");
    printf("Choose an option");
    scanf("%d", &choice);
    getchar();

    switch(){
    case 1:
      writetoFile();
      break;
    case 2:
        readFromFile();
        break;
    case 3:
        appendToFile();
        break;
    case 4:
        printf("Exiting program.\n");
        return 0;
    default:
        printf("Invalid choice try again\n")
    }
  }

  }

