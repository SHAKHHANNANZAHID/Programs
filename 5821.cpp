#include<stdio.h>
#include<string.h>

main()
{
	char usename[20];
	printf("Enter User Name");
	gets(username);
	if(strcmp(username,"Hunter768")==0)
	{
		printf("\nwelcome log in successful\n");
	}
	else
	{
		printf("Wrong password");
	}
	return 0;
}
