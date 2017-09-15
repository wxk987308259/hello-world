#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
//#include <stdbool.h>
#include <assert.h>

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Usage:./xxx money(0~5) handsome(0~5)\n");
		return -1;
	}
	
	int years=0;
	int money=atoi(argv[1]);
	int handsome=atoi(argv[2]);
	
	assert(money<=5&&money>=0);
	assert(handsome<=5&&money>=0);
	assert((handsome+money)<=10&&(handsome+money)>=0);
	
	while(1)
	{
		if((money+handsome)<5)
		{
			printf("We will never fell in love!\n");
			break;
		}
		
		years++;
		
		if(years>=7)
		{
			printf("I don't love you any more!\n");
			break;
		}
		
		printf("I love you!\n");
		
		sleep(1);
	}
	
	printf("Bye!..\n");

	return 0;
}
