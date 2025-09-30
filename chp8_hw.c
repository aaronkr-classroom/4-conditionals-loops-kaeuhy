// p.47
// Q1, Q2, Q3 작성하고 결과를 콘솔에 출력하세요.

// Q1
int result = -5;
if (result < 0)
  result = result * (-1);

// Q2
int result = -5;
result = (result < 0) ? result * (-1) : result;

// Q3
int result = 5;
switch (result)
{
case 6:
  result = 0;
  break;
case 5:
  result = 1;
case 4:
  result = result * 10;
  break;
}
// result 값이 5일지라도 case 5에서 break가 없기 때문에 case 4로 넘어간다