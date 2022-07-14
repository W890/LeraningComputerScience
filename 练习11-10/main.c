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
	int i = 0; // 整数部分
	int f = 0; // 小数点后的部分，先当成整数处理，循环完毕后再除以fs得到小数
	double fs = 1; // 当前小数部分需要除以多少
	int met_dot = 0; // 是否遇到了小数点
	while (*nptr) {
		if (*nptr == '.') { // 遇到小数点
			if (met_dot == 1) { // 之前已经遇到小数点
				return 0;
			} else {
				met_dot = 1;
			}
		} else if ('0' <= *nptr && *nptr <= '9') {
			if (met_dot) { // 现在处理的是小数
				fs *= 10;
				f *= 10;
				f += *nptr - '0';
			} else { // 现在处理的是整数
				i *= 10;
				i += *nptr - '0';
			}
		} else { // 非法
			return 0;
		}
		nptr++;
	}
	return i + f / fs; // 把整数部分，加上小数部分，得到结果返回
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