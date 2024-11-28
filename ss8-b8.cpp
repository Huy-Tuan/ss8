#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = 3;
    int sum = 0;

    printf("Cac phan tu tren duong cheo phu la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
        sum += matrix[i][n - 1 - i];
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);

    return 0;
}

