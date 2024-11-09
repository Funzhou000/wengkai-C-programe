//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream> // 标准输入输出流
//#include <vector>   // 标准模板库中的向量
//#include <string>   // C++ 字符串类
//#include <cmath>    // 数学函数
//#include<time.h>
//#include<stdlib.h>
//用一角两角五角硬币凑出10以内的金额
//包含跳出多重循环的方法：1-使用break2-使用goto
//int main() {
//	int ip;
//	int exit = 0;
//	scanf("%d", &ip);//输入总金额
//	for (int one=0;one<ip*10; one++){//*10将元转化成毛
//		for (int two = 0; two <ip*10/2; two++){
//			for (int five = 0; five < ip * 10 / 5; five++) {
//				if (one*0.1+two*0.2+five*0.5==ip)
//				{
//					 exit = 5;
//					printf("%d个一角，%d个两角，%d个五角", one, two, five);
//					break;
//				}
//		     }
//			if (exit) { break; }//if里若为非零执行{}
//		}
//		if (exit) { break; }
//	}
//
//	return 0;
//}
//int main() {
//	int ip;
//	int exit = 0;
//	scanf("%d", &ip);//输入总金额
//	for (int one = 0; one < ip * 10; one++) {//*10将元转化成毛
//		for (int two = 0; two < ip * 10 / 2; two++) {
//			for (int five = 0; five < ip * 10 / 5; five++) {
//				if (one * 0.1 + two * 0.2 + five * 0.5 == ip)
//				{
//					exit = 5;
//					printf("%d个一角，%d个两角，%d个五角", one, two, five);
//					goto out;//out为自设名字，程序会直接跳转到out：处
//				}
//			}
//		}
//	}out:
//
//	return 0;
//}