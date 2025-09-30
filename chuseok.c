#include <stdio.h>

void print_calendar(int);

int main(void)
{
  /*
    오늘 내용은:
      1. 조건문
      2. 반복문
  */

  // 1. 조건문
  int chuseok_mth = 10;
  int chuseok = 6;

  int this_mth = 9;
  int today = 30;

  if (this_mth == chuseok_mth)
  {
    printf("Chuseok is coming!");
  }
  else
  {
    printf("No Chuseok yet");
  }

  // 2. switch문

  // 3. 반복문
  // 서식: for(시작점; 조건; 증가/감소;) {지시문;}
  for (int i = today; i < 31; i++)
  {
    printf("Today is %dmonth %ddays!", this_mth, today);
  }

  // 달력 출력하기
  print_calendar(this_mth);

  return 0;
}

void print_calendar(int this_mth)
{
  /*
  30 days has September, April, June, and November
  All the rest have 31, save February which is short 1.
  */
  int short_mth = 2, // 2월 = 28일이나 29일
      mid_mth_1 = 9,
      mid_mth_2 = 4,
      mid_mth_3 = 6,
      mid_mth_4 = 11, // 배열을 공부할 때 여러 변수 필요없다.
      days;

  switch (this_mth)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    days = 31;
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    days = 30;
    break;
  case 2:
    days = 28;
    break;
  default:
    printf("That's not a month !");
    return;
  }

  printf("\n*** %d월 ***\n", this_mth); // 제목
  for (int i = 1; i < days; i++)
  {
    printf("%d\t", i);

    if (i % 7 == 0)
    {
      printf("\n");
    }
  }
}