#include "io.h"
#include <stdio.h>

bool positive (int x)
{
    //definir dado local 
    bool result = false;

    //testar condicao 
    if( x > 0 )
    {
        result = true;
    }//end if
    return ( result );
}//end positive ()

/*
Funcao para determinar se o valor inteiro pertence a intervalo aberto.
@return true, se pertencer; false caso contrario
@param x           - valor a ser testado 
@param inferior    - limite inferior do intervalo
@param superior    - limite superior do intervalo
*/

bool belongsTO(int x, int inferior, int superior )
{
    //definir dado local 
    bool result = false;

    //testar a condicao
    if(inferior< x && x< superior )
    {
        result = true;
    }//end if
    return(result);
}//end belongsTo()

/*
Funcao para determinar se o valor e´ par.
@ return true, se par; false, caso contrario
@param x - valor a ser testado 
*/

bool even(int x)
{
    //definir dado local 
    bool result = false;

    //testra condicao(resto(%)) da divisao por 2 igual a 0)
    if( x % 2 == 0)
    { 
        result = true; 
    }// end if 
    return(result);
}//end even()

/*
Funcao para determinar se caracter e´ letra maiuscula.
@return true, se par; false, caso contrario
@parm x - valor a ser testado 
*/

bool isLowerCase ( char x )
{
    //definir dado local
    bool result = false;
    //testar a condicao
    if ('a'<= x && x <= 'z')
    {
        result = true;
    }//end if
    return(result);
}//end is LowerCase()


/*
Funcao para determinar se caractere e´ digito.
@return true, se par; false, caso contrario
@param x _ valor a ser testado 
*/

bool isDigit ( char x )
{
    //definir dado local
    bool result = false;
    //testar a condicao 
    if ('0' <= x && x <= '9')
    {
        result = true ;
    }//end if 
    return (result);
}// end is Digit ()

/*
   Funcao para determinar se caractere e' digito. 
   @return true, se par; false, caso contrario 
   @param  x - valor a ser testado 
 */ 
bool isADigit ( char x ) 
{ 
   return ( '0' <= x && x <= '9' ); 
} // end isADigit ( )


/*
Funcao para concatenar a cadeia de caracteres mais um digito.
@return cadeia de caracteres acrescida de mais um digito
@param digits - cadeia de caracteres
@param digit - simbolo a ser acrescentado a cadeia de caracteres
*/

chars concatADigit (chars string, char digit)
{
    return (IO_concat( string, IO_toString_c (digit )));
}//end concactADigit()

/*
 Method_01- repeticao para ler certa quantidade de valores
*/

void method_01()
{
    //definir dado 
    int quantidade = 0;
    int valor     = 0;
    int controle  = 0;

    //identificar 
    IO_id("Method 01-v0.0");

    //ler do teclado 
    quantidade = IO_readint( "Entrar com uma quantidade:" );

    // repetir para a quantidade de vezes informada
    controle = 1;
    while(controle<= quantidade)
    {
        //ler valor do teclado 
        valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)), ":"));

        // mostrar valor lido 
        IO_printf("%s%d\n", "valor=", valor);

        //passar ao proximo valor 
        controle=controle+1;
    }//end while 

    //encerrar
    IO_pause( "A pertar ENTER para continuar" );
}//end Method_01

/*
Method_02 - Ler valores e contar positivos 
*/

void method_02()
{
    // definir dado 
    int quantidade = 0;
    int valor      = 0;
    int controle   = 0;
    int contador   = 0;
    
    //identificar
    IO_id("Method02 - v0.0");

    //ler do teclado
    quantidade=IO_readint ("Entrar com uma quantidade:");

    //repetir para a quantidade de vezes informada 
    controle = 1;
    while (controle <= quantidade)
    {
        //ler valor do teclado
         valor = IO_readint ( IO_concat ( 
                                          IO_concat ( "", IO_toString_d ( controle ) ), 
                                           ": "  ) );

    // testar e contar se valor for positivo 
    if(positive (valor))
    {
        contador= contador +1;
    }//end if                                     
    //passar para o proximo valor 
    controle = controle + 1;

    }// end while 

    // mostrar a quantidade de valores positivos 
    IO_printf ("%s%d\n", "positivos=", contador);
    IO_pause("Apertar ENTER para continuar");
}//end method_02

