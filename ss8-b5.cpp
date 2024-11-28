#include <stdio.h>

int main() {
    int matrix[2][4] = {
        {1, 2, 3, 4},
         {5, 6, 7, 8}
	};
    int rows = 2; 
    int cols = 4; 

    int sum = 0;

    for (int j = 0; j < cols; j++) {
        sum += matrix[0][j];        
        sum += matrix[rows - 1][j]; 
    }

    for (int i = 1; i < rows - 1; i++) {
        sum += matrix[i][0];        
        sum += matrix[i][cols - 1]; 
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}

