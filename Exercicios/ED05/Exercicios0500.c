 #include <stdio.h>
 #include <math.h>

// Funcao para gerar valores multiplo de 4
int function_01 ( int x )
{
    return ( 4 * x );
}//end funcao

// funcao para gerar multiplos de 2 e 3 
 int function_02 ( int x )
  { 
    return ( 6 * x );
 } // end function_02( )

 // funcao para gerar potencias de 4
int function_03 ( int x )
{
    int valor = 1;

    while ( x > 0 )
    {
        valor = valor * 4;
        x = x - 1;
    } // end while

    return ( valor );
} // end function_03( )

int function_04 ( int x )
{
    return ( 4 * x );
} // end function_04( )

// funcao para calcular as potencias de x
double function_05 ( double x, int y )
{
    return ( pow(x, y) );
} // end function_05( )

// funcao para calcular a soma dos valores
int function_06 ( int n )
{
    int soma = 0;
    int valor = 4;
    int quantidade = 0;

    while ( quantidade < n )
    {
        if ( valor % 2 == 0 && valor % 3 != 0 )
        {
            soma = soma + valor;
            quantidade = quantidade + 1;
        } // end if

        valor = valor + 1;
    } // end while

    return ( soma );
} // end function_06( )

// funcao para calcular a soma dos inversos
double function_07 ( int n )
{
    double soma = 0.0;
    int valor = 3;
    int quantidade = 0;

    while ( quantidade < n )
    {
        if ( valor % 3 == 0 && valor % 5 != 0 )
        {
            soma = soma + 1.0 / valor;
            quantidade = quantidade + 1;
        } // end if

        valor = valor + 1;
    } // end while

    return ( soma );
} // end function_07( )

// funcao para calcular a soma dos valores
int function_08 ( int n )
{
    int soma = 3;
    int valor = 3;
    int incremento = 1;
    int quantidade = 0;

    while ( quantidade < n )
    {
        valor = valor + incremento;
        soma = soma + valor;
        incremento = incremento + 1;
        quantidade = quantidade + 1;
    } // end while

    return ( soma );
} // end function_08( )

// funcao para calcular a soma dos quadrados
int function_09 ( int n )
{
    int soma = 0;
    int valor = 4;
    int quantidade = 0;

    while ( quantidade < n )
    {
        soma = soma + valor * valor;
        valor = valor + 1;
        quantidade = quantidade + 1;
    } // end while

    return ( soma );
} // end function_09( )

// funcao para calcular a soma dos inversos
double function_10 ( int n )
{
    double soma = 0.0;
    int denominador = 4;
    int diferenca = 1;
    int quantidade = 1;

    while ( quantidade < n )
    {
        denominador = denominador + diferenca;
        diferenca = diferenca + 1;
        quantidade = quantidade + 1;
    } // end while

    diferenca = n - 1;
    quantidade = 0;

    while ( quantidade < n )
    {
        soma = soma + 1.0 / denominador;
        denominador = denominador - diferenca;
        diferenca = diferenca - 1;
        quantidade = quantidade + 1;
    } // end while

    return ( soma );
} // end function_10( )

// funcao para calcular o fatorial
int function_E1 ( int n )
{
    int fatorial = 1;

    while ( n > 1 )
    {
        fatorial = fatorial * n;
        n = n - 1;
    } // end while

    return ( fatorial );
} // end function_E1( )

// funcao para calcular o fatorial
int factorial ( int n )
{
    int fatorial = 1;

    while ( n > 1 )
    {
        fatorial = fatorial * n;
        n = n - 1;
    } // end while

    return ( fatorial );
} // end factorial( )

// funcao para calcular f(n)
double function_E2 ( int n )
{
    double resultado = 1.0;
    int x = 1;

    while ( x <= n )
    {
        resultado = resultado * ( x + (double)(2 * x + 1) / factorial(2 * x + 2) );
        x = x + 1;
    } // end while

    return ( resultado );
} // end function_E2( )

void method_00(void)
{
    // nao faz nada
} // end method_00()

/*
    Method_01a - Mostrar multiplos
*/
void method_0511a ( int x )
{
    // contador
    int y = 1;

    // repetir
    while ( y <= x )
    {
        // mostrar
        printf ( "Valor = %d\n", function_01(y) );

        // proximo
        y = y + 1;
    }// end while
}//end method0511a

