#include <stdio.h>
int main(){
  char x;
  scanf("%c", &x);
  if(x>='a' && x<='z'){x=x-' ';}
  switch (x){
    case 'M': printf("Mastery"); break;
    case 'A': printf("Altruism"); break;
    case 'H': printf("Harmony"); break;
    case 'I': printf("Integrity"); break;
    case 'D': printf("Determination"); break;
    case 'O': printf("Originality"); break;
    case 'L': printf("Leadership"); break;
    default : printf("Invalid character");
  }
  return 0;
}