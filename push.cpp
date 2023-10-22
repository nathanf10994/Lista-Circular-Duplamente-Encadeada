#include "head.h"

int insere(){
	int valor;
	
	system("cls");
	cout<<"Digite um numero: ";
	cin>>valor;
	
	return valor;
}

void pushfront(lista *l, nodo *n){
	
	n->proximo = l->inicio;
	l->inicio = n;
		
		if(l->final == NULL){
			l->final = n;
		} else n->proximo->anterior = l->inicio;
	
	l->final->proximo = l->inicio;
	l->inicio->anterior = l->final;
	l->tamanho++;
}

void pushback(lista *l, nodo *n){
	
	l->final->proximo = n;
	n->anterior = l->final;
	l->final = n;
	l->final->proximo = l->inicio;
	l->inicio->anterior = l->final;
	l->tamanho++;
}

void pushmiddle(lista *l, nodo *n, nodo *aux){
	
	n->proximo = aux->proximo;
	n->anterior = aux;
	aux->proximo->anterior = n;
	aux->proximo = n;
	l->tamanho++;
}

void push(lista *l){ 
	
	nodo *aux, *novo = new nodo;
	
	if(novo){
		novo->valor = insere();
			
			if(l->inicio == NULL || novo->valor < l->inicio->valor){
				pushfront(l, novo);
			} else{
				aux = l->inicio;
					
					while(aux->proximo != l->inicio && novo->valor > aux->proximo->valor){
						aux = aux->proximo;
					}
					
					if(aux->proximo == l->inicio){
						pushback(l, novo);
					} else{
						pushmiddle(l, novo, aux);
					}
			}	
	} else cout<<"\nFalha na alocação.\n";
}