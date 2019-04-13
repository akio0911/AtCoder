// ABC085C - Otoshidama
// https://atcoder.jp/contests/abs/tasks/abc085_c

#include <stdio.h>

int main() {
	int N, Y;
	scanf("%d%d", &N, &Y);
	
	for(int x=0; x<=N; x++) { // 10000
		for(int y=0; y<=N-x; y++) { // 5000
			if(x*10000 + y*5000 + (N-x-y)*1000 == Y) {
				printf("%d %d %d\n", x, y, N-x-y);
				return 0;
			}
		}
	}
	
	printf("-1 -1 -1\n");
	return 0;
}
