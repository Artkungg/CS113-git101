#include <stdio.h>
int main()
{
    int x = 100;
    /*int a = 0144; เลขฐาน 8
    int b = 0x64; เลขฐาน 16
    printf("x = %d",x);
    printf("reference x = %lu\n", &x); //ปริ้น address ของ x ออกมา
    printf("reference x = %p\n", &x); //ปริ้น address ฐาน 16 ออกมา*/

    //int number[] = {3, 4, 5, 6, 7};
    // int number[100];
    // int number[100] = {3, 4, 5, 6, 7};
    //printf("index 1 = %d\n", number[1]);
    //printf("reference number[1] = %p\n", number[1]+1); //addressบวกอีก 1 address จะเพิ่มaddress 4 บิต เพราะ int มี 4 บิต ,ถ้าเป็น double จะบวกaddressเพิ่ม 8 บิต
    // printf("reference number[0] = %p\n", &number[0]);
    // printf("reference number = %p\n", &number);
    // printf("reference number[2000] = %p\n", &number[2000]);
    //int number[] = {3, 4, 5, 6, 7};
    //int *ptr = &x;
    //int *arrPtr;
    //arrPtr = number; // ชี้ไปที่ index ที่ 00
    //arrPtr += 2; // บวกตำแหน่ง address ไปอีก2 (00 --> 01 --> 02) address 02 คือ 5
    //*arrPtr = *arrPtr + 10; //*arrPtr คือค่าในaddress นั้นๆ ก็คือจะดึงค่าจาก address นั้นมาบวก 10
    //printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr);
    //printf("arrptr = %p, *arrPtr = %d",arrPtr, *arrPtr);
    // int number[] = {3, 4, 5, 6, 7};
    // for (int *ptr = number; ptr <= &number[4]; ptr++)
        //printf("[%p] = %d\n",ptr, *ptr);
    // int *ptr2 = number;
    // for (int i = 0; i < 5; i++)
        //printf("[%p] = %d\n",ptr2+i, *(ptr2+i));
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input;*cPtr != '\0' ; cPtr++)
            //printf("%c\n", *cPtr);
    // char c;
    // int i;
    // char s[100];
    // scanf("%d-%c-%s",&i ,&c ,s); ถ้าเปน string ไม่ต้องใส่  &
    // printf("%d %c %s", i, c, s);
}
