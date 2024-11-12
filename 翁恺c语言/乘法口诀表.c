#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
//本题要求任意给定的一位正整数N，输出从1*1到N*n的部分口诀表
//输出格式：等号右边数字占四位，左对齐；
int main() {
	int n;
	scanf("%d", &n);
	int j;
	int i = 1;

	while (i <= n) {
		 j = 1;
		while (j<=i) {
			printf("%d*%d=%d", j, i, i * j);
			if (i * j < 10) {
				printf("   ");
			}
			else
			{
				printf("  ");
			}
			j++;
		}
		printf("\n");
		i++;
	}












	return 0;
}