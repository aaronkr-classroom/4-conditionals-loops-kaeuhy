// p.89의 코드가 작성하고 실행해주세요
// 369 게임 무시

// Q1
/*
m(5)-n(0)
m(6)-n(0)
m(6)-n(1)가 출력이 된다
*/
#include <stdio.h>

void main()
{
  int m, n;
  for (m = 5; m < 7; m++)
  {
    for (n = 0; n < 3; n++)
    {
      if (m == 5 && n == 1)
        break;
      if (n == 2)
        continue;
      printf("m(%d)-n(%d)\n", m, n);
    }
  }
  return 0;
}

// Q2
#include <stdio.h>

void main()
{
  int step = 2, i;

  while (step <= 9)
  {
    i = 1;
    while (i <= 9)
    {
      printf("%d * %d = %d\n", step, i, step * i);
      i++;
    }
    step++;
  }
  return 0;
}