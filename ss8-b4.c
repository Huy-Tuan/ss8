#include<stdio.h>

int main () {
	
	int i, j, arr[2][2] = {{0, 2},{3, 5}};
	int max = arr[0][0];
	int min = arr[0][0];
	for(i=0;i<2;i++){
		for(j=0; j < 2; j++){
		
		if(max < arr[i]){
			max = arr[i][j];
		}else if(min > arr[i]){
			min = arr[i][j];
		}
	}
		}
			
	printf("Max cua mang la %d\n", max);
	printf("Min cua mang la %d\n", min);
}
