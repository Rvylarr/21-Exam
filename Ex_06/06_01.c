// Multiplicate matrixs
#include <stdlib.h>
#include <stdio.h>

void freeArrayAB(int **A, int **B, int size);
void freeArray(int **A, int size);
int getNumbers(int *nums, int size);

int main() {
  int N;
  printf("Size: ");
  scanf("%d", &N);
  int **A, **B;
  A = malloc(sizeof(int) * N);
  B = malloc(sizeof(int) * N);
  if (A == NULL || B == NULL) {
    printf("n/a");
    return 0;
  }
  for (int i = 0; i < N; i++) {
    A[i] = malloc(sizeof(int) * N);
    if (A[i] == NULL) {
      printf("n/a");
      freeArrayAB(A, B, N);
      return 0;
    }
    if (!getNumbers(A[i], N)) {
      printf("n/a");
      freeArrayAB(A, B, N);
      return 0;
        }
    }
  printf("You entered: \n");
  for (int i = 0; i < N; i++) {
    printf("Row %d: ", i);
    for (int j = 0; j < N; j++) {
      printf("%d ", A[i][j]);
    }
  printf("\n");
  }
}

void freeArrayAB(int **A, int **B, int size) {
  freeArray(A, size);
  freeArray(B, size);
}

void freeArray(int **A, int size) {
  if (A == NULL)
    return;
  for (int i = 0; i++; i < size) {
    if (&A[i] != NULL) {
      free(&A[i]);
      }
  }
  free(A);
}

int getNumbers(int *nums, int size) {
    for (int i = 0; i < size; i++) {
      char ch;
      char nextCh;
      int cnt = scanf("%d%c", &nums[i], &ch);
      if (ch == 0x0A) {
        nextCh = ch;
        } else {
          nextCh = getc(stdin);
          ungetc(nextCh, stdin);
        }
      if (cnt != 2 && ch != 0x20 || cnt == 0 || (nextCh == 0x0A && i + 1 < size) || (nextCh != 0x0A && i + 1 == size) || (nextCh != 0x0A && nextCh < '0' && nextCh > '9')) //(((((((((
      return 0;
    }
    return 1;
}

