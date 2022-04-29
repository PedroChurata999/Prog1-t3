#include <stdio.h>
#include <stdlib.h>

#include "libpilha.h"
#include "liblista.h"
#include "libfila.h"

int main(){
        pilha_t *mascara, *refeicoes;

        fila_t *atendimentos;

        lista_t *tickets_n_atendidos;

        /* pilha de mascaras aleat(1,1000)  */

        /* pilha refeicoes aleat(500,1000) */

        /* estrutura conjunto 1000 pessoas  */
                /* cada pessoa gerada aleat e com os atributos: */
                        /* ticket id pessoa */
                        /* vacinado (0 ou 1) */
                        /* de mascara (0 ou 1 ) */
                        /* dinheiro (1,30 e 3,80 com proporcao 60/100 ) */

        /* cria fila vazia de atendimentos (armazena tickets das pessoas )*/

        /* cria lista ligada simples vazia de tickets nao atendidos  */

        /* inserir tickets de todas 1000 pessoas na fila */
                /* apos popular fila: fiscal deve decidir cada pessoa de acordo com as condicoes:  */
                        /*se nao tiver vacinada : retirado da  fila  sem ser atendida */
                                /* ticket inserido numa lista ligada simples de tickets nao utilizados */
                                /* com politica de insersao ordenada ascendente */
                        /* se estiver de mascara , fiscal verifica pela presenca de mascara */
                                /* de mascara : paga 1,30 (se tiver com saldo disonivel )*/
                                        /* ganha refeicao da pilha */
                                /* sem mascara : removida da fila , paga 2,50 pela mascara (se tiver saldo sufic e )*/
                                /* mascara disponivel ) e é inserida no final da fila mantendo seu ticket*/
                        /* sem mascara disponivel: ticket na lista de tickets nao utilizados e ir embora sem comer */

        /* programa finaliza quando acabarem as refeicoes da pilha de refeicoes */
                /*apos a ultima refeicao todas as pessoas da fila sao dispensadas (fila destruida e liberar memoria)*/
                /* eh mostrada a contabilidade do dia :*/
                        /* dinheiro arreacadado */
                        /* dinheiro das refeicoes */
                        /* dinheiro das mascaras */
                        /* quantos e quais (imprimir lista tickets ) foram os tickets nao utilizados e a razao */



}
