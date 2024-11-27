#include <stdio.h>
int main() {
	int array[5] = {11, 23, 33, 45, 55};
	int evenCount = 0;
	printf("Cac so chan trong mang la\n");
	for(int i = 0; i < 5;i++) {
		if(array[i] % 2 == 0) {
			printf("%d\n", array[i]);
			evenCount++; 
			 
		} 
	} 
	if(evenCount == 0) {
		printf("Khong co so chan trong mang\n"); 
	} 
	
	
	return 0;
}
