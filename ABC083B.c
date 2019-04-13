// ABC083B - Some Sums
// https://atcoder.jp/contests/abs/tasks/abc083_b

#include <stdio.h>

int main() {
	int N, A, B, sum = 0;
	
	scanf("%d%d%d", &N, &A, &B);
	
	for(int n = 1; n <= N; n++) {
		int n4 = n / 10000;
		int n3 = (n / 1000) % 10;
		int n2 = (n / 100) % 10;
		int n1 = (n / 10) % 10;
		int n0 = n % 10;

		int sumN = n0 + n1 + n2 + n3 + n4;
		if(A <= sumN && sumN <= B) {
			sum += n;
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
