#include<stdio.h>
int main(){
	int arry[5] = {5, 10, 15, 20, 25};
	printf("Cac phan tu tu cuoi mang ve dau: \n");
	for(int i = 4; i >= 0; i--){
		printf("arry[%d] = %d\n", i, arry[i]);
	}
	printf("\n");
	return 0;
}
