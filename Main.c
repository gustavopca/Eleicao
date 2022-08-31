/*O objetivo desta atividade é o aluno conseguir aplicar os princípios de cálculos em variáveis e concatenação em forma de algoritmo pseudocódigo, incluindo agora uma estrutura condicional “SE” para detectar e escrever o resultado na tela.

Enunciado: Desenvolva um programa em Linguagem C que receba o nome e o número de votos de três candidatos da eleição para presidente. Ele também deve apresentar na tela o nome do candidato que venceu a eleição. Considere que não é possível haver empate, portanto, que os respectivos valores de entrada sejam diferentes.

Salve o código em PDF e poste o arquivo no portfólio.

Para demonstrar o funcionamento do algoritmo, veja o resultado da execução a seguir. As informações utilizadas como entrada são apenas ilustrativas:
Nome do 1. candidato: Lucas Lima
Número de votos do 1. candidato: 500
Nome do 2. candidato: Carlos Francisco
Número de votos do 2. candidato: 380
Nome do 3. candidato: Alfredo Santos
Número de votos do 3. candidato: 630
O candidato Alfredo Santos venceu a eleição com 630 votos.

Observação: Os nomes e números não são fixos. A cada nova execução do algoritmo, o usuário deverá digitar novos nomes e valores.

O envio de mensagens se inicia em 20/09/2022 */


#include <stdio.h>
#include <string.h>

int main()
{
    char candidato1[20], candidato2[20], candidato3[20];
    char candidato_vencedor[20];
    int votos1, votos2, votos3;
    int votos_vencedor;

    printf("Nome do 1ro candidato: ");
    scanf("%s", &candidato1);
    printf("Quantidade de votos do 1ro candidato : ");
    scanf(" %i",&votos1);

    fflush(stdin);
    printf("Nome do 2do candidato: ");
    scanf("%s", &candidato2);
    printf("Quantidade de votos do 2o candidato: ");
    scanf("%i",&votos2);

    fflush(stdin);
    printf("Nome do 3ro candidato: ");
    scanf("%s", &candidato3);
    printf("Quantidade de votos do 3ro candidato: ");
    scanf("%i",&votos3);

    strcpy(candidato_vencedor, candidato1);
    votos_vencedor = votos1;

    if ( votos2 > votos_vencedor ){
    strcpy(candidato_vencedor, candidato2);
    votos_vencedor = votos2;
    }
	
   if ( votos3 > votos_vencedor ){
   strcpy(candidato_vencedor, candidato3);

   votos_vencedor = votos3;
   }


   printf("O candidato %s venceu a eleicao e obteve %i votos \n", candidato_vencedor, votos_vencedor);

  return 0;
  }
 


