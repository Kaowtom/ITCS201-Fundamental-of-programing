#include <stdio.h>
int main(){
  int n, i, j;
  char a=97;
  while(1){
    scanf("%d", &n);
    if(n>=2&&n<=9){
      for(i=1;i<=n;++i){
        for(j=1;j<=i;++j){
         if(a>122){
            a=a-26;
          }printf("%c ",a);
          a++;
        }printf("\n");
      }for(i=n-1;i>=1;i--){
       for(j=i;j>=1;j--){
         if(a>122){
           a=a-26;
          }printf("%c ", a);
         a++;
        }printf("\n");
      }return 0;
    }
  }
}