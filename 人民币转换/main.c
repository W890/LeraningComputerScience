#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("��������/Ԫ��");
	char num[15] = { 0 }; //������ַ���
	char num1[15] = { 0 }; //��������
	char num2[4] = { 0 }; //С������
	int j = 0,i = 0; //����
	int char_len = 0;  //�ַ�����
	int zizo_len = 0; //��ĳ���
	while (num) { //���α���ÿһ�ַ���С����ǰ��
		scanf("%c", &num);
		/*num1[i++] = num[i++];
		if (num[i++] = '.') {
			num2[j++] = num[i++];
		}*/
		if (num[i] = '.') {
			num2[j++] = num[i++];
		}
	}
	char a1[16] = { '��','Ҽ','��','��','��','��','½','��','��','��','ʰ','��','ǧ','��','��' };
    char a2[3] = {'��','��'};
	for (int k = 0; k < i; i++) {
		if (num1[i] = '0') {
			zizo_len++;
		}
	}
}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <string.h>
//
//void moneychange(double m)
//{
//    char a1[][3] = { "��","Ҽ","��","��","��","��","½","��","��","��" };
//    char a2[][3] = { "ʰ","��","Ǫ" };
//    char a3[][3] = { "Բ","��","��" };
//
//    printf("the Chinese form is:");
//
//    //�ȴ�����������
//    char temp[100];
//    sprintf(temp, "%.0lf", m);
//    int len = strlen(temp);//��ȡ���������ֵ�λ��
//    int flag = 1;//��¼������ǰ�Ƿ�����
//    for (int i = len; i >= 1; i--) {
//        //��ȡ��λ����
//        int k;
//        k = fmod(m / pow(10, i - 1), 10);
//        if (k == 0) {
//            switch (i)//�����λ���㣬����Ԫ�����ڵĵ�λ�ϣ��������Ӧ��λ
//            {
//            case 1:printf("%s", a3[0]); break;
//            case 5:printf("%s", a3[1]); break;
//            case 9:printf("%s", a3[2]); break;
//            }
//            flag = 0;
//        } else {
//            if (flag == 0)//��������ǰ�����㣬����һ��������Ҫ�����һ�����㡱
//                printf("��");
//            printf("%s", a1[k]);//�����Ӧ��������
//            switch (i % 4)//�����������ĸ�λ�ã��ڶ�Ӧ��ʮ��ǧ��λ��Ҫ����ʮ��ǧ
//            {
//            case 0:printf("%s", a2[2]); break;
//            case 3:printf("%s", a2[1]); break;
//            case 2:printf("%s", a2[0]); break;
//            }
//            switch (i)//Ԫ�����������Ԫ����
//            {
//            case 1:printf("%s", a3[0]); break;
//            case 5:printf("%s", a3[1]); break;
//            case 9:printf("%s", a3[2]); break;
//            }
//            flag = 1;
//        }
//    }
//
//    //�������mû��С���������Ҫ���������������mС�����������λ�����������⴦��
//    //��ȡС�����ֵ���λ
//    int k1 = fmod(m * 10, 10);
//    int k2 = fmod(m * 100, 10);
//    if (k1 == 0 && k2 == 0)
//        printf("��");
//
//    //����С������
//    if (k1 != 0)
//        printf("%s��", a1[k1]);
//    if (k2 != 0)
//        printf("%s��", a1[k2]);
//
//}
//
//int main()
//{
//    double m;
//    printf("please input the price:");
//    scanf("%lf", &m);
//    moneychange(m);
//    return 0;
//}