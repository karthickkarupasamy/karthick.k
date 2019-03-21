#include<stdio.h>
#include<string.h>
int main()
{
  char a[10000];
  int i,l;
  scanf("%s",a);
  l=strlen(a);
  for(i=l-1;i>=0;i--)
  {
    printf("%c",a[i]);
  }
}
