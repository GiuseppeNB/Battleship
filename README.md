# Battleship
# 1. INTRODUÇÃO
Este projeto consiste na criação de um jogo de batalha naval desenvolvido em linguagem C, está linguagem foi escolhida por apesar de antiga, é muito eficiente e ajudar no aprendizado de linguagem e lógica computacional. Ela dá o suporte necessário para o uso de estruturas como matriz, vetores, laços de repetição e condicionais, estruturas fundamentais para o desenvolvimento do jogo de batalha naval.
O jogo utiliza como tabuleiro uma matriz 5x5, o jogador deve digitar as posições que deseja para encontrar os barcos e deve evitar as bombas, pois possui somente 3 vidas para achar os 3 barcos. A criação de um jogo simples de tabuleiro, como o jogo da batalha naval, possui diversos benefícios para o entendimento sobre a lógica computacional e a aplicação de conceitos vistos em sala de aula em um projeto.

# 2. DESENVOLVIMENTO 
Nós desenvolvemos o jogo a partir de nossos conhecimentos na linguagem de programação C e no conteúdo postado na plataforma Google Classroom pelo professor Mestre Fábio Ferreira. Primeiramente, revisamos o conteúdo sobre matrizes a fim de realizar o tabuleiro e, após isso, revisamos também o conteúdo sobre Switch-Case com o objetivo de fazermos duas opções, onde na primeira opção seria a explicação para o usuário de como jogar o jogo e, na segunda opção, seria o código do jogo em si, onde possui todos os comandos necessários. Depois, escrevemos os códigos para o jogo funcionar dentro do Case 2 do Switch-Case, onde mostra o tabuleiro do jogo para o usuário jogar, mostrando os locais das posições que já foram escolhidos e possuem as imagens de bomba, navio e uma outra imagem de água a fim de diferenciá-la da imagem de água quando não foi selecionada ainda. O equipamento e material utilizado por nós para a realização deste estudo foi o computador.
Utilizamos a matéria Jogo: Batalha Naval em C do site C Progressivo a fim de além dos conteúdos aprendidos em aula, aprimorar nossos conhecimentos na linguagem de programação C e possuir uma referência para a construção de nosso projeto.
Primeiramente, desenvolvemos o sistema de controle Switch-Case, a fim de o usuário escolher entre a opção 1 ou 2, na qual a opção 1 explica como o jogo funciona e suas regras e a opção 2 executa o jogo. Dentro do Case 2 do sistema de controle Switch-Case, possui os códigos para a execução do jogo. Primeiramente, inicializamos as variáveis matriz[5][5] (que é o tabuleiro), i, j, barcosAcertados a fim de se ter o controle de quantos já foram atingidos e vidas para controlar o máximo de 3 vidas possíveis para o usuário. Após isso, a matriz é preenchida com 0 para mostrar a imagem de água para o usuário. Então, inicializa as variáveis linhaTiro e colunaTiro para guardar a linha e a coluna que o usuário quer atingir e, depois, pergunta-se para o usuário qual linha e coluna ele quer atirar e verifica se a linha e a coluna são válidas, se já foram atingidas, se no local possui um barco ou bomba e se não possui nada nessa célula, sendo acertada a água. Todos os comandos desde a inicialização das variáveis linhaTiro e colunaTiro até a verificação se na célula possui barco, bomba ou água está dentro de um laço de repetição Do While que funciona até o barcosAcertados ser menor que 3 ou vidas ser menor ou igual a 3. Após o laço de repetição Do While, possui uma condição de verificação If para verificar se a variável vidas for maior que 3, vai aparecer a mensagem “Você perdeu! Você gastou todas as suas vidas!”. Senão, vai ter a seguinte mensagem: “Parabéns! Você acertou todos os barcos!”. Finalizando, o programa vai sair do Switch-Case e vai ser finalizado.
# 2.1. Regras do Jogo
O jogador ganha quando acha três navios e perde quando acha 5 bombas, não possuindo empate no jogo.

