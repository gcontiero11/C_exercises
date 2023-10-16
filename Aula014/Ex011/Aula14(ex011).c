 #include <stdio.h>
 #include <string.h>
 
 typedef struct{
 	int codigo;
 	char cargo[50];
 	char nome[100];
 	int numeroDependentes;
 	float salario;
 }Funcionario;
 
 int menu(){
 	int option;
 	printf("-=-=-=-=-=-=-=-=-=--=-=-=-=--=-=-\n");
 	printf("ADMINISTRACAO DE FUNCIONARIOS!!!\n");
 	printf("-=-=-=-=-=-=-=-=-=--=-=-=-=--=-=-\n");
 	printf("Cadastrar um funcionario............[1]\n");
 	printf("Consultar dados de um funcionario...[2]\n");
 	printf("Mostrar todos os funcionarios.......[3]\n");
 	printf("Alterar dados de um funcionario.....[4]\n");
 	printf("Sair................................[0]\n");
 	printf("-----> ");
 	scanf("%d%*c",&option);
 	return option;
 }
 
 int acharFuncionario(Funcionario *funcionarios,int funcionariosLivre,int codigo){
 	int i;
 	for(i=0;i<funcionariosLivre;i++){
		if(funcionarios[i].codigo == codigo){
			return i;
		}
	}
	printf("Erro!! Nao ha funcionarios com este codigo\n\n");
	return -1;
 }
 
 void imprimirFuncionario(Funcionario funcionario){
 	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
 	printf("CODIGO----------------> %d\n",funcionario.codigo);
 	printf("CARGO-----------------> %s\n",funcionario.cargo);
 	printf("NOME------------------> %s\n",funcionario.nome);
 	printf("NUMERO DE DEPENDENTES-> %d\n",funcionario.numeroDependentes);
 	printf("SALARIO---------------> %.2f\n",funcionario.salario);
 	printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
 }
 
 int main(){
 	int i, codigo, funcionariosLivre = 0, indiceFuncionario = 0,option = -1;
 	Funcionario funcionarios[100];
 	
	do{
		option = menu();
		printf("Escolhido -----> ");
		switch(option){
			case 1:
				printf("Cadastrar funcionario!!\n");
				printf("Digite o codigo deste funcionario: ");
				scanf("%d%*c",&funcionarios[funcionariosLivre].codigo);
				printf("Digite o cargo do funcionario: ");
				gets(funcionarios[funcionariosLivre].cargo);
				printf("Digite o nome do funcionario: ");
				gets(funcionarios[funcionariosLivre].nome);
				printf("Digite o numero de dependentes deste funcionario: ");
				scanf("%d%*c",&funcionarios[funcionariosLivre].numeroDependentes);
				printf("Digite o salario deste funcionario: ");
				scanf("%f%*c",&funcionarios[funcionariosLivre].salario);
				funcionariosLivre++;
				break;
			case 2:
				printf("Consultar dados de um funcionario!!!\n");
				printf("Digite o codigo do funcionario: ");
				scanf("%d%*c",&codigo);
				indiceFuncionario = acharFuncionario(funcionarios,funcionariosLivre,codigo);
				imprimirFuncionario(funcionarios[indiceFuncionario]);
				break;
			case 3:
				printf("Mostrar todos os funcionarios!!!\n");
				for(i=0;i<funcionariosLivre;i++){
					imprimirFuncionario(funcionarios[i]);
				}
				break;
			case 4:
				printf("Alterar Dados de um funcionario!!!\n");
				do{
					printf("Digite o codigo do funcionario na qual deseja mudar os dados: ");
					scanf("%d%*c",&codigo);
					indiceFuncionario = acharFuncionario(funcionarios,funcionariosLivre,codigo);
				}while(indiceFuncionario == (-1));
				do{
					printf("O que deseja mudar?\n");
					printf("CODIGO..................[1]\n");
					printf("CARGO...................[2]\n");
					printf("NOME....................[3]\n");
					printf("NUMERO DE DEPENDENTES...[4]\n");
					printf("SALARIO.................[5]\n");
					printf("SAIR....................[0]\n");
					printf("-----> ");
					scanf("%d%*c",&option);
					printf("Escolhido -----> ");
					switch(option){
						case 1:
							printf("CODIGO\n");
							printf("ANTIGO: %d\n",funcionarios[indiceFuncionario].codigo);
							printf("NOVO: ");
							scanf("%d%*c",&funcionarios[indiceFuncionario].codigo);
							break;
						case 2:
							printf("CARGO\n");
							printf("CARGO ANTIGO: %s\n",funcionarios[indiceFuncionario].cargo);
							printf("CARGO NOVO: ");
							gets(funcionarios[indiceFuncionario].cargo);
							break;
						case 3:
							printf("NOME\n");
							printf("NOME ANTIGO: %s\n",funcionarios[indiceFuncionario].nome);
							printf("NOME NOVO: ");
							gets(funcionarios[indiceFuncionario].nome);
							break;
						case 4:
							printf("NUMERO DEPENDENTES\n");
							printf("ANTIGO: %d\n",funcionarios[indiceFuncionario].numeroDependentes);
							printf("NOVO: ");
							scanf("%d*c",&funcionarios[indiceFuncionario].numeroDependentes);
							break;
						case 5:
							printf("SALARIO\n");
							printf("ANTIGO: %f\n",funcionarios[indiceFuncionario].salario);
							printf("NOVO: ");
							scanf("%f*c",&funcionarios[indiceFuncionario].salario);
							break;
						default:
							printf("SAIR\n");
							printf("voltando para programa principal...\n");
					}
				}while(option != 0);
				option = 1;
				break;
			default:
				printf("SAINDO DO PROGRAMA...");
		}
	}while(option != 0);	
 }
