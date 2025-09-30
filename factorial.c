#include <stdio.h>

int factorial(int);

int main(void)
{
  int num = 5, // 5 * 4 * 3 * 2 * 1
      result = factorial(num);

  printf("%d! = %d", num, result);
  return 0;
}

// 재귀적 (recursive) 함수
int factorial(int num)
{
  if (num <= 1)
    return 1;
  else
    return factorial(num - 1);
}