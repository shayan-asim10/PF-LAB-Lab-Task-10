#include <string.h>
#include <stdio.h>

int main(){
	char correctpass[] = "hiBye";
	char pass[20];
	printf("\nEnter password: ");
	fgets(pass, sizeof(pass), stdin);
	printf("\n%d", strlen(pass));
	pass[strlen(pass)-1]='\0';
	if(strcmp(correctpass, pass) == 0){
		printf("\nCorrect pass!");
	}
	else{
		printf("\nWrong pass!");
	}
}
