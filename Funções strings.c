#include <stdio.h>
#include <string.h>

int main() {

  char string1[] = "Cefras";
  char string2[] = "Jose";

  strlwr(string1);                 //converts a string to lowercas
  //strupr(string1);                 // converts a string to uppercase
  //strcat(string1, string2);        // appends string 2 to end of string1
  //strncat(string1, string2, 1);    // appends n characters from string2 to string1
  //strcpy(string1, string2);        // copy string2 to string1
  //strncpy(string1, string2, 4);   // copy n characters of string2 to string1

  //strset(string1, '?');       // sets all characters of a string to a given character
  //strnset(string1, 'x', 1);   // sets first n characters of a string to a given character
  //strrev(string1);            // reverse a string

  //int result = strlen(string1);                       // returns string length as int
  //int result = strcmp(string1, string2);            // string compare all characters
  //int result = strncmp(string1, string2, 1);       //string compare n characters
  int result = strcmpi(string1, string1);          // string compare all (ignore case)
  int result = strnicmp(string1, string1, 1);    // string compare n characters (ignore case)

  
  printf("%d", result);

  /*
  if(result == 0){
    printf("These strings are the same");
  }
  else{
    printf("These strings are not the same");
  }
  */
  
  return 0;
}
