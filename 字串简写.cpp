#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>  
#include<string.h>  

int main()
{
    int k;
    scanf("%d", &k);
    char s[500000];
    char c1, c2;
    scanf("%s %c %c", s, &c1, &c2);

    int len = strlen(s);
    int count = 0;
    int i = 0;
    int posb = -1; // ���ڼ�¼��ǰ�ҵ���c2��λ��  

    // �����ұ����ַ�����������c1��ͷ��c2��β���Ӵ�  
    while (s[i] != '\0')
    {
        if (s[i] == c1)
        {
            // ����posb�Բ��ҵ�ǰc1֮���c2  
            posb = strlen(s)-1;
            while (posb >= i + k-1)
            {
                if (s[posb]==c2)
                {
                    count++;
                }
                posb--;
            }
            // ����ҵ���c2���Ӵ����ȴ��ڵ���k�������  

            // ����Ҫbreak����Ϊ����Ҫ����������һ�����ܵ�c1  
        }
        i++;
    }
    // ������������Ҫ����2  
    printf("%d", count);
    return 0;
}