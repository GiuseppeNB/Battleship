#include <stdio.h>

int main () {
	int x;
	
	//O usuário escolhe se quer ir para o jogo ou se quer ter informações do jogo
	printf ("Bem-Vindo ao jogo de Batalha Naval\n");
	printf("Escolha 1 para mais informações sobre o jogo e 2 para jogá-lo: ");
	scanf("%d", &x);
	
	switch (x) {
	    //Explica como o jogo funciona 
		case 1: printf("O jogo funciona da seguinte forma: Você vai digitar um número"); 
		        printf(" de 0 a 4 de linha e coluna. Se nessa célula estiver um navio, ele vai");
		        printf(" falar que você acertou um navio, se estiver uma bomba, ele vai falar que");
		        printf(" você acertou uma bomba e se não tiver nada, ele vai falar que você acertou");
		        printf(" a água. No jogo, você tem 3 vidas, podendo acertar até 3 bombas.");
		//Sai do switch-case
		break;
		
		//Inicia o jogo
		case 2: {
		    //Inicializa o tabuleiro como matriz e Inicializa as variáveis i, j, barcosAcertados e vidas
			int matriz[5][5], i, j, barcosAcertados=0, vidas=0;
			
			//Coloca o tabuleiro inteiro como água
			for (i=0; i<5; i++) {
			    for (j=0; j<5; j++) {
			        matriz[i][j] = 0;
			    }
			}
			
			//Inicializa as variáveis de linha e coluna que o usuário vai escolher para atirar
			int linhaTiro, colunaTiro;
			
			printf("\n------ O JOGO COMEÇOU ------\n");
			
			//O do faz com que o código execute todo o sistema do jogo, pedindo para o usuário
			//digitar a linha e coluna e verificando se possui bomba ou navio ou é água
			do {
			    printf("\n------Tabuleiro------\n");
			    
			    printf("  0 1 2 3 4\n");
			    
			    for (i=0; i<5; i++) {
			        printf("%d ", i);
				    for (j=0; j<5; j++) {
				        //Verifica se for onde não foi selecionado e aparece água
				        if (matriz[i][j]==0) {
					        printf("\U0001F4A7 ");
				        }
				        //Verifica se for água na posição já selecionado e aparece água
				        else if (matriz[i][j] == 1) {
				            printf("\U0001F30A ");
				        }
				        //Verifica se for navio e aparece návio
				        else if (matriz[i][j] == 2) {
				            printf("\U000026F5 ");
				        }
				        //Verifica se for bomba e aparece bomba
				        else if (matriz[i][j] == 3) {
                            printf("\U0001F4A3 "); 
                        }
				    }
				    printf("\n");
			    }
			    printf("\n");
			    
			    //Pergunta para o usuário a linha e a coluna que quer selecionar
                printf("Digite a linha (0 a 4) para atirar: ");
                scanf("%d", &linhaTiro);
                printf("Digite a coluna (0 a 4) para atirar: ");
                scanf("%d", &colunaTiro);
                
                //Verifica se está dentro do tabuleiro a posição
                if (linhaTiro<0 || linhaTiro>4 || colunaTiro<0 || colunaTiro>4)
                    printf("\nNúmero inválido! Digite um número entre 0 e 4!\n");
                
                //Verifica se já atirou naquela posição    
                else if (matriz[linhaTiro][colunaTiro] == 1 || matriz[linhaTiro][colunaTiro] == 2)
                    printf("\nVocê já atirou nessa posição! Tente outra.\n");
                
                //Verifica se acertou um barco
                else if ((linhaTiro == 0 && colunaTiro==0) || 
                    (linhaTiro==1 && colunaTiro == 3) ||
                    (linhaTiro==4 && colunaTiro==2) ) {
            	    printf("Acertou um barco! \U000026F5\n");
            	    matriz[linhaTiro][colunaTiro] = 2;
            	    barcosAcertados++;
                }	
                //Verifica se acertou uma bomba
                else if ((linhaTiro == 0 && colunaTiro==3) ||
                    (linhaTiro == 1 && colunaTiro==0) ||
                    (linhaTiro == 2 && colunaTiro==2) ||
                    (linhaTiro == 3 && colunaTiro==2) ||
                    (linhaTiro == 4 && colunaTiro==4) ){
            	    printf("Você acertou uma bomba! \U0001F4A3\n");
            	    matriz[linhaTiro][colunaTiro] = 3;
            	    vidas++;
                }
                //Se não for nenhuma das opções acima, coloca que acertou água
                else {
                    printf("Você acertou a água! \U0001F4A7\n");
            	    matriz[linhaTiro][colunaTiro] = 1;
                }
                
                //O laço se repete até o número de barcos ser menor que 3 e 
                //as vidas forem menor ou igual a 3.
			} while (barcosAcertados < 3 && vidas<3);
			
			//Verifica se as vidas forem maior que 3, fala que perdeu por conta de vidas
			if (vidas >= 3) {
			    printf("\nVocê perdeu! Você gastou todas as suas vidas!");
			}
			//Senão, vai falar que ganhou o jogo acertando todos os barcos
			else {
			    printf("\nParabéns! Você acertou todos os barcos!");
			}
			
			//Sai do switch-case
			break;
		}
		//Se aperta outro número além de 1 ou 2 aparece opção inválida
		default: printf("Opção inválida!");
		break;
	}
	//Acaba o programa
	return 0;
}