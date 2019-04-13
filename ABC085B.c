// ABC085B - Kagami Mochi
// https://atcoder.jp/contests/abs/tasks/abc085_b

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	
	int d[N];
	for(int i=0; i<N; i++) {
		scanf("%d", &d[i]);
	}
	
	// Sort in descending order
	for(int i=0; i<N-1; i++) {
		for(int j=i+1; j<N; j++) {
			if(d[i] < d[j]) {
				int tmp = d[i];
				d[i] = d[j];
				d[j] = tmp;
			}
		}
	}
	
	int prev = -1;
	int count = 0;
	for(int i=0; i<N; i++) {
		if(prev != d[i]) {
			count++;
		}
		prev = d[i];
	}
	
	printf("%d\n", count);
	
	return 0;
}
