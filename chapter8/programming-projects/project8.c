/*
 * Reading 5 quiz grades (0-100) of 5 students and then prints
 * total score and average score for each student
 * and average score, high score, and low score for each quiz
 */

#include <stdio.h>

#define N 5

int main(void)
{
  int grades[N][N], i, j, sum, high, low;

  for (i = 0; i < N; i++) {
    printf("Enter grades of student%d: ", i + 1);
    for (j = 0; j < N; j++) {
      scanf("%d", &grades[i][j]);
    }
  }
  printf("\n");

  printf("Students	Total	Average\n");
  for (i = 0; i < N; i++) {
    printf("student%d	", i + 1);
    sum = 0;
    for (j = 0; j < N; j++) {
      sum += grades[i][j];
    }
    printf("%d	", sum);
    printf("%.2f\n", (float) (sum / 5.0f)); 
  }
  printf("\n");

  printf("Quizes	Average	High	Low\n");
  for (i = 0; i < N; i++) {
    printf("quiz%d	", i + 1);
    sum = 0;
    high = grades[0][i];
    low = grades[0][i];
    for (j = 0; j < N; j++) {
      sum += grades[j][i];
      high = high < grades[j][i] ? grades[j][i] : high;
      low = low > grades[j][i] ? grades[j][i] : low;
    }
    printf("%.2f	", (float) (sum / 5.0f));
    printf("%d	", high);
    printf("%d\n", low);
  }

  return 0;
}
