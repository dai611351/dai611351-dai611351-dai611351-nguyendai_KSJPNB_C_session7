#include <stdio.h>
int main() {
	int array[5];
	printf("Nhap lan luot 5 so nguyen\n");
	for(int i = 0; i < 5; i++) {
		printf("Moi nhap vao so nguyen thu %d " , i + 1);
		scanf("%d", &array[i]);
	} 
	printf("Cac so nguyen lan luot la \n");
	for(int i = 0; i < 5; i++) {
		printf("Phan tu thu %d la %d\n", i + 1, array[i]);
	}
	
	return 0;
}
