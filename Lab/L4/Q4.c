/* Type Your Code here */
#include <stdio.h>
int main(){
  int n, i=1;
  scanf("%d", &n);
  while(i<n){
    i++;
    if(n%i==0){
      if(i==n){
        printf("prime");
        return 0;
      }else{
        printf("not prime");
        return 0;
      }
    }else{
      printf("prime");
      return 0;
    }
  }return 0;
}