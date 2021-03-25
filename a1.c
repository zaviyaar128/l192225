#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[])
{
	FILE* ptr;
	ptr = fopen(argv[1], "r");
	char arr1[1000];
	char arr[200];
	strcpy(arr, argv[2]);
	while (fgets(arr1, 1000, ptr) != NULL)
	{
		
	}
	int count = 0;
	int flag = 0;
	int k;
	for (int i = 0; arr1[i] != '\0'; i++)
	{
		 k = i;
		for (int j = 0; arr[j] != '\0' && flag == 0; j++)
		{
			if (arr1[k] != arr[j])
			{
				flag = 1;
			}
			k++;
		}
		if (flag == 0)
		{
			count++;
		}
	}
	printf("%d", count);
}