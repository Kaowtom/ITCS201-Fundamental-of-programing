/* Type Your Code here */
#include <stdio.h>
int main()
{
  int a[100], b[100], n, i, l, count=0;
  while(1)
  {
    scanf("%d", &n);
    if(n>0)
    {
      for(i=0; i<n; i++)
      {
        scanf("%d", &a[i]);
      }
      for(l=0; l<2; l++)
      {
        scanf("%d", &b[l]);
      }
      for(i=0; i<n; i++)
      {
        if(a[i]==b[0])
        {
          a[i]=b[1];
          count++;
        }
      }
      if(count!=0)
      {
        for(i=0; i<n; i++)
        {
          printf("%d ", a[i]);
        }
      }
      else
      {
        printf("not found");
      }
      return 0;
    }
  }
}