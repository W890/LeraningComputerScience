#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define	NUMBER	5
#define	FAILED	-1
int search(int v[], int key, int n)
{
	int i = 0;

	v[n] = key;	
	while (1) {
		if (v[i] == key)
			break;
		i++;
	}
	return (i == n ? i : FAILED);
}
int main()
{
	int i, ky, idx;
	int vx[NUMBER + 1];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
	}
	printf("要查找的值:");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);
	if ((idx = search(vx,ky,NUMBER)) == FAILED)
		puts("\a查找失败。");
	else
		printf("%d是数组的第%d号元素。\n", ky, idx + 1);

	return (0);
}
