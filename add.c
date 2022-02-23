#include<stdio.h>
#include<string.h>
void main()
{
  char a[10],b[10];
  printf("enter first string");
  scanf("%s",&a);
  printf("enter second string");
  scanf("%s",&b);
  strcat(a,b);
  printf("string is=%s",a);
  }
 
