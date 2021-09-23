#include <stdio.h>
#define COL 10

typedef struct complex {
  float real, imaginary;
} COMPLEX;

COMPLEX complex_add(COMPLEX a, COMPLEX b);

int main(void) {
  COMPLEX c1, c2, c3;

  c1.real = 1;
  c1.imaginary =2;
  c2.real = 3;
  c2.imaginary = 4;

  c3 = complex_add(c1, c2);
  printf("%0.2f+%0.2fi\n", c3.real, c3.imaginary);
  
  return 0;
}

COMPLEX complex_add(COMPLEX a, COMPLEX b){
  COMPLEX c;
  c.real = a.real + b.real;
  c.imaginary = a.imaginary + b.imaginary;

  return c;
}