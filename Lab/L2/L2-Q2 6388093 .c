#include<stdio.h>
int main(){
  int h, m, s, x;
  scanf("%d", &x);
  h = x/3600;
  m = (x-h*3600)/60;
  s = x%60;
  printf("%d:%d:%d", h, m, s);
  return 0;
}