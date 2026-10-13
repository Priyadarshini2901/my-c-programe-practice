#include<stdio.h>
int main()
{
  float a,b,c,d,e;
  printf("Enter the subject:");
  scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
  printf("tamil=%f\n",a);
  printf("english=%f\n",b);
  printf("maths=%f\n",c);
  printf("science=%f\n",d);
  printf("social=%f\n",e);
  printf("(((a+b+c+d+e)/5)*100)");
  return 0;
}
