#include<stdio.h>
int main(void)
{
char a[200];
int i;
scanf("%[^\n]",a);
for (i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
printf("%c",a[i]);
}}
}
