#include<stdio.h>
int main(void)
{
	//봉지는 3킬로그램하고 5킬로그램이 있음
	//적은 수의 봉지를 가져가게 만들어야함
	//ex) 18킬로그램을 배달할 때 5x3 + 3x1 해야함
	//5로 먼저 나누고 그 나머지를 3으로 나눠야함
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