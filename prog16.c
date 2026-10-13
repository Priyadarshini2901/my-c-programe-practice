#include<stdio.h>
int main()
{
 int marks;scanf("%d",&marks);//
 if(marks>=85&&marks<=100)
 { 
 printf("grade a");
 }
 else if (marks>=65&& marks<85)
 {
 printf("grade-b");
 }
 else if (marks>=50&& marks<65)
 {
 printf("grade-c");
 }
 else
 {
 printf("fail");
 }
 return 0;
 }
