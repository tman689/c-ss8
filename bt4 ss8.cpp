#include<stdio.h>

int main(){
	int arry[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int solonnhat = arry[0][0];
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(arry[i][j] > solonnhat){
				solonnhat = arry[i][j];
			}
		}
	}
	printf("so lon nhat trong mang la: %d", solonnhat);
	return 0;
}
