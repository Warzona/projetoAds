#include<stdio.h>
#include<stdbool.h>

struct Produto{
	double RA;
	char nome[20];

	bool status;
};

main(){
	struct Produto lista_de_cadastro[10];
	int indice = 0;
	int opcao;
	double codigo;
	
	int i;
	for (i=0;i<=9;i++){
		lista_de_cadastro[i].status = false;
	}
	
	for(;;){	
	    system("cls");
	    
		printf("Bem vindo ao Sistema de cadastro UNINOVE\n\n");
		printf("O que deseja fazer:\n\n");
		printf("1 - Realize seu cadastro\n");
		printf("2 - Consultar cadastro\n");
		printf("3 - Excluir cadastro\n");
		printf("4 - Alterar cadastro\n");
		printf("5 - Sair\n\n");
		printf("Digite a opcao: ");
		scanf("%d",&opcao);
		
		system("cls");//limpa a tela
				
		if(opcao==5){
			break;		
		}		
		
		switch(opcao){
			case 1: 
				for (indice=0;indice<=9;indice++){
					if (lista_de_cadastro[indice].status == false) break;
				}
				if(indice==10){
					printf("O banco de dados está cheio!\n");					
					break;
				}
						
			    printf("Realize seu cadastro\n\n");
			   
			    printf("Digite seu RA: ");
			    scanf("%lf", &lista_de_cadastro[indice].RA);
			   
			    printf("Digite seu nome: ");
			    scanf(" %[^\n]", &lista_de_cadastro[indice].nome);
			   

			   	
				lista_de_cadastro[indice].status = true;
			   	
			    printf("\nCadastro realizado com sucesso!\n");			   
			   	
			    system("pause");
			    break;
			   
			case 2:
				printf("Listando cadastros realizados\n\n");
				int i;
				for (i=0;i<=9;i++){
					if (lista_de_cadastro[i].status==true){
						printf("RA.: %.0lf\n",lista_de_cadastro[i].RA);
						printf("Nome.: %s\n",lista_de_cadastro[i].nome);
						
					}
				}
				system("pause");
				break;
			case 3:
				printf("Excluindo cadastro\n\n");
				printf("Digite seu RA: ");
				scanf("%lf",&codigo);
				
				for (i=0;i<=9;i++){
					if (lista_de_cadastro[i].RA==codigo){
						lista_de_cadastro[i].status = false;
						printf("O cadatro abaixo foi excluído!\n\n");
						printf("RA.: %.0lf\n",lista_de_cadastro[i].RA);
						printf("Nome.: %s\n",lista_de_cadastro[i].nome);
						
						break;
					}
				}
				if (i==10){
					printf("O cadsatro nao foi localizado!\n\n");
				}

				system("pause");
				break;
				
			case 4:
				printf("Editando cadastro\n\n");
				printf("Digite seu RA: ");
				scanf("%lf",&codigo);
				
				for (i=0;i<=9;i++){
					if (lista_de_cadastro[i].RA==codigo){
						printf("O cadastro abaixo foi localizado!\n\n");
						printf("RA.: %.0lf\n",lista_de_cadastro[i].RA);
						printf("Nome.: %s\n",lista_de_cadastro[i].nome);
						
						printf("Digite os novos dados para cadastro:\n\n");
						printf("Digite seu nome: ");
						scanf(" %[^\n]", &lista_de_cadastro[i].nome);
						
					
						
						printf("\nDados atualizados com sucesso!\n\n");
						break;
					}
				}
				if (i==10){
					printf("O Cadastro nao foi localizado!\n\n");
				}

				system("pause");
				break;
		}
		
	}
	
}