#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_valid_char(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	return 0;
}

int strtoi(const char *nptr)
{
	int priceNum = 0;
	while (*nptr) {
		if (!is_valid_char(*nptr)) return 0;
		priceNum *= 10;
		priceNum += *nptr - '0';
		nptr++;
	}
	
	return priceNum;
}

long strtol(const char* nptr)
{
	long priceNum = 0;
	while (*nptr) {
		if (!is_valid_char(*nptr)) return 0;
		priceNum *= 10;
		priceNum += *nptr - '0';
		nptr++;
	}
	
	return priceNum;
} 

double strtof(const char* nptr)
{
	int i = 0; // ��������
	int f = 0; // С�����Ĳ��֣��ȵ�����������ѭ����Ϻ��ٳ���fs�õ�С��
	double fs = 1; // ��ǰС��������Ҫ���Զ���
	int met_dot = 0; // �Ƿ�������С����
	while (*nptr) {
		if (*nptr == '.') { // ����С����
			if (met_dot == 1) { // ֮ǰ�Ѿ�����С����
				return 0;
			} else {
				met_dot = 1;
			}
		} else if ('0' <= *nptr && *nptr <= '9') {
			if (met_dot) { // ���ڴ������С��
				fs *= 10;
				f *= 10;
				f += *nptr - '0';
			} else { // ���ڴ����������
				i *= 10;
				i += *nptr - '0';
			}
		} else { // �Ƿ�
			return 0;
		}
		nptr++;
	}
	return i + f / fs; // ���������֣�����С�����֣��õ��������
}
int main()
{
	const char *nptr = "1.23456";
	int	num,nnum;
	double nuum;

	 num = strtoi(nptr);
	printf("priceNum = %d\n", num);

	nnum = strtol(nptr);
	printf("priceNum = %ld\n", nnum);

	nuum = strtof(nptr);
	printf("priceNum = %f\n", nuum);

	return 0;
}