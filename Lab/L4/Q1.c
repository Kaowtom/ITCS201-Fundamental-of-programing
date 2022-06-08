/* Type Your Code here */
#include <stdio.h>
int main(){
  int num, min, max=0, i, l;
  for(i=1;i<=5;++i){
    scanf("%d", &num);
      if(num>max){
        max=num;
      }if(num<min){
        min=num;
      }
  }if(min%2!=0){
    min=min+1;
  }if(max%2!=0){
    max=max-1;
  }
  for(l=min;l<=max;l=l+2){
    printf("%d", l);
    if(l>=min&&l<max){
      printf(", ");
    }
  }
  return 0;
}