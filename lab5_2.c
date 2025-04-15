#include <stdio.h>
#define M 3
#define N 4

int main() {
    double B[M][N] = {
        {-1.2, -3.4, 5.6, -0.7},
        {2.1, 2.3, 1.1, 4.5},
        {2.2, -3.3, 1.0, -6.7}
    };

    int positive_per_row[M] = {0};
    int total_positive = 0;
    double Y[M * N]; 
    int y_index = 0;

    for (int i = 0; i < M; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (B[i][j] > 0) {
                count++;
                total_positive++;
            } else if (B[i][j] < 0) {
                Y[y_index++] = B[i][j];
            }
        }
        positive_per_row[i] = count;
    }

    printf("Кількість додатних елементів у кожному рядку:\n");
    for (int i = 0; i < M; i++) {
        printf("Рядок %d: %d\n", i + 1, positive_per_row[i]);
    }

    printf("\nЗагальна кількість додатних елементів: %d\n", total_positive);

    printf("\nМасив Y з від’ємних елементів:\n");
    for (int i = 0; i < y_index; i++) {
        printf("%.2f ", Y[i]);
    }
    printf("\n");

    return 0;
}