#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
int main() {
	int x;
	scanf("%d", &x);
	int digit;//个位数
	int ret = 0;//反转的数
	while (x > 0) {
		digit = x % 10;//个位数找出来存到digit
		ret = ret * 10 + digit;//amazing!!让个位数不断*10以达到让个位数不断升级，与此同时让digit存下来
		x /= 10;
	}
	printf("%d", ret);
	return 0;
}