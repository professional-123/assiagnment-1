#include <stdio.h>

int main () {

  char mystr[60];

  printf("Enter your nmae : ");

  gets(mystr);

  printf("\"Hello,%s\"",mystr);

  return(0);
}
