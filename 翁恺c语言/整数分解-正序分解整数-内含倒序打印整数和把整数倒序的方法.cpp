#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
//Q1倒序打印整数//Q2把整数倒序//Q3正序打印整数

//int main() {
//	int x = 54321;
//	do {
//		int d = x % 10;
//		printf("%d", d);
//		if (x>9)
//		{printf(" ");}
//		x /= 10;
//	} while (x > 0);
//
//
//	return 0;
//}//Q1
//int main() {
//	int x = 54321;
//	int t=0;//要初始化
//		while (x > 0) {
//			int d = x % 10;//分离个位数;
//		t = t * 10 + d;//*10让个位数不断升阶
//		x /= 10;//确保x%10用于分离每位数
//		}printf("%d", t);
//
//
//
//	return 0;
//}//Q2
int main() {
	int x = 54321;
	int t = 0;//要初始化
	while (x > 0) {
		int d = x % 10;//分离个位数;
		t = t * 10 + d;//*10让个位数不断升阶
		x /= 10;//确保x%10用于分离每位数
	}x = t;//改变x的值，此时x为倒序的整数
	do {
				int d = x % 10;
				printf("%d", d);
				if (x>9)
				{printf(" ");}
				x /= 10;
			} while (x > 0);//倒序打印倒序的整数



	return 0;
}//Q2