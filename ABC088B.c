// ABC088B - Card Game for Two
// https://atcoder.jp/contests/abs/tasks/abc088_b

#include <stdio.h>

int main() {
	int N;
	
	scanf("%d", &N);
	
	int a[N];
	
	for(int i=0; i<N; i++) {
		scanf("%d", &a[i]);
	}
	
	// Sort in descending order
	for(int i=0; i<N-1; i++) {
		for(int j=i+1; j<N; j++) {
			if(a[i] < a[j]) {
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	
	int aliceScore = 0;
	int bobScore = 0;
	for(int i=0; i<N; i++) {
		if(i % 2 == 0) {
			aliceScore += a[i];
		} else {
			bobScore += a[i];
		}
	}
	
	printf("%d\n", aliceScore - bobScore);
	
	return 0;
}
