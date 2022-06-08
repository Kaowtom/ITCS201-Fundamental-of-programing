#include <stdio.h>
int a[10000];
int i;

void compute_avg(int n, float *sum){
  *sum=0;
  for(i=0; i<n; i++){
    *sum = *sum + a[i];
  }*sum = *sum/n;
}

int main(){
  int n;
  float ans;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  compute_avg(n, &ans);
  printf("%.2f", ans);
  return 0;
}