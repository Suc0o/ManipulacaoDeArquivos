#include <stdio.h>

int main(){
	
	FILE *file;
	
	char string[30];
	
	file = fopen("exemplo2.txt", "r");
	
	if(file == NULL){
		printf("O arquivo nao existe");
		return 0;
	}
	
	fgets(string, 30, file);
	
	printf("%s", string);
	
	fclose(file);
	
	return 0;
	}
