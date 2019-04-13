// ABC049C - 白昼夢 / Daydream
// https://atcoder.jp/contests/abs/tasks/arc065_a

#include <stdio.h>
#include <string.h>

int main() {
	char S[200000];
	scanf("%s", S);
	
	// Reverse string
	char *head = S, *tail = S + strlen(S) - 1;
	while(head < tail) {
		char tmp = *head;
		*head = *tail;
		*tail = tmp;
		
		head++;
		tail--;
	}
	
	char *p = S;
	int result = 1;
	while(strlen(p) != 0) {
		if(strncmp(p, "remaerd", 7) == 0) {
			p += 7;
			continue;
		} else if(strncmp(p, "resare", 6) == 0) {
			p += 6;
			continue;
		} else if(strncmp(p, "maerd", 5) == 0) {
			p += 5;
			continue;
		} else if(strncmp(p, "esare", 5) == 0) {
			p += 5;
			continue;
		} else {
			result = 0;
			break;
		}
	}
	
	if(result == 1) {
		printf("%s\n", "YES");
	} else {
		printf("%s\n", "NO");
	}
	
	return 0;
}
