#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int check(char a[], int n)
{
	for (int i = 0; i < n/2; i++)
	{
		if (a[i] != a[n - i - 1])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	char a[1000][1000];
	int i = 0;
	while (i < n)
	{
		scanf("%s", &a[i]);
		i++;
	}
	for (i = 0; i < n; i++)
	{
		if (check(a[i], strlen(a[i])))
			printf("Yes\n");
		else
		{
			int count = 0;
			for (int k = strlen(a[i]) - 1;; k--)
			{
				if (a[i][k] - 'l' == 0 || a[i][k] - 'q' == 0 || a[i][k] - 'b' == 0)
				{
					count++;
				}
				else
					break;
			}
			if (check(a[i], strlen(a[i]) - count))
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
}