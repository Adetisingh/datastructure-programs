#include <stdio.h>
#define N 3

void subtract(int MAT1[][N], int MAT2[][N], int RESULT[][N]) {
 int i, j;
 for (i = 0; i < N; i++)
 for (j = 0; j < N; j++)
 RESULT[i][j] = MAT1[i][j] - MAT2[i][j];
}
int main() {
 int MAT1[N][N] = { {1, 2, 3},
 {4, 5, 6},
 {7, 8, 9}
 };
 int MAT2[N][N] = { {9, 8, 7},
 {6, 5, 4},
 {3, 2, 1}
 };
 int RESULT[N][N];
 int i, j;
 subtract(MAT1, MAT2, RESULT);
 printf("Resultant matrix is \n");
 for (i = 0; i < N; i++) {
 for (j = 0; j < N; j++)
 printf("%d ", RESULT[i][j]);
 printf("\n");
 }
 return 0;
}
