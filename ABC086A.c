// ABC086A - Product
// https://atcoder.jp/contests/abs/tasks/abc086_a

#include <stdio.h>

int main()
{
	int a;
	int b;
	
	scanf("%d %d", &a, &b);
	
	if((a * b) % 2 == 0)
		puts("Even");
	else
		puts("Odd");
		
	return 0;
}
