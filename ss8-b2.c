#include<stdio.h>

int main () {
	int pos,numbers[5] = {1,2,3,4,5};
	int i, n;
	
	printf("Hay nhap vao mot phan tu ");
	scanf("%d", &n);
	for(i = 0; i < 5; i++){
		if (n==numbers[i]){
			pos=i;
		}
    }
    if(pos){
    printf("%d", pos+1);
    }else
    printf("khong co phan tu do trong mang");
}
