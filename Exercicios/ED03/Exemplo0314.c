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

 /**
 * Method_12 - mostrar letras minusculas maiores ou iguais a 'l'
 */
void method_12(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int x = 0;
    int contador = 0;

    // identificar
    IO_id("Method_12 - v0.0");

    // ler uma palavra do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");

    // obter o tamanho da palavra
    tamanho = strlen(palavra);

    // repetir para cada letra da palavra
    // inicio      teste              variacao
    for(x = 0; x < tamanho; x = x + 1)
    {
        // testar se e' uma letra minuscula
        // e se e' maior ou igual a 'l'
        if(palavra[x] >= 'l' && palavra[x] <= 'z')
        {
            // mostrar a letra encontrada
            IO_printf("%c\n", palavra[x]);

            // contar a letra encontrada
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_12()

/**
 * Method_13 - mostrar letras maiusculas menores ou iguais a 'L',
 * percorrendo do fim para o inicio
 */
void method_13(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int x = 0;
    int contador = 0;

    // identificar
    IO_id("Method_13 - v0.0");

    // ler uma palavra do teclado
    palavra = IO_readstring("Entrar com uma palavra: ");

    // obter o tamanho da palavra
    tamanho = strlen(palavra) - 1;

    // repetir para cada letra,
    // do fim para o inicio da palavra
    // inicio      teste          variacao
    for(x = tamanho; x >= 0; x = x - 1)
    {
        // testar se o caractere e' uma letra maiuscula
        // menor ou igual a 'L'
        if(palavra[x] >= 'A' && palavra[x] <= 'L')
        {
            // mostrar a letra encontrada
            IO_printf("%c\n", palavra[x]);

            // contar a letra encontrada
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_13()

/**
 * Method_14 - contar e mostrar todos os simbolos que forem letras
 */
void method_14(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int x = 0;
    int contador = 0;

    // identificar
    IO_id("Method_14 - v0.0");

    // ler uma cadeia de caracteres do teclado
    palavra = IO_readstring("Entrar com uma cadeia: ");

    // obter o tamanho da cadeia
    tamanho = strlen(palavra);

    // repetir para cada caractere da cadeia
    // inicio      teste              variacao
    for(x = 0; x < tamanho; x = x + 1)
    {
        // testar se o caractere e' uma letra maiuscula
        // ou uma letra minuscula
        if((palavra[x] >= 'A' && palavra[x] <= 'Z') ||
           (palavra[x] >= 'a' && palavra[x] <= 'z'))
        {
            // mostrar a letra encontrada
            IO_printf("%c\n", palavra[x]);

            // contar a letra encontrada
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade de letras encontradas
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_14()

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
        IO_id("EXEMPLO0314 - Programa v0.0");

        //mostrar opcoes
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - mostrar maiusculas menores ou iguais a L");
        IO_println("2 - mostrar letras minusculas maiores ou iguais a l");
        IO_println("3 - mostrar letras maiusculas menores ou iguais a L");
        IO_println("4 - contar e mostrar letras");
        IO_println("");

        //ler opcao do teclado
        opcao = IO_readint("Entrar com uma opcao: ");

        //testar opcao escolida
        switch(opcao)
        {
            case 0: method_00(); break;
            case 1: method_11(); break;
            case 2: method_12(); break;
            case 3: method_13(); break;
            case 4: method_14(); break;
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

O programa le uma cadeia de caracteres e mostra
todos os simbolos que forem letras, maiusculas
ou minusculas.

A repeticao utiliza o tamanho da cadeia.

O teste verifica se o caractere esta entre 'A' e 'Z'
ou entre 'a' e 'z'.

----------------------------------------------
previsao de testes
----------------------------------------------

a.) Cadeia = "P4LaVr@"

    Resultado esperado:
    P
    L
    a
    V
    r

    Quantidade = 5

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