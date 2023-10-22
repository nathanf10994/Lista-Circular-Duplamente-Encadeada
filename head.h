#ifndef HEAD_H
#define HEAD_H

#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

struct nodo{
	int valor;
	nodo *proximo;
	nodo *anterior;
};

struct lista{
	nodo *inicio;
	nodo *final;
	int tamanho;
};

void push(lista *l);
nodo*  pop(lista *l);
void change(lista *l);
void print(lista l);
void iniciate(lista *l);

#endif