/* 
Exemplo 0320-v0.0
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

/**
 * Method_17 - contar valores multiplos de 3
 * que pertencem ao intervalo [a:b]
 */
void method_17(void)
{
    // definir dados
    int a = 0;
    int b = 0;
    int n = 0;
    int x = 0;
    int valor = 0;
    int contador = 0;

    // identificar
    IO_id("Method_17 - v0.0");

    // ler os limites do intervalo
    a = IO_readint("Limite inferior (a): ");
    b = IO_readint("Limite superior (b): ");

    // ler a quantidade de valores
    n = IO_readint("Quantidade de valores (n): ");

    // repetir a leitura dos valores
    // inicio      teste              variacao
    for(x = 1; x <= n; x = x + 1)
    {
        // ler um valor
        valor = IO_readint("Valor = ");

        // testar se o valor pertence ao intervalo
        // e se e' multiplo de 3
        if(valor >= a && valor <= b && valor % 3 == 0)
        {
            // contar o valor
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_17()

/**
 * Method_18 - contar valores multiplos de 5,
 * que nao sao multiplos de 3 e pertencem ao intervalo [a:b]
 */
void method_18(void)
{
    // definir dados
    int a = 0;
    int b = 0;
    int n = 0;
    int x = 0;
    int valor = 0;
    int contador = 0;

    // identificar
    IO_id("Method_18 - v0.0");

    // ler os limites do intervalo
    a = IO_readint("Limite inferior (a): ");
    b = IO_readint("Limite superior (b): ");

    // ler a quantidade de valores
    n = IO_readint("Quantidade de valores (n): ");

    // repetir a leitura dos valores
    // inicio      teste              variacao
    for(x = 1; x <= n; x = x + 1)
    {
        // ler um valor
        valor = IO_readint("Valor = ");

        // testar se o valor:
        // pertence ao intervalo
        // e' multiplo de 5
        // e nao e' multiplo de 3
        if(valor >= a && valor <= b &&
           valor % 5 == 0 &&
           valor % 3 != 0)
        {
            // contar o valor
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_18()

/**
 * Method_19 - contar e mostrar valores pertencentes ao intervalo
 * aberto (a:b), cuja parte inteira e' impar e menor que 5
 */
void method_19(void)
{
    // definir dados
    double a = 0.0;
    double b = 0.0;
    double x = 0.0;
    int n = 0;
    int y = 0;
    int parteInteira = 0;
    int contador = 0;

    // identificar
    IO_id("Method_19 - v0.0");

    // ler o limite inferior
    a = IO_readdouble("Limite inferior (a): ");

    // ler o limite superior
    b = IO_readdouble("Limite superior (b): ");

    // ler a quantidade de valores
    n = IO_readint("Quantidade de valores (n): ");

    // repetir a leitura dos valores
    // inicio      teste              variacao
    for(y = 1; y <= n; y = y + 1)
    {
        // ler um valor real
        x = IO_readdouble("Valor = ");

        // obter a parte inteira por conformacao de tipo
        parteInteira = (int)x;

        // testar se o valor pertence ao intervalo aberto
        // e se sua parte inteira e' impar e menor que 5
        if(x > a && x < b &&
           parteInteira % 2 != 0 &&
           parteInteira < 5)
        {
            // mostrar o valor encontrado
            IO_printf("%lf\n", x);

            // contar o valor encontrado
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_19()

/**
 * Method_20 - contar e mostrar valores cuja parte fracionaria
 * pertence ao intervalo aberto (a:b)
 */
void method_20(void)
{
    // definir dados
    double a = 0.0;
    double b = 0.0;
    double x = 0.0;
    double parteFracionaria = 0.0;
    int n = 0;
    int y = 0;
    int parteInteira = 0;
    int contador = 0;

    // identificar
    IO_id("Method_20 - v0.0");

    // ler o limite inferior
    a = IO_readdouble("Limite inferior (a): ");

    // ler o limite superior
    b = IO_readdouble("Limite superior (b): ");

    // ler a quantidade de valores
    n = IO_readint("Quantidade de valores (n): ");

    // repetir a leitura dos valores
    // inicio      teste              variacao
    for(y = 1; y <= n; y = y + 1)
    {
        // ler um valor real
        x = IO_readdouble("Valor = ");

        // obter a parte inteira por conformacao de tipo
        parteInteira = (int)x;

        // obter a parte fracionaria
        parteFracionaria = x - parteInteira;

        // testar se a parte fracionaria pertence
        // ao intervalo aberto (a:b)
        if(parteFracionaria > a && parteFracionaria < b)
        {
            // mostrar o valor encontrado
            IO_printf("%lf\n", x);

            // contar o valor encontrado
            contador = contador + 1;
        } // end if
    } // end for

    // mostrar a quantidade encontrada
    IO_printf("Quantidade = %d\n", contador);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
} // end method_20()

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
        IO_id("EXEMPLO0320 - Programa v0.0");

        //mostrar opcoes
        IO_println("Opcoes");
        IO_println("0 - parar");
        IO_println("1 - mostrar maiusculas menores ou iguais a L");
        IO_println("2 - mostrar letras minusculas maiores ou iguais a l");
        IO_println("3 - mostrar letras maiusculas menores ou iguais a L");
        IO_println("4 - contar e mostrar letras");
        IO_println("5 - contar e mostrar digitos impares");
        IO_println("6 - contar e mostrar nao digito par e nao letra");
        IO_println("7 - contar multiplos de 3 dentro do intervalo");
        IO_println("8 - contar multiplos de 5 que nao sao multiplos de 3");
        IO_println("9 - contar valores com parte inteira impar e menor que 5");
        IO_println("10 - contar valores com parte fracionaria dentro do intervalo");
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
            case 7: method_17(); break;
            case 8: method_18(); break;
            case 9: method_19(); break;
            case 10:method_20(); break;
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

a.) Intervalo = (0.25:0.9)
    n = 7
    valores = {1.0, 2.8, 3.3, 4.1, 5.5, 6.9, 8.4}

    Resultado esperado:
    2.8
    3.3
    4.1
    5.5
    6.9
    8.4

    Quantidade = 6
*/
/*
----------------------------------------------
previsao de testes
----------------------------------------------

a.) 0311
    Palavra = "PaLaVrA"

    Resultado esperado:
    P
    L

    Quantidade = 2


b.) 0312
    Palavra = "PaLaVrA"

    Resultado esperado:
    a
    r

    Quantidade = 2


c.) 0313
    Palavra = "PaLaVrA"

    Resultado esperado:
    A
    L

    Quantidade = 2


d.) 0314
    Cadeia = "P4LaVr@"

    Resultado esperado:
    P
    L
    a
    V
    r

    Quantidade = 5


e.) 0315
    Cadeia = "P4LaVr@1"

    Resultado esperado:
    1

    Quantidade = 1


f.) 0316
    Cadeia = "P4LaVr@O!"

    Resultado esperado:
    @
    !

    Quantidade = 2


g.) 0317
    Intervalo = [12:55]
    n = 7
    valores = {10, 20, 30, 42, 54, 60, 84}

    Resultado esperado:
    Quantidade = 3


h.) 0318
    Intervalo = [21:63]
    n = 7
    valores = {10, 20, 30, 48, 52, 60, 84}

    Resultado esperado:
    Quantidade = 0


i.) 0319
    Intervalo = (0.8:7.2)
    n = 7
    valores = {1.0, 2.4, 3.3, 4.1, 5.5, 6.3, 8.6}

    Resultado esperado:
    1.000000
    3.300000

    Quantidade = 2


j.) 0320
    Intervalo = (0.25:0.9)
    n = 7
    valores = {1.0, 2.8, 3.3, 4.1, 5.5, 6.9, 8.4}

    Resultado esperado:
    2.800000
    3.300000
    4.100000
    5.500000
    6.900000
    8.400000

    Quantidade = 6

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