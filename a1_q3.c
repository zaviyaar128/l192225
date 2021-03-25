#include<stdio.h>
int main(int argc, char* argv[])
{
	FILE* ptr;
	ptr = fopen(argv[1], 'r');
	char arr1[1000];
	char arr[200];
	strcpy(arr, argv[2]);
	while (fgets(arr1, 1000, ptr) != NULL)
	{

	}

}