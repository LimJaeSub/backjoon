#include<stdio.h>
int main(void)
{
	//������ 3ų�α׷��ϰ� 5ų�α׷��� ����
	//���� ���� ������ �������� ��������
	//ex) 18ų�α׷��� ����� �� 5x3 + 3x1 �ؾ���
	//5�� ���� ������ �� �������� 3���� ��������
	int n;
	int threekg;
	int fivekg;
	int divresult;
	int checknum;
	scanf_s("%d", &n);

	if ((n >= 3)&&(n<5))
	{
		
		checknum = n % 3;
		if (checknum > 0)
		{
			printf("-1");
		}
		else
		{
			printf("1");
		}
	}
	else if (n >= 5)
	{
		fivekg = n / 5;
		divresult = n % 5;
		threekg = divresult / 3;
		checknum = divresult % 3;
		if (checknum > 0)
		{
			printf("-1");
		}
		else
		{
			printf("%d\n", fivekg + threekg);
		}
	}
}