/* Type Your Code here */
#include <stdio.h>
int main(){
  int n, m, i, l, a[100][100], b[100][100];
  while(1){
    scanf("%d%d", &n, &m);
    if(n>0 && m>0){
      for(i=0; i<n; i++){
        for(l=0; l<m; l++){
          scanf("%d", &a[i][l]);
        }
      }for(i=0; i<n; i++){
        for(l=0; l<m; l++){
          scanf("%d", &b[i][l]);
        }
      }for(i=0; i<n; i++){
        for(l=0; l<m; l++){
          printf("%d ", a[i][l]+b[i][l]);
        }printf("\n");
      }return 0;
    }
  }
}