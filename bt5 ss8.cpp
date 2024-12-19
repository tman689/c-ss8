#include<stdio.h>

int main(){
	int n,m;
	printf("Nhap so n vao mang: ");
	scanf("%d", &n);
	printf("Nhap so m vao mang: ");
	scanf("%d", &m);
	
	int arry[n][m];
	printf("Nhap cac phan tu vao mang: ");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("Nhap so vao mang [%d][%d] ", i+1, j+1);
			scanf("%d", &arry[i][j]);
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
        sum += arry[i][0];  
        sum += arry[n - 1][i];
	}
    for (int j = 0; j < m; j++) {
        sum += arry[0][j];  
        sum += arry[m-1][j];
    }
    if (m == 1 || n == 1) {
        sum -= arry[0][0];
    }
    printf("Tong cac so cot ma tran: %d\n");
    return 0;
}
