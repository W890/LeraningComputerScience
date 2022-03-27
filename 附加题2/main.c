#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void reverse_array(int v[], int len)
{
	for (int i = 0; i < len/2; i++) {
		int temp = v[i];
		v[i] = v[len - 1 - i];
		v[len - 1 - i] = temp;
	}
}
#define LEN 8
int main()
{	
	int v[LEN],i;
	
	printf("请输入数组: ");
	for (i = 0; i < LEN; i++) {
		printf("v[%d]:", i);
		scanf("%d", &v[i]);
	}
	reverse_array(v, LEN);

	printf("逆转后的数组是: \n");
	for (i = 0; i < LEN; i++)
		printf("%d ", v[i]);
	

	return 0;
}