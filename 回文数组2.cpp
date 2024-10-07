#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[10000];
	int k = 0;
	do
	{
		scanf("%d", &a[k]);
		k++;
	} while (getchar() != '\n');
	int count = 0;
	for (int i = 0; i < n / 2; i++)
	{
		while (a[i] != a[n - i -1])
		{
			if (a[i] > a[n -1 - i])
			{
				if ((i+1)!=n/2 && a[i + 1] > a[n - i-2])
				{
					a[i + 1]--;
				}
				a[i]--;
				count++;
			}
			else
			{
				if ((i + 1) != n / 2 && a[i + 1] < a[n - i - 2])
				{
					a[i + 1]++;
				}
				a[i]++;
				count++;
			}
		}
	}
	printf("%d", count);
}