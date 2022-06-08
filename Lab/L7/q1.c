/* Type Your Code here */
#include <stdio.h>
int main(){
  int n, m, i, l, a[100][100], best=0, sum=0, sumo;
  while(1){
    scanf("%d%d", &n, &m);
    if(n>0 && m>0){
      for(i=0; i<n; i++){
        sumo=sum;
        sum=0;
        for(l=0; l<m; l++){
          scanf("%d", &a[i][l]);
          sum=sum+a[i][l];
        }if(sum>sumo){
          best=i;
        }
      }printf("%d", best);
      return 0;
    }
  }
}