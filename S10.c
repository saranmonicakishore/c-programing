#include <stdio.h>
int main()
{
 int n,a,j=1;
 scanf("%d",&a);
 n=a;
 while(a!=0)
 {
 a=a/10;
 if (a!=0)
 j++;
 }
 printf("%d",j);
}
