#include<stdio.h>
int main(){
  int x;
  scanf("%d", &x);
  if (x>=0 && x<=127){
    if(x>=48 && x<=57){
      printf("The ASCII value of %d is a Number '%c'", x, x);
      return 0;
    }
    if(x>=65 && x<=90){
      printf("The ASCII value of %d is a Uppercase Letter '%c'", x, x);
      return 0;
    }
    if(x>=97 && x<=122){
      printf("The ASCII value of %d is a Lowercase Letter '%c'", x, x);
      return 0;
    }
    printf ("The ASCII value of %d is a Control character or Special character '%c'", x, x);
  }else{ 
    printf("Invalid ASCII value"); 
    }
  return 0;
}