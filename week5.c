#include <stdio.h>
int addTen(int *number, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("[%p] = %d\n",number + i, *(number+i));
        *(number + i)+=10;//add 10 for every data in numbers
    }
    return 1;
}
void addTwenty(int *n) // n ��� address �ͧ "int n = 5" ���Ǿ� n �� * ������¶֧��Ҥ��� address ����͡�Ҥӹǳ㹿ѧ��ѹ
{
    *n +=20;
}
int main()
{
    int numbers[] = {4,5,6,7,8};
    int n = 5;
    addTen(numbers,n);//�ç number ����໹��ͧ���  &
    for (int i = 0; i < n; i++)
    {
        printf("main [%p] = %d\n",numbers + i, *(numbers +i));
    }
    addTwenty(&n); //�觤�� address �ͧ n ��ҿѧ��ѹ addTwenty
    printf("n = %d\n",n);
}
