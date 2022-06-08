#include <stdio.h>
int main(){
  int n, i, j, k;
  while(1){
    scanf("%d", &n);
    if(n>1){
      for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
          printf("+ ");
        }for(k=n-i; k>=1; k--){
          printf("- ");
        }printf("\n");
      }return 0;
    }
  }
}