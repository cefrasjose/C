#include <stdio.h>

int main() {

  // argumented assignment operators = used to replace a statement where an                                               operator 
  //                                   takes a variable as one of its arguments                                           and them the result back to the sama                                               variavble
  //                                   x = x + 1
  //                                   x+=1

  int x = 10;
  
  // x = x + 2;
  x+=2;

  //x = x - 3;
  x-=3;

  //x = x * 4;
  x*=4;

  // x = x / 5;
  x/=5;

  // x = % 2;
  x%=2;
  
  printf("%d", x);
  return 0;
}
