#include <stdio.h>

int main()
{
	char s[100];
	int i, count = 0;
	scanf("%s", s);
	for(i=0; i<3; i++){
		if(s[i] == '1'){
			count++;
		}
	}
	printf("%d\n", count);

 	return 0;
}
