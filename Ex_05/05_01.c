#include <stdlib.h>
#include <stdio.h>

void freeArrayAB(int *A, int *B, int size);
void freeArray(int *A, int size);
int getNumbers(int *nums, int size);

int main() {
  int N;
  scanf("%d", &N);
  int  *A, *B;
  A = malloc(sizeof(int) * N);
  B = malloc(sizeof(int) * N);
  if (A == NULL || B == NULL) {
    printf("n/a");
    return 0;
  } 
  if (!getNumbers(A, N) && !getNumbers(B, N)) {
    printf("n/a");
    freeArrayAB(A, B, N);
      return 0;
  }
  int mul = 0;    // mul =summ
    for (int j = 0; j < N; j++) {
      mul += A[j] * B[j];
    }
  printf("%d",mul);
  
  freeArrayAB(A, B, N);
}

void freeArrayAB(int *A, int *B, int size) {
  freeArray(A, size);
  freeArray(B, size);
}

void freeArray(int *array, int size) {
  if (array == NULL)
    return;
  free(array);
}

int getNumbers(int *nums, int size) { // getnumder==input
  for (int i = 0; i < size; i++) {
    char ch;
    int cnt = scanf("%d%c", &nums[i], &ch);
    if (cnt != 2 || (ch != ' ' && ch != '\n') || (ch == '\n' && (i + 1 < size)) || (ch != '\n' && (i + 1 == size)))
    return 0;
  }
  return 1;
}