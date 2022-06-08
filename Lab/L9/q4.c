#include <stdio.h>

int is_prime(int n);

int main(void) {
  int num;
  while(1){
  scanf("%d", &num);
  if(num>=2){
    if (is_prime(num)) printf("%d is a prime number.", num);
    else printf("%d is NOT a prime number.", num);
    return 0;
    }
  }
}

// Write the function is_prime here
// Hint: The is_prime function is used to determine 
//       whether an input number is a prime number.
//       It returns 1 (i.e., true) when the input is a prime.
//       It returns 0 (i.e., false) when the input is not a prime.

int is_prime(int n){
  int i, count;
  for(i=2; i<=n; i++){
    if(n%i==0){
      count++;
    }
  }if(count==1){
    return 1;
  }else{
    return 0;
  }
}