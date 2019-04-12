#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	int a[10 * 200 * 2];
	
	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	int count = 0;
	while(1) {
		int allEven = 1; // すべて偶数フラグ
		for(i=0; i<n; i++) {
			if(a[i] % 2 != 0) {
				allEven = 0; // すべて偶数ではない
				break;
			}
		}
		
		if(allEven == 1) { // すべて偶数
			for(int j = 0; j<n; j++) {
				a[j] = a[j] / 2;
			}
			count++;
		} else { // 奇数があった
			break;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
