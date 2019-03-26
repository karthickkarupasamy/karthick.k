#include <stdio.h>
int main(void) 
{
int a[10],k,i=0,p,n,j,max=0;
scanf("%d %d",&n,&p);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
while(j<p)
{
scanf("%d",&k);
a[n]=k;
n++;
for(i=0;i<n;i++)
{
if(a[i]>=max)
{max=a[i];
}}
printf("%d ",max ); 
j++; 
}

}
