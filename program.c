#include<stdio.h>
int main()
{
 int num,x,count=0;
 scanf("%d %d",&num,&x);
 while(num>0)
 {
  float d=(num*x)/100;
  num=num-d;
  count++;
 }
 printf("%d",count);
 return 0;
}
