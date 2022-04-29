#ifndef LIB_RU_H
#define LIB_RU_H

struct pessoa_dados{
        int id;         /* ticked id */
        int vacina;     /* vacinado 0 ou 1 */
        int mascara;    /* de mascara 0 ou 1 */
        int dinheiro;   /* dinheiro 1.30 3.80 60/100 */

}typedef struct pessoa_dados;

struct pessoa_id{
        int id;

}typedef struct p_id;

/* estrutura conjunto 1000 pessoas  */
struct conjunto_pessoas{
        int vet_pessoas[1000]
}typedef struct conjunto_p;


int gera_id();

int verifica_vacina(p_id *p);

int verifica_mascara(p_id *p);

conjunto_p *cria_conjunto();

#endif     