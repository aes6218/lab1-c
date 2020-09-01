#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *celsius = readline("Enter temperature in celsius: ");
  double c = atof(celsius);
  double f = (c * 9 / 5) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n",c,f);
  return 0;
}

// Author: August Sanderson aes6218@psu.edu
// Collaborator: Kirtan Shah kps5871@psu.edu
// Collaborator: Anthony Cicardo abc6181@psu.edu
// Collaborator: Karen Rodriguez kvr5509@psu.edu