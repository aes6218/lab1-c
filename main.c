#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(void) {
  char *celsius = readLine("Enter temperature in celsius: ");
  double c = atof(celsius);
  double f = (c * 9/5) + 32
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n"),c,f;
  return 0;
}