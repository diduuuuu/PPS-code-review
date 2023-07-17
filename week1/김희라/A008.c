#include <stdio.h>

int main() {
  int testCase;
  scanf("%d", &testCase);

  int *arr;
  double r[testCase];

  for (int i = 0; i < testCase; i++) {
    int studentNum;
    scanf("%d", &studentNum);

    arr = (int *)malloc(studentNum * sizeof(int));
    int sum = 0;

    for (int j = 0; j < studentNum; j++) {
      scanf("%d", &arr[j]);
      sum += arr[j];
    }

    double avg = (double)sum / studentNum;

    int avgUp = 0;
    for (int j = 0; j < studentNum; j++) {
      if (avg < arr[j]) {
        avgUp++;
      }
    }

    r[i] = (double)avgUp / studentNum * 100;

    free(arr);
  }

  for (int i = 0; i < testCase; i++) {
    printf("%.3f%%\n", r[i]);
  }

  return 0;
}
