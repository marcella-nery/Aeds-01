/* 
Exemplo 0316-v0.0
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

/**
 * Method_15 - contar e mostrar os digitos impares,
 * percorrendo do fim para o inicio
 */
void method_15(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int x = 0;
    int contador = 0;

    // identificar
    IO_id("Method_15 - v0.0");

    // ler uma cadeia de caracteres do teclado
    palavra = IO_readstring("Entrar com uma cadeia: ");

    // obter a ultima posicao da cadeia
    tamanho = strlen(palavra) - 1;

    // repetir do fim para o inicio
    // inicio      teste          variacao
    for(x = tamanho; x >= 0; x = x - 1)
    {
        // testar se o caractere e' um digito
        if(palavra[x] >= '0' && palavra[x] <= '9')
        {
            // testar se o digito e' impar
            if(palavra[x] == '1' ||
               palavra[x] == '3' ||
               palavra[x] == '5' ||
               palavra[x] == '7' ||
               palavra[x] == '9')
            {
                // mostrar o digito encontrado
                IO_printf("%c\n", palavra[x]);

                // contar o digito encontrado
                contador = contador + 1;
            } // end if
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_15()

/**
 * Method_16 - contar e mostrar tudo que nao for digito par
 * e tambem nao for letra
 */
void method_16(void)
{
    // definir dados
    chars palavra = IO_new_chars(STR_SIZE);
    int tamanho = 0;
    int x = 0;
    int contador = 0;

    // identificar
    IO_id("Method_16 - v0.0");

    // ler uma cadeia de caracteres do teclado
    palavra = IO_readstring("Entrar com uma cadeia: ");

    // obter o tamanho da cadeia
    tamanho = strlen(palavra);

    // repetir para cada caractere da cadeia
    // inicio      teste              variacao
    for(x = 0; x < tamanho; x = x + 1)
    {
        // testar se o caractere nao e' letra
        // e tambem nao e' digito par
        if(!((palavra[x] >= 'A' && palavra[x] <= 'Z') ||
             (palavra[x] >= 'a' && palavra[x] <= 'z') ||
             (palavra[x] == '0') ||
             (palavra[x] == '2') ||
             (palavra[x] == '4') ||
             (palavra[x] == '6') ||
             (palavra[x] == '8')))
        {
            // mostrar o caractere encontrado
            IO_printf("%c\n", palavra[x]);

            // contar o caractere encontrado
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_16()

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
        IO_id("EXEMPLO0316 - Programa v0.0");

        //mostrar opcoes
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - mostrar maiusculas menores ou iguais a L");
        IO_println("2 - mostrar letras minusculas maiores ou iguais a l");
        IO_println("3 - mostrar letras maiusculas menores ou iguais a L");
        IO_println("4 - contar e mostrar letras");
        IO_println("5 - contar e mostrar digitos impares");
        IO_println("6 - contar e mostrar nao digito par e nao letra");
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
            case 5: method_15(); break;
            case 6: method_16(); break;
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
previsao de testes
----------------------------------------------

a.) Cadeia = "P4LaVr@O!"

    Resultado esperado:
    @
    !

    Quantidade = 2

*/