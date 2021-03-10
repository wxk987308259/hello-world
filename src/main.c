#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>

int main(int argc, char *argv[])
{
	int ret = 0;
	int years = 0;
	int money = 0;
	int handsome = 0;
	
	if (argc != 3) {
		printf("Usage: ./xxx money(0 ~ 5) handsome(0 ~ 5)\n");
		return -1;
	}
	
	money = atoi(argv[1]);
	handsome = atoi(argv[2]);
	
	assert(money <= 5 && money >= 0);
	assert(handsome <=5 && money >=0);
	
	if ((money + handsome) < 5) {
		printf("We will never fell in love!\n");
		return ret;
	}
	
	while (1) {
		years++;
		money--;
		
		if (years >= 7 || money < 2) {
			printf("I don't love you any more!\n");
			break;
		}
		
		printf("I love you!\n");
		
		sleep(1);
	}
	
	printf("Bye ...\n");

	return ret;
}
