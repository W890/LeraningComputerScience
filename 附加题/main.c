#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int BMI, gender,SW,A;
	double stature, weight;

	printf("��������(m)��");
	scanf("%lf", &stature);
	printf("���������(kg):");
	scanf("%lf", &weight);

	printf("������������Ů���� <����...1/Ů��...2>:");
	scanf("%d", &gender);
	

		
	if (gender == 1) 
		printf("��׼������%.2f\tBMI��%.2f\n", SW = (weight - 100) * 0.9, weight / (stature * stature));
	else
		printf("��׼������%.2f\tBMI��%.2f\n", SW = (weight - 100) * 0.9 - 2.5, weight / (stature * stature));

	

	if (A >= SW - (SW * 0.1) && A <= SW + (SW * 0.1))
		printf("�������ء�");
	else if (A > SW - (SW * 0.1) && A < SW + (SW * 0.2))
		printf("���ء�");
	else if (A > SW - (SW * 0.2) && A < SW + (SW * 0.3))
		printf("��ȷ��֡�");
	else if (A > SW - (SW * 0.3) && A < SW + (SW * 0.5))
		printf("�жȷ��֡�");
	else 
		printf("�ضȷ��֡�");
	
		
	
	return 0;

}
