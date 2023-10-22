#include "head.h"

nodo* popfront(lista *l){
	
	nodo *remover = l->inicio;
	
		if(l->inicio == l->final){
			l->inicio = NULL;
			l->final = NULL;
		} else{
			l->inicio=remover->proximo;
			l->final->proximo=l->inicio;
			l->inicio->anterior = l->final;
		}
		
	l->tamanho--;
	
	return remover;
}

nodo* popmiddleback(lista *l, nodo *aux){
	
	nodo *remover = aux->proximo;
	aux->proximo = remover->proximo;
	aux->proximo->anterior = aux;
		if(aux->proximo == l->inicio) l->final = aux;					
	l->tamanho--;

	return remover;
}

nodo* pop(lista *l){
	nodo *aux, *remover = NULL;
	int valor;
		
		if(l->inicio){
			cout<<"Digite o valor que deseja remover: ";
			cin>>valor;
				if(l->inicio->valor == valor){
					remover = popfront(l);
				} else{
					aux = l->inicio;
						while(aux->proximo != l->inicio && aux->proximo->valor != valor){ 
							aux = aux->proximo;
						}
							if(aux->proximo->valor == valor){
								remover = popmiddleback(l, aux);
							} else {
								system("cls");
								cout<<"Valor não encontrado na Lista.\n\n";
							}
				}
		} else {
			system("cls");
			cout<<"Lista vazia.\n\n";
		}
	return remover;
}