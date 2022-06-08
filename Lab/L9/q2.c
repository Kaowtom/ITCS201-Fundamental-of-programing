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
  int n, m, ans;
  scanf("%d %d", &n, &m);
  ans=find_min(n, m);
  printf("%d", ans);
  return 0;
}