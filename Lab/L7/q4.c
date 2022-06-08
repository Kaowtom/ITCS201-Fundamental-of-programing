/* Type Your Code here */
#include <stdio.h>
int main(){
  int n, m, i, l, a[100][100], from, count=0;
  while(1){
    scanf("%d%d", &n, &m);
    if(n>0 && m>0){
      for(i=0; i<n; i++){
        for(l=0; l<m; l++){
          scanf("%d", &a[i][l]);
        }
      }scanf("%d", &from);
      for(i=0; i<n; i++){
        for(l=0; l<m; l++){
          if(from==a[i][l]){
            printf("[%d,%d] ", i, l);
            count++;
          }
        }
      }if(count==0){
        printf("not found");
      }
      return 0;
    }
  }
}