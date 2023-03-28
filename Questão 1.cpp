#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>

void limp(){
	
	char c;
	while((c = getchar()) != '\n' && c != EOF);
}

int main(){
	
	int fd;
	mode_t mode = O_CREAT | O_WRONLY | 0666;
	char nome[30];
	int num = 1;
	
	printf("Digite o nome do arquivo que deseja criar: ");
	fgets(nome, 30, stdin);
	
	limp();
	
	fd = open(nome, mode);
	
	if(fd == -1){
		printf("Nao foi possivel criar o arquivo");
		return 0;
	}
	
	char linha[50];
	
	do{
	
	printf("Digite o %d verso do poema: ", num);
	fgets(linha, 50, stdin);
	dprintf(fd, "%s \n", linha);
	num++;
	
	
	
}while(linha != NULL && linha != '\n');

return 0;

}
