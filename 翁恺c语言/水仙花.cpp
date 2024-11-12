#define  _CRT_SECURE_NO_WARNINGS
#include <iostream> // 标准输入输出流
#include <vector>   // 标准模板库中的向量
#include <string>   // C++ 字符串类
#include <cmath>    // 数学函数
#include<time.h>
#include<stdlib.h>
//水仙花数是☞N位正整数，它每个位上的数字的N次幂之和等于它本身
int main() {
	int n;
	scanf("%d", &n);
	int first = 1;
	int i = 1;
	while (i < n) {
		first *= 10;//first=本位数最小的数
		i++;
	}

	i = first;
	while (i < first*10) {//遍历同一位数的所有数字eg：100-999,i为该位数最小的数字
		int t = i;
		int sum = 0;//需要在较外层定义变量以便可以在遍历中使用；
		do {
			int d = t % 10;//分解循环到的数字的第一位-第二位。，。。。
			t /= 10;//让数字的后面几位可以循环到
			int p = d;//p为每位数的n次方
			int j = 1;//让p的次幂正确
			while (j < n) {
				p *= d;//让一位数n次幂
				j++;
			}
			sum += p;//把每位数的n次幂+起来
		} while (t > 0);
		if (sum == i) {
			printf("%d\n", sum);
		}
			i++;
	}








	return 0;
}
