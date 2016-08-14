


#include<stdio.h>
void main()
{float a,b,c,sum;
printf("enter the three angles of triangle");
scanf("%f %f %f  ",&a,&b,&c);
 sum=a+b+c;



if(sum==180)
{
printf("given triangle is valid");
}
else
{
printf("invalid triangle");
}

}