# 2.2. Regras Aplicadas no Projeto
O jogo utiliza regras de validação de jogadas e o jogador não pode escolher posições que já foram selecionadas anteriormente. Além disso, existe um limite de posições possíveis no tabuleiro, impedindo que o usuário escolha posições que não existam no tabuleiro, pedindo que seja digitado outra posição.

# 2.3. Documentação do Sistema (Imagens e Código)
else if ((linhaTiro == 0 && colunaTiro==0) || 
                    (linhaTiro==1 && colunaTiro == 3) ||
                    (linhaTiro==4 && colunaTiro==2) ) {
            	    printf("Acertou um barco! \U0001F4A3\n");
            	    matriz[linhaTiro][colunaTiro] = 2;
            	    barcosAcertados++;
		    }
Esse trecho de código verifica se o tiro do jogador acertou um barco e, se sim, registra o acerto.

else if ((linhaTiro == 0 && colunaTiro==3) ||
                    (linhaTiro == 1 && colunaTiro==0) ||
                    (linhaTiro == 2 && colunaTiro==2) ||
                    (linhaTiro == 3 && colunaTiro==2) ||
                    (linhaTiro == 4 && colunaTiro==4) ){
            	    printf("Você acertou uma bomba! \U0001F4A3\n");
            	    matriz[linhaTiro][colunaTiro] = 3;
            	    vidas++;
                }
Esse trecho de código verifica se o tiro do jogador acertou uma bomba e, se sim, registra o acerto.


# 2.4. Testes do Sistema (Jogo)
	Foram realizados testes de validação de jogadas, o jogo não aceita entradas de posições que não existam no tabuleiro 5x5, o usuário deve digitar posições de 0 a 4, e não é possível digitar uma posição que foi anteriormente escolhida. O sistema de vitória se baseia no usuário conseguir encontrar os 3 barcos do tabuleiro, não havendo um sistema de empate. Se o jogador encontrar 5 bombas, o sistema de derrota será executado. Há apenas um jogador no jogo. Foram encontradas algumas dificuldades durante o processo, mas os testes foram extremamente importantes para a melhora do código. 
# 2.5. Manual de Uso do Sistema (Jogo)
Nessa parte o jogo é bem didático e mostra a progressão de entendimento  bem explicada na tela do terminal. O programa deve ser usado com o VSCODE ou no GDB online de acordo com a sua preferência. Para executar o código, o jogador deve colar o código fonte do jogo nas plataformas mencionadas acima e no GDB online clicar no botão “Run” e no VSCODE, deve-se colocar no terminal os seguintes comandos: gcc jogoBatalhaNaval.c -o batalhaNaval e, depois, colocar ./batalhaNaval. Para reiniciar o jogo, o jogador deve executar o código novamente.

# 3. RESULTADOS E DISCUSSÃO
O jogo funciona dentro dos parâmetros a serem seguidos. A parte da vida e do tabuleiro aparecer depois que é pedido a ação de escolher entre linha e coluna foi difícil de implementar, houveram problemas nos testes para o tabuleiro e a imagem dos barcos e da água aparecerem, para as imagens usamos um utf e para o tabuleiro aparecer colocamos o for e if dentro de um de uma estrutura de repetição Do While. É um jogo base divertido para passar o tempo onde o desempenho do jogo é bom e o jogador se diverte durante o jogo.

# 4. CONSIDERAÇÕES FINAIS
O principal aprendizado foi como construir um jogo em C e melhorar as habilidades de programação. Além disso, também entendemos a importância da linguagem de programação C para ajudar no aprendizado da lógica computacional e sua eficiência. Poderia ser melhorado em nosso jogo com os barcos podendo ser randômicos, e não apenas em lugar fixo. Em uma versão futura, poderia ser implementado um modo contra o computador e os barcos e as bombas poderiam ser distribuídas de forma aleatória.
