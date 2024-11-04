#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
int main() {
	int input ;
	float Average;
	int count = 0;
	int Summary = 0;
	scanf("%d", &input);
	while (input != -1) {
		count++;
		Summary += input;
		Average = 1.0 * Summary / count;
		scanf("%d", &input);
       
	}printf("%fl", Average);

	//do {
	//	scanf("%d", &input);
	//	
	//	switch (input)
	//	{
	//	case -1:
	//		Average = 1.0 * Summary / count;
	//		break;
	//	default:Summary += input;
	//		count++;
	//		break;
	//	}
	//} while (input != -1);
	//printf("%fl", Average);

	return 0;
}