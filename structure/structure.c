//defining a structure
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24  */

#include <stdio.h>
#include <string.h>

struct book{
 char title[30];
 char author[30];
 int publication_year;
 char ISBN[13];
 float price;
} book1;

 int main(){
 //book1 information
     struct book book1;
  strcpy(book1.title, "introduction to c programming");
  strcpy(book1.author, "john smith");
  book1.publication_year= 2022;
  strcpy(book1.ISBN, "978097632");
  book1.price=50.55;

//printing the book1 information
   printf("The book title is %s\n", book1.title);
   printf("The author is %s\n", book1.author);
   printf("The publication year is %d\n", book1.publication_year);
   printf("The ISBN is %s\n", book1.ISBN);
   printf("The price is %f\n", book1.price);
//declaring information about a book
 char title, author, ISBN;
 int publication_year;
 float price;
//prompting the user to input the values
   printf("Enter the book title:\n");
   scanf("%s", &title);
   printf("Enter the book author:\n");
   scanf("%s", &author);
   printf("Enter the publication year:\n");
   scanf("%d", &publication_year);
   printf("Enter the ISBN:\n");
   scanf("%s", &ISBN);
   printf("Enter the book price:\n");
   scanf("%f", &price);
  return 0;
 }
