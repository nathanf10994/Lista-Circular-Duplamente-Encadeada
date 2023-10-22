#include "head.h"

void change(lista *l){
	nodo *aux = l->inicio;
	int valor;
		if(aux){
			cout<<"Digite o valor que deseja alterar: ";
			cin>>valor;
				do{
					if(aux->valor == valor){ 
						cout<<"\nInforme o novo valor: ";
						cin>>aux->valor;
						system("cls");
						break;
					}
					aux = aux->proximo;
				}while(aux != l->inicio);
			if(aux == l->inicio){
				system("cls");
				cout<<"Valor não encontrado na Lista.\n\n";
			} 
		} else cout<<"Lista vazia.\n\n";
}

void print(lista l){
	nodo *aux = l.inicio;
		if(aux){
			cout<<"Lista:";
			cout<<"\n=====";
				do{
					cout<<"\n"<<aux->valor;
					if(aux->proximo != l.inicio)cout<<"\n-----";
					aux = aux->proximo;
				} while (aux != l.inicio);
			cout<<"\n=====";
			cout<<"\nTamanho: "<<l.tamanho;
			cout<<"\n=====\n\n";
		} else {
			system("cls");
			cout<<"Lista vazia.\n\n";
		}
	
}

void iniciate(lista *l){
	l->inicio = NULL;
	l->final = NULL;
	l->tamanho = 0;
}