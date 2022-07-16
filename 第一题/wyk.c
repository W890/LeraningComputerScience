#include <stdio.h>
#include <limits.h>

int max2(char* s, int n)
{
	int i;
	int max = INT_MIN;
	int m2 = INT_MIN;
	for (i = 0; i < n; i++) {
		if (s[i] > max) {
			if (s[i] >= '0' && s[i] <= '9') {
				m2 = max;
				max = s[i];
			}
		}	
	} 
	if (m2 == INT_MIN)
		return -1;
	return m2 - '0';
}

int main()
{
	char str[] = "abcde12345";
	int ab = max2(str, sizeof(str) - 1);

	printf("第二大数的值是%d", ab);

	return 0;
}