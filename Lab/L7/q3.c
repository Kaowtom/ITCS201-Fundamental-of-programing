#include <stdio.h>
int main(){
  int n, i, l, a[100][100], sum=0;
  while(1){
    scanf("%d", &n);
    if(n>0){
      for(i=0; i<n; i++){
        for(l=0; l<n; l++){
          scanf("%d", &a[i][l]);
        }
      }for(i=0; i<n; i++){
        for(l=0; l<n; l++){
          if(i==l){
            sum=sum+a[i][l];
            printf("%d, ", a[i][l]);
          }
        }
      }printf("%d", sum);
      return 0;
    }
  }
}
/*/
00 01 02
10 11 12
20 21 22
/*/