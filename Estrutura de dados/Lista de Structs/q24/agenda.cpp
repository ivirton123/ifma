#include<stdio.h>
#include<stdlib.h>

//struturas
typedef struct telefone{
    int ddd;
    int numero;
}Telefone;
typedef struct data{
    int dia,mes,ano;
}Data;
typedef struct contato {
    int id;
    char nome[50];
    char email[50];
    char obs[100];
    Telefone numeroTelefone;
}Contato;
typedef struct{
    Contato contato[100];
    int totalContatos = 0;
}Agenda;
// métodos
void inserir(Agenda *head){
    printf("Digite o nome:");
    scanf("%s",head->contato[head->totalContatos].nome);
    printf("Digite o e-mail:");
    scanf("%s",head->contato[head->totalContatos].email);
    printf("Digite o  DDD do seu numero:");
    scanf("%d",&head->contato[head->totalContatos].numeroTelefone.ddd);
    printf("Digite o numero :");
    scanf("%d",&head->contato[head->totalContatos].numeroTelefone.numero);
    printf("Digite observação:");
    scanf("%s",head->contato[head->totalContatos].obs);
    printf("Digite ID:");
    scanf("%d",&head->contato[head->totalContatos].id);
    head->totalContatos++;
    system("cls");
}
int main()
{
    int op = 0;
    Agenda agenda;
    inserir(&agenda);
    
    do
    {
        
        
    } while(op!=0);
    
    system("pause");
    return 0;
}
