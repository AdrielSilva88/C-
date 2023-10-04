//Faça um programa de atendimento em uma fila de um banco. O programa
//deve possuir as seguintes opções:
//? Adicionar um novo cliente no fim da fila
//? Remover o cliente que já foi atendido no início da fila
//? Imprimir os dados de todos os clientes da fila
//? Parar o programa
//Faça uma estrutura Cliente que possui um nome, uma idade e um CPF, e use
//ela como uma propriedade da estrutura de cada nó da lista encadeada.

#include <iostream>
#include <locale>
using namespace std;

struct Cliente{
    string nome;
    int idade;
    string cpf;
    Cliente* prox;
};
void adcionar_cliente(Cliente*& lista){
    Cliente* novo_cliente = new Cliente;
    cout<<"------- Novo cliente ------"<<endl;
    cout<<"Nome: ";
    cin>> novo_cliente->nome;
    cout<<"Idade: ";
    cin>>novo_cliente->idade;
    cout<<"CPF: ";
    cin>>novo_cliente->cpf;
    novo_cliente->prox = NULL;
    if (lista == NULL){
        lista = novo_cliente;
    }
    else{
        Cliente* p = lista;
        while(p->prox != NULL){
            p = p->prox;
        }
        p->prox = novo_cliente;
    }
    cout<<"Cliente adcionado a fila com sucesso!"<<endl;
}
Cliente* remover_primeiro(Cliente*& lista){
    if (lista ==NULL){
        cout<<"Lista vazia."<<endl;
    }
    else if(lista->prox == NULL){
        lista = NULL;
    }
    else{
        Cliente* p = lista;
        lista = lista->prox;
        cout<<"Cliente "<<p->nome<<"removido com sucesso!"<<endl;
        return p;
    }
}

void imprimir_dados(Cliente* lista){
    if(lista == NULL){
        cout<<"Nenhum cliente registrado."<<endl;
    }
    else if(lista->prox == NULL){
        cout<<"----Cliente----"<<endl;
        cout<<"-"<<lista->nome<<endl;
        cout<<"-"<<lista->idade<<endl;
        cout<<"-"<<lista->cpf<<endl;
        cout<<endl;
    }
    else{
        Cliente *p = lista;
        while(p->prox != NULL){
            cout<<"----Cliente----"<<endl;
            cout<<"-"<<p->nome<<endl;
            cout<<"-"<<p->idade<<endl;
            cout<<"-"<<p->cpf<<endl;
            p = p->prox;
        }
        cout<<"----Cliente----"<<endl;
        cout<<"-"<<p->nome<<endl;
        cout<<"-"<<p->idade<<endl;
        cout<<"-"<<p->cpf<<endl;
        cout<<endl;
    }
}
void menu_fila(Cliente*& lista){
    int opcao;
    do{
        cout<<"-------FILA DO BANCO--------"<<endl;
        cout<<"[1]Adcionar cliente a fila"<<endl;
        cout<<"[2]Remover cliente já atendido"<<endl;
        cout<<"[3]Imprimir dados dos clientes"<<endl;
        cout<<"[4]Encerrar programa"<<endl;
        cout<<"Opção desejada: ";
        cin>>opcao;
        if (opcao == 1){
            adcionar_cliente(lista);
        }
        else if(opcao == 2){
            Cliente* removido = remover_primeiro(lista);
        }
        else if(opcao == 3){
            imprimir_dados(lista);
        }
        else if(opcao < 0 || opcao > 4){
            cout<<"Opção inválida.";
        }
    }while(opcao != 4);

}
int main(void){
    setlocale(LC_ALL, "Portuguese_Brazil");
    Cliente* lista = NULL;
    menu_fila(lista);
}
