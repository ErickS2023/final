#include <stdio.h>
int main() {
FILE *file = fopen("emails.csv", "r");
if (file == NULL)
{
perror("Error al abrir el archivo");
return 1;
}
FILE *output = fopen("180200.txt", "w");
if (output == NULL)
{
perror("Error al abrir el archivo de salida");
return 1;
}
fclose(file);
fclose(output);

}

/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define MAX_WORD_LENGTH 50

int main(){
    char line[5172]; 
    char* word;
    int count = 0;
    bool condition = false;
    
    FILE* file = fopen("emails.csv", "r");

    if(file == NULL){
        perror("Error en la apertura del archivo");
        return 1;
    }

    for (int i = 0; i < 50; ++i) {
        fgets(line, sizeof(line), file);

        
        if (i > 0) {
            word = strtok(line, ",");
            while (word != NULL) {
                count++;
                word = strtok(NULL, ",");
            }
        }
    }

    printf("Suma de los 3,000 numeros: %d", count);
    
    while (!feof(file)){
	   int startRow = 622; // Últimos tres dígitos del ID (180622)
    int endRow = 672;
	int startCol = 2;
	int endCol = 2;
	int cellValue;
    
    double sum = 0;
    char line[5172];
    
	for (int row=1; row < startRow; ++row){
			if (fgets(line, sizeof(line),file)==NULL){
				break;
			}
		}
	
	for (int row = startRow; row <= endRow; ++row){
		if (fgets(line, sizeof(line),file)==NULL){
			break;
		}
		int col = 1;
		char* token = strtok(line, ",");
		while (token != NULL){
			if(col >= startCol && col <= endCol){
				sum += cellValue;
			}
			token = strtok(NULL, ",");
			col++;
		}
	}
	fprintf(file, "The,%d\n", sum);
}
    
    fclose(file);
    printf("\n\nTodo esta en viento en popa...\n\n\n\n");

    return 0;
}
|/*