#include<stdio.h>

int main() {
	
	int i, j, rows, cols;
	
	printf("Nhap so hang va so cot bang nhau ");
	scanf("%d%d", &rows, &cols);
	
	int arr[rows][cols];
	if(rows == cols){
	   printf("Moi ban nhap gia tri cho tung phan tu: \n");
	
	for(i=0; i < rows; i++){
		for(j=0; j < cols; j++){
			
			printf("Moi ban nhap phan tu tai hang thu %d va cot thu %d \n", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}for(i=0; i < rows; i++){
		for(j=0; j < cols; j++){
			
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}

}
