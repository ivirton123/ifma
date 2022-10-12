#include<stdio.h>
#include<stdlib.h>

typedef struct cel{
    int content;
    cel *prox;
    cel *ante;
}Celula;

void adicionarCelulaInicio(Celula **head,int number){
    Celula *novoCelula = (Celula*) malloc(sizeof(Celula));
    novoCelula->content = number;
    novoCelula->prox = *head;
    *head = novoCelula;
}
void imprimir(Celula *head){
    Celula *aux = head;
    printf("PROGREDINDO >>\n");
    while(aux){
        printf("%d -> ",aux->content);
        aux = aux->prox;
    }
    printf(" NULL\n");
}
void buscarElemento(Celula *head,int valor){
    Celula *aux = head;
    while(aux != NULL){
        if(aux->content == valor){
            printf("ENCONTREI O MIZERAVI %d !\n",aux->content);    
        return;
        }
        aux = aux->prox;
    }       
}
void trocarTroca(Celula *head){
    
}
int main()
{
    Celula *lista1 = NULL;
    adicionarCelulaInicio(&lista1,5);
    adicionarCelulaInicio(&lista1,6);
    adicionarCelulaInicio(&lista1,8);
    adicionarCelulaInicio(&lista1,10);
    adicionarCelulaInicio(&lista1,3010);
    imprimir(lista1);
   
    system("pause");
    return 0;
}
