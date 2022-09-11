#include <stdio.h>

int main() {
  // variable = Allocated space in memory to store a value.
  // We refer to a variable's name to acess the stored value.
  // That variable new behaves as if it was the value it contains.
  // BUT we need to declare what type of data we are sotring.

  int x; //declaration
  x = 123; //initialization
  int  y = 456; //declaration + initialization

  int age  = 20;         //integer
  float gpa = 2.05;      //floating point number
  char grade = 'C';      //single character
  char name[] = "Cefras";   //array of characters

  printf("Hello %s\n",name);
  printf("You are %d years old\n",age);
  printf("Your average grade is %c\n",grade);
  printf("Your gpa is %f\n",gpa);
  
  return 0;
}
