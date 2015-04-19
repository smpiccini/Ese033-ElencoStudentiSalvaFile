#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3
#define MAX_STRLEN 30

struct s_studente  {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
	unsigned int eta;
	char classe[MAX_STRLEN+1];
};

typedef struct s_studente studente;

int main(int argc, char** argv) {
    FILE *puntafile;
    studente elenco[N];
    int i;
    puntafile=fopen("elenco.dat", "wb");
    
    for (i=0;i<N;i++){
        printf("Studente %d:\n", i+1);
        printf("Nome: ");
	scanf("%s", elenco[i].nome);
	printf("Cognome: ");
        scanf("%s", elenco[i].cognome);
	printf("Eta': ");
        scanf("%d", &elenco[i].eta);
	printf("Classe: ");
	scanf("%s", elenco[i].classe);
    }
    fwrite(&elenco,sizeof(elenco),1,puntafile);
    fclose(puntafile);
    return (EXIT_SUCCESS);
}