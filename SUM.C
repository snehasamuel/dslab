#include<stdio.h>
int add(int, int);
void main()
{
int a,b,sum;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
sum=add(a,b);
printf("Sum=%d",sum);
getch();
}
int add(int x, int y)
{
return(x+y);
}
