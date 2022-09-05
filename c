#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


//questão A
int vetOriginal[10];
int vetInvert[10];




void questA(){
srand(time(NULL));
int i;

for(i=0; i<=9; i++){

vetOriginal[i]=rand()%100;
printf(" vetOriginal[%d] = %d \n", i, vetOriginal[i]);
	}
}   

//questão B


void questB(){
	int i, maior=0;
	
	for(i=0; i<10; i++){
		if (vetOriginal[i] > maior){
			maior = vetOriginal[i];
		}
	}
	printf("\n O MAIOR VALOR DESTE VETOR é: %d \n", maior);
}


//questão C
void questC(){
    for(int b = 0; b < 10; b++){
       
        if (vetOriginal[b]%2 == 0){
          printf("\n Os Números Pares são: %d \n", vetOriginal[b]);  
        }
    }
}

//questão D
void questD(){
    int cont, somaDosValores, mult;
    
        for (cont = 0;cont < 5; cont++) {
        somaDosValores = somaDosValores + vetOriginal[cont];
        }
       
        printf("\n A soma dos indices é = %d\n", somaDosValores);
}

//questão E
void questE(){

    int i;
    for(i = 0; i < 10; i++) {
        vetInvert[i] = vetOriginal[10-i-1];
        printf("\nO VETOR INVERTIDO[%d] E: %d", i, vetInvert[i]);
    }

}

//questão F
void questF(){
	
	int aux;
	
	for(int x=0; x<10; x++){
		for(int y=x; y<10; y++){
			if(vetOriginal[x] > vetOriginal[y]){
				aux = vetOriginal[x];
				vetOriginal[x] = vetOriginal[y];
				vetOriginal[y] = aux;
			}
		}
	}
	
	printf("\nVETORES EM ORDEM CRESCENTE\n");
	
	for(size_t i=0; i<10; i++){
		printf("VETOR[%d] e: %d\n", i, vetOriginal[i]);
	}
    
}



int main()
{  
	int opcao, loop=0;
	char deci;

		system("cls");
	do{
		printf(" ------------------------- MENU -------------------------\n");
		printf("| DIGITE 1 PARA VER OS VETORES                           |\n");
		printf("| DIGITE 2 PARA VER O MAIOR ELEMENTO DO VETOR            |\n");
		printf("| DIGITE 3 PARA VER APENAS OS ELEMENTOS PARES DO VETOR   |\n");
		printf("| DIGITE 4 PARA VER O SOMATORIO DOS ELEMENTOS DO VETOR   |\n");
		printf("| DIGITE 5 PARA VER A ORDEM INVERSA DO VETOR             |\n");
		printf("| DIGITE 6 PARA VER A ORDEM CRESCENTE DO VETOR           |\n");
		printf("| DIGITE 7 PARA SAIR                                     |\n");
		printf(" --------------------------------------------------------\n");
		printf("| DIGITE SUA ESCOLHA: ");
		
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				questA(&vetOriginal);
			break;
			case 2:
				questB(&vetOriginal);
			break;
			case 3:
				questC(&vetOriginal);
			break;
			case 4:
				questD(&vetOriginal);
			break;
			case 5:
				questE(&vetOriginal);
			break;
			case 6:
				questF(&vetOriginal);
			break;
			case 7:
				printf("ENTENDIDO, ENCERRANDO PROGRAMA...\n");
				system("cls");
			break;
			default:
				printf("\n!!!ERRO!!!\nESCOLHA APENAS ENTRE 1 A 7!\n");
		}
		printf("\nDeseja continuar? [S]Sim | [N]Nao \n");
		scanf(" %c", &deci);
		
			if(deci == 'S'||deci =='s'){
				loop = 1;
			}else if(deci == 'N'||deci == 'n'){
				printf("Saindo...\n");
				loop = 0;
			}else{
				printf("ERRO! Digite S ou N !!!\n");			
			}
	}while(loop == 1);
	
    return 0;
}
