#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	int hunterid, hunterps;
	
	printf("Enter your HUNTER ID");
	scanf("%s",&hunterid);

    for(hunterid=1;hunterid<=4;hunterps++)
	{
		printf("Enter your HUNTER PASSWORD again");
	scanf("%s",&hunterps);
	
		if(hunterps!=hunterid)
		{
			printf("Enter again");
			scanf("%s",&hunterps);
		}
		else{
			printf("proceed");
		}
	} 
	
}
