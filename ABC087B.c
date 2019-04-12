#include <stdio.h>

int main() {
	int A, B, C, X, result = 0;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &X);
	
	for(int a = 0; a <= A; a++) {
		int sumA = a * 500;
		if(sumA > X){
			break;
		}
		for(int b = 0; b <= B; b++) {
			int sumAB = sumA + b * 100;
			if(sumAB > X){
				break;
			}
			for(int c = 0; c <= C; c++) {
				int sumABC = sumAB + c * 50;
				if(sumABC == X) {
					result++;
					break;
				}
			}
		}
	}
	
	printf("%d\n", result);
	
	return 0;
}
