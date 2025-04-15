#include <stdio.h>
#include <math.h>

#define N 4

int main() {
    double A[N][N] = {
        {3.2, -1.5, 4.0, 2.1},
        {0.5, -0.3, 2.8, 1.2},
        {1.7, 3.3, -0.8, 0.6},
        {2.9, -1.1, 1.5, -2.2}
    };

    double min_abs = fabs(A[0][0]);
    double multiplier;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (fabs(A[i][j]) < min_abs) {
                min_abs = fabs(A[i][j]);
                multiplier = A[i][j];
            }
        }
    }

    double result[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            result[i][j] = A[i][j] * multiplier;
        }
    }

    printf("Одержана матриця шляхом множення всіх елементів цієї матриці на її найменший за модулем елемент:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%6.2f ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
