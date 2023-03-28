#include <stdio.h>

int main(){
	
	FILE *file;
	
	char string[30];
	
	printf("Digite a palavra que deseja escrever: ");
	fgets(string, 30, stdin);
	
	file = fopen("exemplo1.txt", "w");
	
	if(file == NULL){
		printf("O arquivo nao existe");
		return 0;
	}
	
	fprintf(file, "%s", string);
	
	fclose(file);
	
	return 0;
	}
