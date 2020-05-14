/******************************************
* DESCRIPTION: 
* 	It wishes you happy birthday
* AUTHOR:
* 	Steven
* DATE:
* 	05/14/2020
******************************************/

#include <stdio.h>

int main(){
	char birthday;
	printf("Is it your birthday? ");
	scanf("%c",&birthday);
	if (birthday == 'y') printf("Happy Birthday!\n");
	return 0;
}