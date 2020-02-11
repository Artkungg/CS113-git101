#include<stdio.h>
int addTen(int x)
{
    x = x+10;
    return x;
}
int addTwenty();
int x = 1000;
int main()
{
    int x = 50;
    int y = addTen(x);//เรียกใช้ฟังก์ชันaddTen
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
    check();
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x);//x เป็น 1000
    x = x+20;//บวกทับค่าx=1000ที่อยู่global
    return x;
}
