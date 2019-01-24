//ʵ�� strStr() ������
//
//����һ�� haystack �ַ�����һ�� needle �ַ������� haystack �ַ������ҳ� needle �ַ������ֵĵ�һ��λ��(��0��ʼ)����������ڣ��򷵻� - 1��
//
//ʾ�� 1:
//
//���� : haystack = "hello", needle = "ll"
//��� : 2
//	 ʾ�� 2 :
//
// ���� : haystack = "aaaaa", needle = "bba"
//  ��� : -1
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int strStr(char* haystack, char* needle) {
	int i = 0;
	int j = 1;
	int	k = 0;
	if (haystack == NULL || needle == NULL || needle[0] == '\0')
	{
		return 0;
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i + 1;
			j = 1;			//ÿ��ѭ������ֵ�ز�����
			while (needle[j] != '\0' && haystack[k] != '\0')
			{
				if (needle[j] != haystack[k])
				{
					break;
				}

				++j;
				++k;
			}

			if (needle[j] == '\0')
				return i;
			else if (haystack[k] == '\0')
				return -1;
			else
				++i;

		}
		else
			++i;
	}
	return -1;

}
int main()
{
	char a[] = "hello";
	char b[] = "ll";
	int num = strStr(a, b);
	printf("%d\n", num);
	system("pause");
	return 0;
}