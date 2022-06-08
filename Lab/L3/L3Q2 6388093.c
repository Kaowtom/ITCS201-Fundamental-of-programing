#include <stdio.h>
int main(){
  int a=0, n, b, i;
  scanf("%d", &n);
  for(i=1;i<=n;i++){
    scanf("%d", &b);
    a=b+a;
  }printf("%d", a);
  return 0;
}