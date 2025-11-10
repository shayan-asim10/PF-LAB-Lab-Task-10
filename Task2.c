#include <string.h>
#include <stdio.h>

int main(){
	char pass[50];
	char confirm[50];
	char name[20], copied[20];
	while(1){
		printf("\nEnter a pass: ");
		gets(pass);
	
		if(strlen(pass) < 8){
			printf("\nInvalid amount! Try again!");
			continue;
		}
		while(strcmp(pass, confirm)){
			printf("\n Confirm password: ");
			gets(confirm);
			if(strlen(confirm) != strlen(pass)){
				printf("\nPasswords do not match!");
				continue;
			}
		}
		printf("\nEnter your name: ");
		gets(name);
		strcpy(copied, name);
		break;
	}
	printf("\nWelcome %s", copied);
}
