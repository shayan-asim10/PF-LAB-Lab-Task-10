#include <stdio.h>

int main(){
	FILE *ptr;
	ptr = fopen("test.txt", "r");
	fprintf(ptr, "Test Test");
	char ch;
	while ((ch=fgetc(ptr)) != EOF){
		printf("%c", ch);
	}
	return 0;
}
