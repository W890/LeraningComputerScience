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
	printf("Ҫ���ҵ�ֵ:");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);
	if ((idx = search(vx,ky,NUMBER)) == FAILED)
		puts("\a����ʧ�ܡ�");
	else
		printf("%d������ĵ�%d��Ԫ�ء�\n", ky, idx + 1);

	return (0);
}
