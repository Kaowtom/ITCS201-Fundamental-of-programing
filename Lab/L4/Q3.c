#include <stdio.h>
int main(){
  int max=0, sum=0, first=1, n, i=1;
  while(1){
    if(sum>first){
      printf("%d", max);
      return 0;
    }
    scanf("%d", &n);
    sum=sum+n;
    if(i==1){
      first=n*2;
      i++;
    }if(n>max){
      max=n;
    }
  }
}