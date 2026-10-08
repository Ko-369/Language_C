#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	// 双目操作符，操作符两边都要有操作数。
//	//int a = 10;
//	//int b = 20;
//	//printf("%d\n",4 + 5);
//	//printf("%d\n", a + b);
//
//	int a = 20;
//	printf("%d\n",a/4);
//	printf("%d\n",a/6);
//	// 浮点数运算，除号两边至少要有一个浮点数
//	printf("%f\n",a/6.0);
//	printf("%f\n",(double)a/6);
//
//	return 0;
//}

//int main()
//{
//	int score = 5;
//	score = (score / 20) * 100;
//	printf("%d\n", score);
//	double score1;
//	score1 = ((double)score / 20) * 100;
//	printf("%f\n", score1);
//	score1 = (score / 20.0) * 100;
//	printf("%f\n", score1);
//	
//}


//int main()
//{
//	// 取模（余）运算只能用于整数
//	printf("%d\n",6 / 4); //1…2
//	printf("%d\n",6 % 4);
//	return 0;
//}

//int main()
//{
//	//取模运算常用于计算一个整数的最后一位
//	printf("%d\n", 1234 % 10);
//	return 0;
//
//}

//int main()
//{
//	// 负数求模的规则是： 结果的正负号取决于第一个操作数的符号
//	printf("%d\n", 11 % -5);
//	printf("%d\n", -11 % -5);
//	return 0;
//}

//int main()
//{
//	int a = 10; // 初始化
//	a = 20; //赋值
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;
//	// b = a , a = a+1;
//	// 后置++； 先使用， 再+1
//	printf("%d\n", a); //11
//	printf("%d\n", b); // 10
//	return 0;
//}

//int main()
//{
//	
//	int b = ++a;
//	// 前置++； 先+1 ， 再使用
//	printf("a = %d\n",a);   // 11
//	printf("b = %d\n",b);   // 11
//	return 0;
//}

//int main()
//{
//	int score;
//	printf("请输入成绩：\n");
//	scanf("%d", &score);
//	printf("成绩是：%d",score);
//
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	// 多组输入场景
	while (scanf("%d %d", &a, &b) == 2)
	{
		int c = a + b;
		printf("%d\n", c);
	}

	return 0;
}








