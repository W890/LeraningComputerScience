#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("请输入金额/元：");
	char num[15] = { 0 }; //输入的字符串
	char num1[15] = { 0 }; //整数部分
	char num2[4] = { 0 }; //小数部分
	int j = 0,i = 0; //变量
	int char_len = 0;  //字符长度
	int zizo_len = 0; //零的长度
	while (num) { //依次遍历每一字符，小数点前的
		scanf("%c", &num);
		/*num1[i++] = num[i++];
		if (num[i++] = '.') {
			num2[j++] = num[i++];
		}*/
		if (num[i] = '.') {
			num2[j++] = num[i++];
		}
	}
	char a1[16] = { '零','壹','贰','叁','肆','伍','陆','柒','捌','玖','拾','百','千','万','亿' };
    char a2[3] = {'角','分'};
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
//    char a1[][3] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
//    char a2[][3] = { "拾","佰","仟" };
//    char a3[][3] = { "圆","万","亿" };
//
//    printf("the Chinese form is:");
//
//    //先处理整数部分
//    char temp[100];
//    sprintf(temp, "%.0lf", m);
//    int len = strlen(temp);//获取了整数部分的位数
//    int flag = 1;//记录非零数前是否是零
//    for (int i = len; i >= 1; i--) {
//        //提取各位数字
//        int k;
//        k = fmod(m / pow(10, i - 1), 10);
//        if (k == 0) {
//            switch (i)//如果此位是零，且在元、万、亿的单位上，则输出对应单位
//            {
//            case 1:printf("%s", a3[0]); break;
//            case 5:printf("%s", a3[1]); break;
//            case 9:printf("%s", a3[2]); break;
//            }
//            flag = 0;
//        } else {
//            if (flag == 0)//若非零数前面是零，则这一个非零数要先输出一个“零”
//                printf("零");
//            printf("%s", a1[k]);//输出对应中文数字
//            switch (i % 4)//检测此数字在哪个位置，在对应的十百千的位上要带上十百千
//            {
//            case 0:printf("%s", a2[2]); break;
//            case 3:printf("%s", a2[1]); break;
//            case 2:printf("%s", a2[0]); break;
//            }
//            switch (i)//元万亿上则带上元万亿
//            {
//            case 1:printf("%s", a3[0]); break;
//            case 5:printf("%s", a3[1]); break;
//            case 9:printf("%s", a3[2]); break;
//            }
//            flag = 1;
//        }
//    }
//
//    //若输入的m没有小数部分最后要输出“整”，由于m小数部分最多两位，所以做特殊处理
//    //提取小数部分的两位
//    int k1 = fmod(m * 10, 10);
//    int k2 = fmod(m * 100, 10);
//    if (k1 == 0 && k2 == 0)
//        printf("整");
//
//    //处理小数部分
//    if (k1 != 0)
//        printf("%s角", a1[k1]);
//    if (k2 != 0)
//        printf("%s分", a1[k2]);
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