/*
Method_03- Ler valores e contar positivos menores que 100.
*/

void method_03()
{
    //definir dado
    int quantidade = 0;
    int valor      = 0;
    int controle   = 0;
    int contador   = 0; 

    //identificar
    IO_id("Method03 - v0.0");

    //ler do teclado
    quantidade=IO_readint ("Entrar com uma quantidade:");

    //repetir para a quantidade de vezes informada 
    controle = 1;
    while (controle <= quantidade)
    {
        //ler valor do teclado
         valor = IO_readint ( IO_concat ( 
                                          IO_concat ( "", IO_toString_d ( controle ) ), 
                                           ": "  ) );
    //testar e contar se valor for positivo
    if (belongsTO(valor, 0, 100 ))
    {
        contador =contador +1;
    }                         //end if
    //passar proximo valor
    controle = controle + 1;              

}//end while
// mostrar a quantidade de valores positivos 
IO_printf("%s%d\n", "positivos menores que 100 =", contador);

 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_03 ( )

void method_04()
{
    //definir dado
    int quantidade = 0;
    int valor      = 0;
    int controle   = 0;
    int contador   = 0; 

    //identificar
    IO_id("Method04 - v0.0");

    //ler do teclado
    quantidade=IO_readint ("Entrar com uma quantidade:");

    //repetir para a quantidade de vezes informada 
    controle = 1;
    while (controle <= quantidade)
    {
        //ler valor do teclado
         valor = IO_readint ( IO_concat ( 
                                          IO_concat ( "", IO_toString_d ( controle ) ), 
                                           ": "  ) );
    //testar e contar se valor for positivo menor que 100 e par 
    if (belongsTO(valor, 0, 100 ) && even(valor))
    {
        contador =contador +1;
    }                         //end if
    //passar proximo valor
    controle = controle + 1;              

}//end while
// mostrar a quantidade de valores positivos 
IO_printf("%s%d\n", "positivos menores que 100 e pares  =", contador);

 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_04 ( )

void method_05()
{
    //definir dado
    int quantidade = 0;
    int valor      = 0;
    int controle   = 0;
    int contador   = 0; 
    bool ok        = false ;

    //identificar
    IO_id("Method05 - v0.0");

    //ler do teclado
    quantidade=IO_readint ("Entrar com uma quantidade:");

    //repetir para a quantidade de vezes informada 
    controle = 1;
    while (controle <= quantidade)
    {
        //ler valor do teclado
         valor = IO_readint ( IO_concat ( 
                                          IO_concat ( "", IO_toString_d ( controle ) ), 
                                           ": "  ) );
    //testar e contar se valor for positivo menor que 100 e par (alternativo)
    ok = belongsTO(valor, 0, 100 );
    ok = ok && even(valor);
    if ( ok )
    {
        contador =contador +1;
    }  //end if
    //passar proximo valor
    controle = controle + 1;              

}//end while
// mostrar a quantidade de valores positivos 
IO_printf("%s%d\n", "positivos menores que 100 e pares  =", contador);

 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_05 ( )

void method_06()
{
    //definir dado
    chars palavra = IO_new_chars (STR_SIZE);
    int  tamanho   = 0;
    int  posicao   = 0;
    char  simbolo   = '_'; 
    int contador   = 0;

    //identificar
    IO_id("Method06 - v0.0");

    //ler do teclado
    palavra=IO_readstring ("Entrar com uma palavra:");

    //determinar a quantidade de simbolos na palavra  
    tamanho = strlen ( palavra );

    //repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao +1)
    {
        //isolar um simbolo por vez
        simbolo = palavra [ posicao ];
        //testar e contar se caractere e´ letra maiuscula 
        if (isLowerCase(simbolo))
        {
         contador = contador + 1;
        }//end if
}//end for
 // mostrar a quantidade de minusculas 
    IO_printf ( "%s%d\n", "Minusculas = ", contador ); 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_06 ( )

void method_07()
{
    //definir dado
    chars palavra = IO_new_chars (STR_SIZE);
    int  tamanho   = 0;
    int  posicao   = 0;
    char  simbolo   = '_'; 
    int contador   = 0;

    //identificar
    IO_id("Method07 - v0.0");

    //ler do teclado
    palavra=IO_readstring ("Entrar com uma palavra:");

    //determinar a quantidade de simbolos na palavra  
    tamanho = strlen ( palavra );

    //repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao +1)
    {
        //isolar um simbolo por vez
        simbolo = palavra [ posicao ];
        //testar e contar se caractere e´ letra maiuscula 
        if (isLowerCase(simbolo))
        {
        //mostrar
        IO_printf("%c", simbolo );
        //contar
         contador = contador + 1;
        }//end if
}//end for
// mostrar a quantidade de minusculas
IO_printf("\n%s%d\n", "Minusculas =", contador);

 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_07 ( )

void method_08()
{
    //definir dado
    chars palavra = IO_new_chars (STR_SIZE);
    int  tamanho   = 0;
    int  posicao   = 0;
    char  simbolo   = '_'; 
    int contador  = 0;
    chars minusculas=IO_new_chars(STR_SIZE);

    strcpy (minusculas, STR_EMPTY); //vazio

    //identificar
    IO_id("Method08 - v0.0");

    //ler do teclado
    palavra=IO_readstring ("Entrar com uma palavra:");

    //determinar a quantidade de simbolos na palavra  
    tamanho = strlen ( palavra );

    //repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao +1)
    {
        //isolar um simbolo por vez
        simbolo = palavra [ posicao ];
        //testar e contar se caractere e´ letra maiuscula 
        if (isLowerCase(simbolo))
        {
        //concatenar simbolo encontrado
        minusculas = IO_concat ( minusculas, IO_toString_c ( simbolo ));
        //contar
         contador = contador + 1;
        }//end if
}//end for

// mostrar a quantidade de minusculas
IO_printf("\n%s%d [%s]\n", "Minusculas =", contador, minusculas);

 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_08 ( )

void method_09()
{
    //definir dado
    chars palavra = IO_new_chars (STR_SIZE);
    int  tamanho   = 0;
    int  posicao   = 0;
    char  simbolo   = '_'; 
    int contador  = 0;

    //identificar
    IO_id("Method09 - v0.0");

    //ler do teclado
    palavra=IO_readstring ("Entrar com caracteres:");

    //determinar a quantidade de simbolos   
    tamanho = strlen ( palavra );

    //repetir para a quantidade de vezes informada
    for (posicao = 0; posicao < tamanho; posicao = posicao +1)
    {
        //isolar um simbolo por vez
        simbolo = palavra [ posicao ];
        //testar e contar se caractere e´ letra maiuscula 
        if ( isDigit (simbolo))
        {
        //mostrar
        IO_printf("%c", simbolo );
        //contar
         contador = contador + 1;
        }//end if
}//end for

// mostrar a quantidade de digitos
IO_printf("\n%s%d\n", "Algarismos =", contador);

 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_09 ( )

void method_10 ( ) 
{ 
 // definir dado 
    chars palavra    = IO_new_chars ( STR_SIZE ); 
    int      tamanho  =  0; 
    int      posicao   =  0; 
    char   simbolo   = '_'; 
    chars digitos     = IO_new_chars ( STR_SIZE ); 
 
    strcpy ( digitos, STR_EMPTY );  // vazio 
 
 // identificar 
    IO_id ( "Method_10 - v0.0" ); 
 
 
 // ler do teclado 
    palavra = IO_readstring ( "Entrar com uma palavra: " ); 
 
 // determinar a quantidade de simbolos na palavra 
    tamanho = strlen ( palavra ); 
 
 // repetir para a quantidade de vezes informada 
    for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 ) 
    { 
     // isolar um simbolo por vez 
        simbolo = palavra [ posicao ]; 
     // testar e contar os algarismos em uma cadeia de caracteres 
        if ( isADigit ( simbolo ) ) 
        { 
         // concatenar simbolo encontrado 
            digitos = concatADigit ( digitos, simbolo ); 
        } // end if 
    } // end for 
 
 // mostrar a quantidade de digitos 
    IO_printf ( "\n%s%d [%s]\n", "Algarismos = ", strlen( digitos ), digitos ); 
 
 // encerrar 
    IO_pause ( "Apertar ENTER para continuar" ); 
} // end method_10 ( ) 

int main(void)
{
     //definir dado 
    int x=0;


       //repetir ate desejar parar
    do
    {
        //identificar 
        IO_id("EXEMPLO0400-Programa-v0.0");

        //ler do teclado 
        IO_println("Opcoes" );
        IO_println("0-parar");
        IO_println("1-  repeticao para ler certa quantidade de valores");
        IO_println("2 - ler valores e contar positivos");
        IO_println("3 - Ler valores e contar positivos menores que 100");
        IO_println("4 - ler valores e contar positivos menores que 100 e pares");
        IO_println("5 - testar e contar se valor for positivo menor que 100 e par (alternativo)");
        IO_println("6 - ler e contar letras minusculas ");
        IO_println("7 - Ler palavra, contar e mostrar letras minusculas.");
        IO_println("8 - Ler palavra, contar e mostrar letras minusculas (alternativo)");
        IO_println("9 - ler palavras e contar os algarismos");
        IO_println("10 - digitos na palavra  ");
        IO_println("");

        x=IO_readint("Entrar com uma opcao:");

        //testar valor
        switch(x)
        {
            case 0:              break;
            case 1: method_01(); break;
            case 2: method_02(); break;
            case 3: method_03(); break;
            case 4: method_04(); break;
            case 5: method_05(); break;
            case 6: method_06(); break;
            case 7: method_07(); break;
            case 8: method_08(); break;
            case 9: method_09(); break;
            case 10: method_10(); break;
            default:
            IO_pause ( IO_concat ("Valor diferente das opcoes[0,1] (", IO_concat ( IO_toString_d ( x ),")")));

        }//end switch    
    }
    while(x!=0);

    //encerrar
    IO_pause("Apertar ENTER para terminar");
    return(0);
}// end main 

/*      TESTES
EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:1
Method 01-v0.0
Autor: ________________________

Entrar com uma quantidade:5
1:1

valor=12:3

valor=33:0

valor=04:
0

valor=05:0

valor=0
A pertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:0

Apertar ENTER para terminar

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo\io_h> gcc exemplo0400.c -o exemplo0400
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo\io_h> .\exemplo0400.exe
EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:1
Method 01-v0.0
Autor: ________________________

Entrar com uma quantidade:5
1:1
valor=1
2:2
valor=2
3:3
valor=3
4:4
valor=4
5:5
valor=5

A pertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:2
Method02 - v0.0
Autor: ________________________

Entrar com uma quantidade:7
1: 2
2: 5
3: 10
4: -3
5: 0
6: 7
7: -8
positivos=4
EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:gcc exemplo0400.c -o exemplo0400

Apertar ENTER para terminar
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo\io_h> gcc exemplo0400.c -o exemplo0400
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo\io_h> .\exemplo0400.exe
EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:2
Method02 - v0.0
Autor: ________________________

Entrar com uma quantidade:7
1: 2
2: 5
3: 10
4: -3
5: 0
6: 7
7: -8
positivos=4

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:3
Method03 - v0.0
Autor: ________________________

Entrar com uma quantidade:8
1: 3
2: 6
3: 10
4: 99
5: 100
6: -5
7: 50
8: 120
positivos menores que 100 =5

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:4
Method04 - v0.0
Autor: ________________________

Entrar com uma quantidade:6
1: 10
2: 99
3: 100
4: -8
5: 50
6: 101
positivos menores que 100 e pares  =2

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:5
Method05 - v0.0
Autor: ________________________

Entrar com uma quantidade:6
1: 10
2: 99
3: 100
4: -8
5: 50
6: 101
positivos menores que 100 e pares  =2

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:6
Method06 - v0.0
Autor: ________________________

Entrar com uma palavra:AbcDEFgh
Minusculas = 4

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:7
Method07 - v0.0
Autor: ________________________

Entrar com uma palavra: AbCdeFGh
bdeh
Minusculas =4

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:8
Method08 - v0.0
Autor: ________________________

Entrar com uma palavra:ABCdefGHiJ
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo\io_h> gcc exemplo0400.c -o exemplo0400
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo\io_h> .\exemplo0400.exe
EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:8
Method08 - v0.0
Autor: ________________________

Entrar com uma palavra:ABCdef

Minusculas =3 [def]

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:9
Method09 - v0.0
Autor: ________________________

Entrar com caracteres:abc123
123
Algarismos =3

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:10
Method_10 - v0.0
Autor: ________________________

Entrar com uma palavra: abc1de5

Algarismos = 2 [15]

Apertar ENTER para continuar

EXEMPLO0400-Programa-v0.0
Autor: ________________________

Opcoes
0-parar
1-  repeticao para ler certa quantidade de valores
2 - ler valores e contar positivos
3 - Ler valores e contar positivos menores que 100
4 - ler valores e contar positivos menores que 100 e pares
5 - testar e contar se valor for positivo menor que 100 e par (alternativo)
6 - ler e contar letras minusculas 
7 - Ler palavra, contar e mostrar letras minusculas.
8 - Ler palavra, contar e mostrar letras minusculas (alternativo)
9 - ler palavras e contar os algarismos
10 - digitos na palavra  

Entrar com uma opcao:0

Apertar ENTER para terminar

 */
 /*
ERROS ENCONTRADOS DURANTE OS TESTES - EXEMPLO 0400

1. COMPILAÇÃO COM io.c
   Eu estava compilando com:
   gcc exemplo0400.c io.c -o exemplo0400

   Como estou utilizando o io.h com as implementações necessárias,
   passei a compilar somente com:
   gcc exemplo0400.c -o exemplo0400


2. FUNÇÃO positive
   A função positive() era utilizada antes de ser conhecida pelo
   compilador.

   Solução:
   declarar o protótipo antes dos métodos:
   bool positive(int x);


3. FUNÇÃO even
   Foi escrito:
   result(result);

   O correto é:
   return(result);


4. FUNÇÃO isLowerCase
   Faltava o ponto e vírgula:
   return(result)

   O correto é:
   return(result);


5. FUNÇÃO isDigit
   Foi escrito:
   bool is isDigit(char x)

   O correto é:
   bool isDigit(char x)


6. VARIÁVEL palavra
   Foi declarado:
   char palavra = IO_new_chars(STR_SIZE);

   Porém IO_new_chars() retorna uma cadeia de caracteres.
   O correto é:
   chars palavra = IO_new_chars(STR_SIZE);

   Esse erro apareceu nos métodos 06, 07, 08 e 09.


7. INCREMENTO DE posicao
   Foi escrito:
   posicao = posicaop + 1;

   O correto é:
   posicao = posicao + 1;

   Esse erro apareceu nos métodos 06, 07 e 08.


8. MÉTODO 08
   O programa recebia a palavra, mas não mostrava o resultado
   porque o código do for estava incorreto.

   Além disso, era necessário mostrar a cadeia minusculas
   no resultado.


9. MÉTODO 02
   O resultado era mostrado, mas faltava o comando para pausar
   antes de voltar ao menu.

   Solução:
   IO_pause("Apertar ENTER para continuar");


10. MÉTODO 01
    A saída dos valores ficava grudada com a próxima entrada.

    Foi usado:
    printf("\n%s%d", "valor=", valor);

    Para seguir o padrão da biblioteca, foi alterado para:
    IO_printf("%s%d\n", "valor=", valor);


11. SWITCH / OPÇÃO 0
    Foi colocado:
    case 0: method_00(); break;

    Porém method_00() não existia.

    Como 0 significa parar, o correto é:
    case 0: break;


12. TESTES DOS MÉTODOS
    Durante os testes, percebi que cada método precisa ser
    executado individualmente pelo menu para verificar:
    - entrada dos dados;
    - condição do método;
    - contador;
    - saída;
    - pausa antes de retornar ao menu.
*/