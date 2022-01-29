#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int BMI, gender,SW,A;
	double stature, weight;

	printf("你的身高是(m)：");
	scanf("%lf", &stature);
	printf("你的体重是(kg):");
	scanf("%lf", &weight);

	printf("你是男生还是女生？ <男生...1/女生...2>:");
	scanf("%d", &gender);
	

		
	if (gender == 1) 
		printf("标准体重是%.2f\tBMI是%.2f\n", SW = (weight - 100) * 0.9, weight / (stature * stature));
	else
		printf("标准体重是%.2f\tBMI是%.2f\n", SW = (weight - 100) * 0.9 - 2.5, weight / (stature * stature));

	

	if (A >= SW - (SW * 0.1) && A <= SW + (SW * 0.1))
		printf("正常体重。");
	else if (A > SW - (SW * 0.1) && A < SW + (SW * 0.2))
		printf("超重。");
	else if (A > SW - (SW * 0.2) && A < SW + (SW * 0.3))
		printf("轻度肥胖。");
	else if (A > SW - (SW * 0.3) && A < SW + (SW * 0.5))
		printf("中度肥胖。");
	else 
		printf("重度肥胖。");
	
		
	
	return 0;

}
