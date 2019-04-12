#include <stdio.h>

int main() {
	int A, B, C, X, result = 0;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &X);
	
	for(int a = 0; a <= A; a++) {
		int sumA = 500 * a;
		if(sumA > X){
			break;
		}
		for(int b = 0; b <= B; b++) {
			int sumAB = sumA + 100 * b;
			if(sumAB > X){
				break;
			}
			
			if(sumAB <= X && X <= sumAB + 50 * C) {
				result++;
			}
		}
	}
	
	printf("%d\n", result);
	
	return 0;
}
