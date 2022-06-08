#include<stdio.h>
int main(){
  int x, t, i;
  scanf("%d", &x);
  for(i=1;i<=100;i++){
    if(i%x==0){
    printf("%d ", i);
    }
  }
}