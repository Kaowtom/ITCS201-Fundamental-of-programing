#include <stdio.h>
int main(){
  int input, num, onum=0;
  scanf("%d", &input);
  if(input%10==0){
      num=1;
      onum=num+onum;}
  while(!(input<0 && input%2 != 0)){
    scanf("%d", &input);
    if(input%10==0){
      num=1;
      onum=num+onum;
    }
  }printf("%d", onum);
  return 0;
}