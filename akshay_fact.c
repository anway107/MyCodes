#include<stdio.h>
void main()
{
int num,f,i;
 f=1;
printf("enter a number");
scanf("%d",&num);
 i=num;

while(i>=1)
{

f=f*i;

i--;

}printf("factorial of num is %d",f);


}
