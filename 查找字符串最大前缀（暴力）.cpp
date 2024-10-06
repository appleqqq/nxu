#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()//求字符最长前缀(暴力)
{
	char str[10][10];
	char head[10];
	for (int i = 0; i < 3; i++)
	{
		scanf("%s", str[i]);
	}
	int i = 0;
	int flag = 1;
	while (str[0][i] != NULL && flag)
	{
		for (int j = 1; j < 3; j++)
		{
			if (str[0][i] == str[j][i])
			{
				head[i] = str[0][i];
			}
			else
			{
				head[i] = NULL;
				flag = 0;
				break;
			}
		}
		i++;
	}
	printf("%s", head);
}