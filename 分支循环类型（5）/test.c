#define _CRT_SECURE_NO_WARNINGS 01
//给定两个数，求这两个数的最大公约数

//最大公约数不会超过较小的那个值
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	//int max = 0;
	//if (m > n)
	//	max = n;
	//else
	//	max = m;

	//	while (1)
	//	{
	//		if (m % max == 0 && n % max == 0)
	//		{
	//			printf("最大公约数就是：%d\n", max);
	//			break;
	//		}
	//		max--;
	//	}
	//
	//	return 0;
	//}

	//辗转相除法
	int t = 0;
	while (m % n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("%d\n", n);
	//最小公倍数 = m * n/最大公倍数；
	return 0;
}