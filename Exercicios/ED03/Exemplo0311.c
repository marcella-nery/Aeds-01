/* 
Exemplo 0311-v0.0
Author: 1579620-Marcella Nery Guedes de Araujo 
*/
// dependencias
#include "io.h"  // para definicoes proprias

/*
Method_00 - nao faz nada
 */

 void method_00(void)
 {
    //nao faz nada
 }//end method_00

 /*
 Method_11 letras maiusculas menores ou iguais que L
 */

 void method_11(void)
 {
    //definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho   = 0;
    int x         = 0;
    int contador  = 0;

    // identificar 
    IO_id("Method_11 - v0.0");

    // ler uma palavra do teclado
    palavra = IO_readstring("Entrar com a palavra : ");

    //obter o tamanho da palavra
    tamanho = strlen(palavra);

    //repetir para cada letrar da palavra 
    for(x=0; x < tamanho; x = x + 1)
    {
        /*
        testar se o caractere e´ uma letra maiuscula 
        e se e´maior ou iggual a L
        */
        if(palavra[x] >= 'A' && palavra[x] <= 'L')
        {
            //mostrar a letra encontrada 
            IO_printf("%c\n", palavra[x]);

            //contar a letra encontrada
            contador = contador + 1;
        }// end if
    }// end for

    //mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    //encerrar 
    IO_pause("Aperte ENTER para continuar");
 }// end method 11

 /*
 Funcao principal
 @return codigo de encerramento
 */
 int main()
 {
    //definir dado 
    int opcao = 0;

    //repetir ate desejar parar
    do
    {
        //identificar 
        IO_id("EXEMPLO0311 - Programa v0.0");

        //mostrar opcoes
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - mostrar maiusculas menores ou iguais a L");
        IO_println("");

        //ler opcao do teclado
        opcao = IO_readint("Entrar com uma opcao: ");

        //testar opcao escolida
        switch(opcao)
        {
            case 0: method_00(); break;
            case 1: method_11(); break;
            default: 
            IO_pause ( IO_concat ("Valor diferente das opcoes[0,1] (", IO_concat ( IO_toString_d ( opcao ),")")));
        }// end switch
    }// end do

    while(opcao != 0);

    // encerrar
    IO_pause("Apertar ENTER para terminar");

    return(0);
 }// end main

 /* 
---------------------------------------------- 
documentacao complementar 
---------------------------------------------- 
notas / observacoes / comentarios 
---------------------------------------------- 

O programa le uma palavra e mostra somente as letras
maiusculas menores ou iguais a 'L'.

O teste verifica se o caractere esta no intervalo
entre 'A' e 'L'.

---------------------------------------------- 
previsao de testes 
---------------------------------------------- 

a.) Palavra = "PaLaVrA"
     Resultado esperado:
     L
     A
     Quantidade = 2

b.) Palavra = "ABCDE"
     Resultado esperado:
     A
     B
     C
     D
     E
     Quantidade = 5

c.) Palavra = "LMNOP"
     Resultado esperado:
     L
     Quantidade = 1

d.) Palavra = "abcdefgh"
     Resultado esperado:
     Quantidade = 0

e.) Palavra = "XYZ"
     Resultado esperado:
     Quantidade = 0

f.) Palavra = "AaBbCcLlMm"
     Resultado esperado:
     A
     B
     C
     L
     Quantidade = 4

---------------------------------------------- 
historico 
---------------------------------------------- 

Versao     Data          Modificacao
0.1        22/08/2026    esboco

---------------------------------------------- 
testes 
---------------------------------------------- 

Versao     Teste
0.1        0.1()
*/