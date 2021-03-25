#include<stdio.h>
int main()
{
	FILE* ptr;
	ptr = fopen("q2.txt", "w");
	fprintf(ptr, "%s", "Zaviyaar Bin Irfan\n");
	fprintf(ptr, "%s", "19L-2225\n");
	fprintf(ptr, "%s", "l192225@lhr.nu.edu.pk\n");
	fprintf(ptr, "%s", "Mohsin Ali\n");
	fprintf(ptr, "%s", "19L-2233\n");
	fprintf(ptr, "%s", "l192233@lhr.nu.edu.pk\n");
	fprintf(ptr, "%s", "Muhammad Ahmad\n");
	fprintf(ptr, "%s", "19L-2300\n");
	fprintf(ptr, "%s", "l192300@lhr.nu.edu.pk\n");
	fclose(ptr);
	int option;
	printf("What to do?\n");
	printf("1. Add a student\n");
	printf("2. Read a student\n");
	printf("3. Delete a student\n");
	scanf("%d", &option);
	char name[100];
	if (option == 1)
	{
		ptr=fopen("q2.txt", "a+");
		fgets(name, sizeof(name), stdin);
		printf("Enter name \n");
		fgets(name, sizeof(name), stdin);
		fprintf(ptr, "%s", name);
		printf("Enter Roll No \n");
		fgets(name, sizeof(name), stdin);
		fprintf(ptr, "%s", name);
		printf("Enter Email \n");
		fgets(name, sizeof(name), stdin);
		fprintf(ptr, "%s", name);
		fclose(ptr);
	}
	else if (option == 2)
	{
		ptr = fopen("q2.txt", "r");
		int id;
		printf("Enter 0 to see my data or enter 1 or 2 to see other's data\n");
		scanf("%d", &id);
		id = id * 3;
		id++;
		for (int i = 1; i < id; i++)
		{
			fgets(name, 100, ptr);
		}
		fgets(name, 100, ptr);
		printf("Name:");
		puts(name);
		fgets(name, 100, ptr);
		printf("Roll No:");
		puts(name);
		fgets(name, 100, ptr);
		printf("Email:");
		puts(name);
		fclose(ptr);
	}
	else if (option == 3)
	{
		FILE* ptr1;
		ptr1 = fopen("q2_1.txt", "w");
		int id;
		char name[100];
		ptr = fopen("q2.txt", "r");
		printf("Enter 0 to see my data or enter 1 or 2 to see other's data\n");
		scanf("%d", &id);
		id = id * 3;
		id++;
		for (int i = 1; i < id; i++)
		{
			fgets(name, 100, ptr);
			fprintf(ptr1, "%s", name);
		}
		fgets(name, 100, ptr);
		fgets(name, 100, ptr);
		fgets(name, 100, ptr);
		while (fgets(name, 100, ptr) != NULL)
		{
			fprintf(ptr1, "%s", name);
		}
		fclose(ptr);
		fclose(ptr1);
		ptr = fopen("q2.txt", "w");
		ptr1 = fopen("q2_1.txt", "r");
		while (fgets(name, 100, ptr1) != NULL)
		{
			fprintf(ptr, "%s", name);
		}
	}
	system("pause");
}
