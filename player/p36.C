#include<stdio.h>
int main(void)
{
int n,k,r,s=1,c=1;
scanf("%ld",&n);
scanf("%d",&k);
while(n)
{
r=n%10;
if(r==k)
c++;
n=n/10;
}
printf("%d",c);
}
