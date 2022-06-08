#include <stdio.h>
int main()
{
  int a[1000], b[1000], n, i, sum=0;
  while(1)
  {
    scanf("%d", &n);
    if(n>0)
    {
      for(i=0; i<n; i++)
      {
        scanf("%d", &a[i]);
      }
      for(i=0; i<n; i++)
      {
        scanf("%d", &b[i]);
      }
      for(i=0; i<n; i++)
      {
        sum=sum+(a[i]*b[i]);
      }
      printf("%d", sum);
      return 0;
    }
  }
}