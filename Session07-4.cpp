#include <stdio.h>
int main() {
	int n; 
	printf("Nhap so phan tu cua mang ");
	scanf("%d" ,&n);
	if (n <= 0) {
		printf("So nhap vao khong hop le\n");
		return 1; 
	} 
	
	int array[n];
	printf("Nhap tung so phan tu cua mang\n");
	for(int i = 0; i < n ; i++) {
		printf("Phan tu thu %d ", i +1);
		scanf("%d", &array[i]);
	 } 
	printf("Cac phan tu trong mang la\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
	
	
	return 0;
}
