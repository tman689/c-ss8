#include<stdio.h>

int main(){
	int x, socantim=0;
	int arry[5] = {5, 10, 15, 20, 25};
	printf("Nhap cac phan tu can tim: ");
	scanf("%d", &x);
	for(int i = 0; i < 5; i++){
		if(arry[i] == x){
			printf("Vi tri so can tim trong mang la: %d\n", i);
			socantim = 1;
			break;
		}
	}
	if(socantim == 0){
		printf("So ban nhap khong co trong mang. \n");
	}
	return 0;
}
			
