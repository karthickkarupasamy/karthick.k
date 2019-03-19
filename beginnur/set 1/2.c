#include <stdio.h>
#include <string.h>
void main()
{
  int i,l;
  char a[10000];
  scanf("%s",a);
  l=strlen(a);
  for(i=l;i>=0;i--)
  {
    printf("%c",a[i]);
  }
  
}
