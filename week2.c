#include <stdio.h>
#include <stdlib.h>
// char name[20];
char number[20];
//int number;

int main() {
   /*printf("Enter name : ");
   gets(name);
   fgets(name, 5, stdin); 5 is size of array
   getchar(chr); --> can only get 1 character
   fgets(number, 5, stdin);
   int i = atoi(number); atoi is array to integer
   printf("number = %s, i = %d",number,i);
   putchar(100); ทำงานเหมือนprintf (change 100 to char (d from ascii))
   putchar('u');*/
   /*int found = 0;
   float isExist = 0.0;
   char isOnline = '\0';
   fgets(number, 5, stdin);
   int i = atoi(number);
   if (i  > 0 && i <= 10)
        printf("if = %d\n", i > 0 && i<=10);ถ้า i=0 and i<=10 จะแสดงค่า 1 ออกมา*/
   fgets(number, 5, stdin);
   int i = atoi(number);
   // int count = 0;
   // while (count < i){
   //    printf("%d\n",count);
   //    count++;
   // }

   // --------------------------------------------------------------------------------------

   for (int j=0; j<i; j++){
      printf("j = %d\n", j);
   }
}
