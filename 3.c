#include<stdio.h>
void main()
{
 int i,n,sum=0;
 printf("enter a num");
 scanf("%d",&n);
 while(n>0)
 {
     i=n%10;
     sum=sum+i;
     n=n/10;
      printf("%d",i);
}
 
}
