#define _CRT_SECURE_NO_WARNINGS 01
//���������������������������Լ��

//���Լ�����ᳬ����С���Ǹ�ֵ
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
	//			printf("���Լ�����ǣ�%d\n", max);
	//			break;
	//		}
	//		max--;
	//	}
	//
	//	return 0;
	//}

	//շת�����
	int t = 0;
	while (m % n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("%d\n", n);
	//��С������ = m * n/��󹫱�����
	return 0;
}