/*
    Method_0511 - Ler quantidade
*/
void method_0511 ( )
{
    int n = 0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );
    getchar( );

    method_0511a ( n );

    printf ( "\nAperte ENTER para continuar" );
    getchar( );
}//ende method 0511a
void method_0512a ( int x )
{
    int y = 1;

    while ( y <= x )
    {
        printf ( "Valor = %d\n", function_02(y) );
        y = y + 1;
    } // end while
} // end method_0512a( )

// metodo para ler a quantidade
void method_0512 ( )
{
    int n = 0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    method_0512a ( n );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0512( )

// metodo para mostrar potencias de 4 em ordem decrescente
void method_0513a ( int x )
{
    int y = x;

    while ( y >= 1 )
    {
        printf ( "Valor = %d\n", function_03(y) );
        y = y - 1;
    } // end while
} // end method_0513a( )

// metodo para ler a quantidade
void method_0513 ( )
{
    int n = 0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    method_0513a ( n );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_03( )

// metodo para mostrar os inversos
void method_0514a ( int x )
{
    int y = 1;

    while ( y <= x )
    {
        printf ( "1/%d\n", function_04(y) );
        y = y + 1;
    } // end while
} // end method_0514a( )

// metodo para ler a quantidade
void method_0514 ( )
{
    int n = 0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    method_0514a ( n );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0514( )

// metodo para mostrar a sequencia
void method_0515a ( double x, int n )
{
    int y = 1;

    while ( y <= n )
    {
        printf ( "1/%d = 1/%.2lf\n", 2 * y + 1, function_05(x, 2 * y + 1) );
        y = y + 1;
    } // end while
} // end method_0515a( )

// metodo para ler os valores
void method_0515 ( )
{
    double x = 0;
    int n = 0;

    printf ( "Entrar com um valor real: " );
    scanf ( "%lf", &x );

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    printf ( "1\n" );
    method_0515a ( x, n - 1 );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0515( )

// metodo para testar a funcao
void method_0516a ( )
{
    int n = 0;
    int valor = 4;
    int quantidade = 0;
    int soma = 0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    printf ( "Soma = " );

    while ( quantidade < n )
    {
        if ( valor % 2 == 0 && valor % 3 != 0 )
        {
            soma = soma + valor;

            if ( quantidade > 0 )
            {
                printf ( " + " );
            } // end if

            printf ( "%d", valor );
            quantidade = quantidade + 1;
        } // end if

        valor = valor + 1;
    } // end while

    printf ( " = %d\n", soma );
} // end method_0516a( )
void method_0516 ( )
{
    method_0516a ( );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0516( )

// metodo para testar a funcao
void method_0517a ( )
{
    int n = 0;
    int valor = 3;
    int quantidade = 0;
    double soma = 0.0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    printf ( "Soma = " );

    while ( quantidade < n )
    {
        if ( valor % 3 == 0 && valor % 5 != 0 )
        {
            soma = soma + 1.0 / valor;

            if ( quantidade > 0 )
            {
                printf ( " + " );
            } // end if

            printf ( "1/%d", valor );
            quantidade = quantidade + 1;
        } // end if

        valor = valor + 1;
    } // end while

    printf ( " = %.4lf\n", soma );
} // end method_0517a( )
void method_0517 ( )
{
    method_0517a ( );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0517( )

// metodo para testar a funcao
void method_0518a ( )
{
    int n = 0;
    int valor = 3;
    int incremento = 1;
    int quantidade = 0;
    int soma = 3;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    printf ( "Soma = 3" );

    while ( quantidade < n )
    {
        valor = valor + incremento;
        soma = soma + valor;

        printf ( " + %d", valor );

        incremento = incremento + 1;
        quantidade = quantidade + 1;
    } // end while

    printf ( " = %d\n", soma );
} // end method_0518a( )
void method_0518 ( )
{
    method_0518a ( );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0518( )

// metodo para testar a funcao
void method_0519a ( )
{
    int n = 0;
    int valor = 4;
    int quantidade = 0;
    int soma = 0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    printf ( "Soma = " );

    while ( quantidade < n )
    {
        soma = soma + valor * valor;

        if ( quantidade > 0 )
        {
            printf ( " + " );
        } // end if

        printf ( "%d", valor * valor );

        valor = valor + 1;
        quantidade = quantidade + 1;
    } // end while

    printf ( " = %d\n", soma );
} // end method_0519a( )
void method_0519 ( )
{
    method_0519a ( );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0519( )

// metodo para testar a funcao
void method_0520a ( )
{
    int n = 0;
    int denominador = 4;
    int diferenca = 1;
    int quantidade = 1;
    double soma = 0.0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    while ( quantidade < n )
    {
        denominador = denominador + diferenca;
        diferenca = diferenca + 1;
        quantidade = quantidade + 1;
    } // end while

    diferenca = n - 1;
    quantidade = 0;

    printf ( "Soma = " );

    while ( quantidade < n )
    {
        soma = soma + 1.0 / denominador;

        if ( quantidade > 0 )
        {
            printf ( " + " );
        } // end if

        printf ( "1/%d", denominador );

        denominador = denominador - diferenca;
        diferenca = diferenca - 1;
        quantidade = quantidade + 1;
    } // end while

    printf ( " = %.4lf\n", soma );
} // end method_0520a( )
void method_0520 ( )
{
    method_0520a ( );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_0520( )

// metodo para ler e mostrar o fatorial
void method_05E1 ( )
{
    int n = 0;
    int valor = 1;
    int fatorial = 1;

    printf ( "Entrar com um valor inteiro: " );
    scanf ( "%d", &n );

    if ( n > 0 )
    {
        printf ( "Fatorial = " );

        while ( valor <= n )
        {
            fatorial = fatorial * valor;

            if ( valor > 1 )
            {
                printf ( " x " );
            } // end if

            printf ( "%d", valor );
            valor = valor + 1;
        } // end while

        printf ( " = %d\n", fatorial );
    } // end if

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_05E1( )
void method_05E2 ( )
{
    int n = 0;
    int x = 1;
    double resultado = 1.0;
    double termo = 0.0;

    printf ( "Entrar com uma quantidade: " );
    scanf ( "%d", &n );

    printf ( "Resultado = " );

    while ( x <= n )
    {
        termo = x + (double)(2 * x + 1) / factorial(2 * x + 2);
        resultado = resultado * termo;

        if ( x > 1 )
        {
            printf ( " x " );
        } // end if

        printf ( "(%d + %d/%d!)", x, 2 * x + 1, 2 * x + 2 );

        x = x + 1;
    } // end while

    printf ( " = %.6lf\n", resultado );

    getchar( );
    printf ( "\nAperte ENTER para continuar" );
    getchar( );
} // end method_05E2( )

int main(void)
{
    // definir dados
    int opcao = 0;

    do
    {
        // mostrar menu
        printf("\n");
        printf("%s\n", "Escolha alguma das opcoes a seguir:");
        printf("%s\n", "0 - Parar");
        printf("%s\n", "1 - Exercicio 0511");
        printf("%s\n", "2 - Exercicio 0512");
        printf("%s\n", "3 - Exercicio 0513");
        printf("%s\n", "4 - Exercicio 0514");
        printf("%s\n", "5 - Exercicio 0515");
        printf("%s\n", "6 - Exercicio 0516");
        printf("%s\n", "7 - Exercicio 0517");
        printf("%s\n", "8 - Exercicio 0518");
        printf("%s\n", "9 - Exercicio 0519");
        printf("%s\n", "10 - Exercicio 0520");
        printf("%s\n", "11 - Exercicio 05E1");
        printf("%s\n", "12 - Exercicio 05E2");

        // ler opcao
        printf("\nOpcao = ");
        scanf("%d", &opcao);
        getchar();

        // selecionar opcao
        switch(opcao)
        {
            case 0:
                printf("\nOpcao 0 - Parar\n");
                method_00();
                break;

            case 1:
                printf("\nOpcao 1 - Exercicio 0511\n");
                method_0511();
                break;

            case 2:
                printf("\nOpcao 2 - Exercicio 0512\n");
                method_0512();
                break;

            case 3:
                printf("\nOpcao 3 - Exercicio 0513\n");
                method_0513();
                break;

            case 4:
                printf("\nOpcao 4 - Exercicio 0514\n");
                method_0514();
                break;

            case 5:
                printf("\nOpcao 5 - Exercicio 0515\n");
                method_0515();
                break;

            case 6:
                printf("\nOpcao 6 - Exercicio 0516\n");
                method_0516();
                break;

            case 7:
                printf("\nOpcao 7 - Exercicio 0517\n");
                method_0517();
                break;

            case 8:
                printf("\nOpcao 8 - Exercicio 0518\n");
                method_0518();
                break;

            case 9:
                printf("\nOpcao 9 - Exercicio 0519\n");
                method_0519();
                break;

            case 10:
                printf("\nOpcao 10 - Exercicio 0520\n");
                method_0520();
                break;

            case 11:
                printf("\nOpcao 11 - Exercicio 05E1\n");
                method_05E1();
                break;

            case 12:
                printf("\nOpcao 12 - Exercicio 05E2\n");
                method_05E2();
                break;

            default:
                printf("\nOpcao invalida\n");
                break;
        } // end switch

    } while(opcao != 0);

    // encerrar
    printf("\nAperte ENTER para terminar!");
    getchar();

    return (0);
} // end main()

/*testes
 > cd "c:\Users\marce\OneDrive\Desktop\1579620_Marcella_Nery_Guedes_de_Araujo_ED05\" ; if ($?) { gcc Exercicios0500.c -o Exercicios0500 } ; if ($?) { .\Exercicios0500 }

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 1

Opcao 1 - Exercicio 0511
Entrar com uma quantidade: 5
Valor = 4
Valor = 8
Valor = 12
Valor = 16
Valor = 20

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 2

Opcao 2 - Exercicio 0512
Entrar com uma quantidade: 5
Valor = 6
Valor = 12
Valor = 18
Valor = 24
Valor = 30

Aperte ENTER para continuar 

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 3

Opcao 3 - Exercicio 0513
Entrar com uma quantidade: 5
Valor = 1024
Valor = 256
Valor = 64
Valor = 16
Valor = 4

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 4

Opcao 4 - Exercicio 0514
Entrar com uma quantidade: 5
1/4
1/8
1/12
1/16
1/20

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 5

Opcao 5 - Exercicio 0515
Entrar com um valor real: 5
Entrar com uma quantidade: 5
1
1/3 = 1/125.00
1/5 = 1/3125.00
1/7 = 1/78125.00
1/9 = 1/1953125.00

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 6

Opcao 6 - Exercicio 0516
Entrar com uma quantidade: 5
Soma = 4 + 8 + 10 + 14 + 16 = 52

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 7

Opcao 7 - Exercicio 0517
Entrar com uma quantidade: 5
Soma = 1/3 + 1/6 + 1/9 + 1/12 + 1/18 = 0.7500

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 8

Opcao 8 - Exercicio 0518
Entrar com uma quantidade: 5
Soma = 3 + 4 + 6 + 9 + 13 + 18 = 53

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 9

Opcao 9 - Exercicio 0519
Entrar com uma quantidade: 5
Soma = 16 + 25 + 36 + 49 + 64 = 190

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 10

Opcao 10 - Exercicio 0520
Entrar com uma quantidade: 5
Soma = 1/14 + 1/10 + 1/7 + 1/5 + 1/4 = 0.7643

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 11

Opcao 11 - Exercicio 05E1
Entrar com um valor inteiro: 6
Fatorial = 1 x 2 x 3 x 4 x 5 x 6 = 720

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 12

Opcao 12 - Exercicio 05E2
Entrar com uma quantidade: 7
Resultado = (1 + 3/4!) x (2 + 5/6!) x (3 + 7/8!) x (4 + 9/10!) x (5 + 11/12!) x (6 + 13/14!) x (7 + 15/16!) = 5690.020334

Aperte ENTER para continuar

Escolha alguma das opcoes a seguir:
0 - Parar
1 - Exercicio 0511
2 - Exercicio 0512
3 - Exercicio 0513
4 - Exercicio 0514
5 - Exercicio 0515
6 - Exercicio 0516
7 - Exercicio 0517
8 - Exercicio 0518
9 - Exercicio 0519
10 - Exercicio 0520
11 - Exercicio 05E1
12 - Exercicio 05E2

Opcao = 0

Opcao 0 - Parar

Aperte ENTER para terminar!
PS C:\Users\marce\OneDrive\Desktop\1579620_Marcella_Nery_Guedes_de_Araujo_ED05> 
*/