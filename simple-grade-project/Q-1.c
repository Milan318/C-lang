#include <stdio.h>
int main()
{
  int sub1, sub2, sub3, total;
  float avg;
  char grade;
  printf("Enter sub1 marks:");
  scanf("%d", &sub1);

  printf("Enter sub2 marks:");
  scanf("\n%d", &sub2);

  printf("Enter sub3 marks:");
  scanf("\n%d", &sub3);

  total = sub1 + sub2 + sub3;
  printf("\nTotal is:%d", total);

  avg = total / 3;
  printf("\nAvrege is:%.2f", avg);

  grade = avg >= 90 ? 'A':avg >= 80?'B': avg >= 70?'C':avg >= 60?'D': 'F';

  switch (grade)
  {
  case 'A':
    printf("\nExcellent work!.");
    break;

  case 'B':
    printf("\nWell done.");
    break;

  case 'C':
    printf("\nGood job.");
    break;

  case 'D':
    printf("\nYou passed, but you could do better.");
    break;

  default:
    printf("\nfail...");
    break;
  }

  if ((grade == 'A') || (grade == 'B') || (grade == 'C') || (grade == 'D'))
  {
    printf("\nCongratulations! You are eligible for the next level");
  }
  else
  {
    printf("\nPlease try again next time:");
  }

  return 0;
}