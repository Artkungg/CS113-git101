#include<stdio.h>
#include<stdlib.h>
/*struct student{//student ��� ���ͧ͢struct
    int point;//��Դ������
    float grade;//��Դ������
}stu;//����÷����ҧ�ԧstruct
struct student stu={100,4.00};//8��� 100 �ж١ࡺ���� point,4.00 �ж١ࡺ����grade*/
/*typedef struct{
    char name[10];
    int age;
}hum;
hum info={"Itthipon",19};//name is Itthipon, age is 19*/
/*struct student{
    int point;
    float grade;
}stu;*/
//array with struct
/*struct subject{
    int sub_id;
    char sub_name[10];
}s[3]={0};*/
//pointer with struct
//pointer with struct
struct student{
    char name[10];
    int age;
}info={"Itthipon",19};
struct student *stu_info;
int main()
{
    /*printf("%d\n",stu.point);//show point
    printf("%.2f\n",stu.grade);//show grade*/
    /*printf("%s\n",info.name);
    printf("%d\n",info.age);*/
    /*int p;
    float g;
    printf("point is ");
    scanf("%d",&p);
    printf("grade is ");
    scanf("%f",&g);*/
    /*stu.point=p;//�Ѻ�����������ѧ struct
    stu.grade=g;//�Ѻ�����������ѧ struct
    printf("your point is %d\n",stu.point);
    printf("your grade is %.2f\n",stu.grade);*/
    /*int i;
    char id[10],sn[10];
    for(i=0;i<3;i++)
    {
        printf("Enter sub id ");
        gets(id);
        s[i].sub_id=atoi(id);
        printf("Enter sub name ");
        gets(s[i].sub_name);
    }
    for(i=0;i<3;i++)
        printf("%d %s\n",s[i].sub_id,s[i].sub_name);*/
    stu_info=&info;
    printf("%s %d",stu_info->name,stu_info->age);
}
