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
    int y = addTen(x);//���¡��ѧ��ѹaddTen
    printf("x in main = %d\n",x);
    printf("addTen in main = %d\n",y);
    printf("addTwenty in main = %d\n",addTwenty());
    check();
}
int addTwenty(){
    printf("x in addTwenty = %d\n",x);//x �� 1000
    x = x+20;//�ǡ�Ѻ���x=1000�������global
    return x;
}
