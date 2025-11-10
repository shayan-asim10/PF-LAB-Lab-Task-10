#include <stdio.h>

int main(){
	FILE *ptr;
	ptr = fopen("test.txt", "w");
	fprintf(ptr, "Test Test");
	fprintf(ptr, "\nMy first File!\n");
	char ch;
	fclose(ptr);
	ptr = fopen("test.txt", "r");
	
	while ((ch=fgetc(ptr)) != EOF){
		printf("%c", ch);
	}
	fclose(ptr);
	
	fopen("test.txt", "a");
	fprintf(ptr, "\nThis is appended!\n");
	fclose(ptr);
	
	ptr = fopen("test.txt", "r");
	
	while ((ch=fgetc(ptr)) != EOF){
		printf("%c", ch);
	}
	fclose(ptr);
	
	return 0;
}
