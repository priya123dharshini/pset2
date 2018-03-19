#include<stdio.h>
#include<string.h>
void main()
{
 char s[20];
 printf("enter a character");
 scanf("%s",s);
 strcat(s,".");
 printf("%s",s);
}
