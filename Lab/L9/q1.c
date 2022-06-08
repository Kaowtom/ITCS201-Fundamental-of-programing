#include <stdio.h>
#include <math.h>
float euc_dist(int x, int y, int n, int m){
  float dis;
  dis=pow( pow(n-x,2) + pow(m-y,2),0.5);
  return dis;
}
int main(){
  int a, b, n, m;
  float dis;
  scanf("%d %d", &a, &b);
  scanf("%d %d", &n, &m);
  dis=euc_dist(a, b, n, m);
  printf("%.2f", dis);
  return 0;
}