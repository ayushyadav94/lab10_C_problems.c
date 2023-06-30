//check prime number
#include <stdio.h>
#include<math.h>
int checkPrime(int num){
  int i=2;
  for(i=2;i<=sqrt(num);i++){
    if(num%i==0){
      return 1;
    }
  }
  return 0;
}
int main(void) {
  int n;
  scanf("%d",&n);
  int a=checkPrime(n);
  if(a)
  printf("numer %d is Prime",n);
  else
     printf("numer %d is No Prime",n);
  return 0;
}
