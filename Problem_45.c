
//check prime number
#include <stdio.h>
#include<math.h>
int fact(int num){
  int fct=1;
  int i;
  for(i=2;i<=num;i++){
    fct*=i;
  }
  return fct;
}
int main(void) {
  int n;
  scanf("%d",&n);
  int a=fact(n);
  
  printf("factorial of number %d is %d",n,a);
  
  return 0;
}
