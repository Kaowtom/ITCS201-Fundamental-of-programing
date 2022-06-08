/* Type Your Code here */
#include<stdio.h>
int main(){
  int n, i;
  for(i=1;i<=5;++i){
    scanf("%d", &n);
    if(n<=100 && n>=-100 && n%2==0){
      printf("approved");
      return 0;
    }
  }printf("time out");
  return 0;
}