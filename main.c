/* * * * * * * * * * * * * * * * * * * * *
 *                                       *
 *  Aluno : Lucas Carvalho               *
 *  Data : 12/07/2022                    *
 *  Curso : 1° Período EAI               *
 *  Aula : Laboratório de Programação    *
 *                                       *
 * * * * * * * * * * * * * * * * * * * * */

/************************************************************
*                                                           *
*   Este programa interage com o usuário, pedindo para que  *
*   ele insira dois nomes quaisquer e mostra na tela de     *
*   acordo com a ordem alfabética.                          *
*                                                           *
*************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    // DEFINIÇÃO DAS STRINGS
    char nome1[30];
    char nome2[30];
    // INÍCIO DA INTERAÇÃO COM O USUÁRIO
    printf(" Digite um nome: ");
    scanf("%s", nome1); //CAPTURA DO NOME 1
    printf("\n Digite outro nome: \n Lembrando que os nomes devem ser diferentes: ");
    scanf("%s", nome2); //CAPTURA DO NOME 2
    // IDENTIFICAR SE OS NOMES SÃO IGUAIS
    if (strcmp(nome1, nome2))
    {
        // IDENTIFICA SE O NOME 1 VEM ANTES.
        if (strcmp(nome1, nome2) == -1)
        {
            printf(" \n \n Os nomes escolhidos: %s, %s", nome1, nome2); // mostra na ordem alfábetica
        }
        // IDENTIFICA SE O NOME 1 VEM DEPOIS.
        else
        {
            printf("\n \n Os nomes escolhidos: %s, %s", nome2, nome1); // mostra na ordem alfábetica
        }
    }
    else
    {
        printf(" ERRO: os nomes devem ser diferentes."); // emite erro caso forem.
    }
    return 0;
}
