#include <stdio.h>

int main(){
  int x, i;
  scanf("%d", &x);
  if(x<1){
    printf("Unable to print the sequence");
  }else{
    if(x%2==0){
      x-=1;
    }
    for(i=x;x>=1;x-=2){
      printf("%d ", x);
    }
  }return 0;
}