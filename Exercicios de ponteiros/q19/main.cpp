#include<stdio.h>
#include<stdlib.h>
void procedimento(int *vetor,int n){
    int maior = 0;
    int contNumber = 0;
    for(int cont = 0;cont < n; cont++){
        if(*(vetor+cont) > maior) {
            maior = *(vetor+cont);
            contNumber = 1;
        }else if (maior == *(vetor+cont))contNumber++; 
    printf("%d\n",*(vetor+cont));
    }
    printf("Maior Numero é %d apareceu %d vezes\n",maior,contNumber);
}
int main(int argc, char const *argv[]){
    int array[] = {5, 2, 15, 3, 7, 15,8, 6, 15,4,15};    
    procedimento(array,sizeof(array)/sizeof(int));
    system("pause");
    return 0;
}
