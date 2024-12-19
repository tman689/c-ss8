#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	
	int matrix[n][n];
	printf("Nhap so cho mang: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("Nhap so vào trong mang [%d][%d]: ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\nma tran vuong ban da nhap la: \n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
	
	
