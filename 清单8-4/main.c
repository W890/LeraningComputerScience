#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define puts_alert(str) (putchar('\a'), puts(str))
int main()
{
	int n;

	printf("������һ��������");
	scanf("%d", &n);

	if (n)
		puts_alert("���������0.");
	else 
		puts_alert("�������0.");
	
	return 0;
}