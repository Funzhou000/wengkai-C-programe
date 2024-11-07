#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
//素数是指除了自身和1以外不能被整除的数
int main() {
	int a,b;//a=input,b用于判断是否是素数
	scanf("%d", &a);
	for (int i = 2; i < a;i++) {
		if (a % i == 0)
			b = 1;
	}
	switch (b)
	{
		case 1 :
		printf("不是素数"); break;
	default:
		printf("是");
		break;
	}
	return 0;
}