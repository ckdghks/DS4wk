/*
크기가 10인 배열 two[]를 선언하고 여기에 2의 제곱 값들을 저장해보자. 즉 배열의 첫 번째 요소에는 2^0을 저장하고 두 번째 요소에는 2^1값을 저장한다. 마지막 요소에는 2^9값을 저장한다. for루프를 이용하여 two[] 배열의 전체 요소의 값을 출력하는 프로그램을 작성하라.
*/
#include <stdio.h>
#define COL 10

int main(void) {
  int two[COL] = {0};
  int i;

  for(i=0; i<COL; i++){
    int exp = 1;
    for(int j=0; j<i; j++){
      exp = exp * 2;
    }
    two[i] = exp;
  }

  for(i=0; i<COL; i++){
    printf("2^%d: %d\n", i, two[i]);
  }

  return 0;
}
