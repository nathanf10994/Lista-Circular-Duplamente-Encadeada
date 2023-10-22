/*
Projeto feito para estudo e aprendizado
Usando Estrutura de Dados tipo Lista Circular Duplamente Encadeada
Developed by Nathan Ferreira
GitHub: nathanf10994
*/

#include "head.h"


int main(){
		
	setlocale(LC_ALL,"");
	
	nodo *remover;
	lista l;
	int option;
	
	iniciate(&l);
	
	do{
		
		cout<<"-----   VALORES   -----\n";
		cout<<"\n1 - Inserir."; 
		cout<<"\n2 - Alterar.";
		cout<<"\n3 - Excluir.";
		cout<<"\n4 - Mostrar.";
		cout<<"\n0 - Sair.";
		cout<<"\n\nSelecione a opção desejada: ";
		cin>>option;
		
			switch(option){
				
				case 1:
					system("cls");
					push(&l);
					system("cls");
					break;
				
				case 2:
					system("cls");
					change(&l);
					break;
				
				case 3:
					system("cls");
					remover = pop(&l);
						if(remover){
							system("cls");
							cout<<"Valor removido com sucesso: "<<remover->valor<<endl<<endl;
							delete(remover);
						}
					break;
					
					
				case 4:
					system("cls");
					print(l);
					break;
				
				case 0:
					system("cls");
					break;
				
				default:
					system("cls");
					cout<<"Opção inválida!\n\n";								
			}
		
		
	}while(option != 0);
	
return 0;
	
}
