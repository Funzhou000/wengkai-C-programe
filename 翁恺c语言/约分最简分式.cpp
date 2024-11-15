#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>

int zzxc(int a, int b) {//辗转相除法求最大公约数

	while (b > 0) {
		int remainder = a % b;//remainder公约
		a = b;
		b = remainder;
	}
	return a;
}

int main() {
	int x, y;
	scanf("%d/%d", &x, &y);
	int gcd =zzxc(x, y);
	printf("%d/%d", x / gcd, y / gcd);







	return 0;
}