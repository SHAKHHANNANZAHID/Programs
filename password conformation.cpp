#include<stdio.h>
main()
{
	char name, password, password2;
	
	printf("Enter your name and password\n");
	scanf("%s",&name);
	scanf("%s",&password);

	
	do{
			printf("confirm your password\n");
	scanf("%s",&password2);
	}
	while(password==password2);

return 0;
}
