#include <stdio.h>
int find_min(int a, int b){
  int min=1e9;
  if(a>b){
    min=b;
  }else{
    min=a;
  }return min;
}
int main(){
  int n, m, a[1000][1000], i, l, ans=10000;
  scanf("%d %d", &n, &m);
  for(i=0; i<n; i++){
    for(l=0; l<m; l++){
      scanf("%d", &a[i][l]);
      ans=find_min(ans, a[i][l]);
    }
  }printf("%d", ans);
  return 0;
}