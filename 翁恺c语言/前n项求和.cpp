#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>

//Q1:计算1+1/2+1/3+1/4+-------+1/n
//Q2:caculate1-1/2+1/3-1/4---------+1/n
//int main() {
//	int n;
//	double sum=0.0;//需要初始化
//	scanf("%d", &n);
//	for (int i = 1; i <=n ; i++)
//	{
//		sum += 1.0 / i;//确保除法有小数点
//	}
//	printf("%.2f\n", sum);//%.2f只打印两位小数 
//
//
//	return 0;
//}//Q1
 int main() {
	int n;
	int sym = 1;
	double sum = 0.0;//需要初始化
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += sym*1.0 / i;//确保除法有小数点
		sym *= -1;//chang symbol every time
	}
	printf("%.2f\n", sum);//%.2f只打印两位小数 


	return 0;
}//Q2