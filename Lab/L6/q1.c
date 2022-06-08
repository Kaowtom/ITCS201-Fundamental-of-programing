#include <stdio.h>
int main(){
  int arr[10000], i, n;
  while(1)
  {
    scanf("%d", &n);
    if(n>0)
    {
      for(i=0; i<n; i++)
      {
        scanf("%d", &arr[i]);
      }
      for(i=n-1; i>=0; i--)
      {
        printf("%d ", arr[i]);
      }
      return 0;
    }
  }
}