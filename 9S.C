#include <stdio.h>
int main() 
{
  int i,c,a[10],b,sum=0;
  printf("enter the limit of natural numbers");
  printf("  \nenter upto what you have to sum");
  scanf("%d%d",&c,&b);
  {
  for(i=1;i<=c;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<=b;i++)
  {
  sum=sum+i;
}
printf("%d",sum);
}
  return 0;
}
