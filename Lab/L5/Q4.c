#include <stdio.h>
int main(){
  int n, i, j, count=0;
  while(1){
    scanf("%d", &n);
    if(n>1&&n<1000){
      for(i=1;i<=n;i++){
        count=0;
        for(j=1;j<=n;j++){
          if(i%j==0){
            count++;
          }
        }if(count==2){
          printf("%d ", i);
        }
      }return 0;
    }
  }
}