//#include <stdio.h>
//int main()
//{
//	int a[10] = { 1,8,5,4,7,3,2,6,9,0 };
//
//}

void delay(unsigned int n) 
{
	unsigned char i, j;
	while (n) {
		i = 2;
		j = 239;
		do {
			while (--j);
		} while (--i);
	}
	n--;
}