/*  Biblioteca Implementa as funções
    de Inserção e Busca da BST RedBlack
    Autor: Davi Lazzarin
    Data: 28/03/23
*/
#ifndef _LIB_RB_
#define _LIB_RB_ 

//DEFINES PARA ALTERAR TIPO DE CHAVE E VALOR

//chave deve permitir comparadores logicos
#define tipo_chave int

#define tipo_valor char 

//Define o valor padrao para ser
//retornado ao nao encontrar alguma chave na arvore
#define dafault_return 0

//Enum da cor do nó
typedef enum {VERMELHO, PRETO} Cor;

//Estrutura da arvore
typedef struct rb{
    struct rbno* raiz;
}rb_t;

//Estrutura do nó
typedef struct rbno{
    
    tipo_chave chave;               //Chave
    tipo_valor id;                  //Valor

    Cor cor;                        //VERMELHO ou PRETO
    struct rbno* p;                 //pai
    struct rbno* esq;               //filho esq
    struct rbno* dir;               //filho dir
}rbno_t;

//Cria a arvore
rb_t* criarb();

//Deleta todos os dados da arvore e desaloca a memória
void deleta_rb(rb_t* rb);

//Cria um nó com os valores passados e inclui na arvore
int inclui_rb(rb_t* arv, void* chave, int valor);

//Faz a leitura em ordem da arvore para debug
void leitura_rb(rb_t* no);

//busca a o nó da chave passada como parametro
//se achar retorna um ponteiro para uma cópia da letra que havia no nó
int busca_rb(rb_t* arv, void* chave);

#endif