//1579620-Marcella_Nery_Guedes_de_Araujo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void method_0711 ( )
{
    printf(" Exercicio 0711");
    printf("\n");
    int n;
    int i;
    int valor = 3;

    printf("Digite a quantidade: ");
    scanf("%d", &n);getchar( );

    for (i = 0; i < n; i++)
    {
        printf("%d ", valor);
        valor = valor + 6;
    }
    printf ("\n");
}

void method_0712 ( )
{
    int n;
    int i;
    int valor;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );

    valor = n * 4;

    for (i = 0; i < n; i++)
    {
        printf("%d ", valor);
        valor = valor - 4;
    }

    printf("\n");
}

void method_0713 ( )
{
    int n;
    int i;
    int valor = 1;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );

    for (i = 0; i < n; i++)
    {
        printf("%d ", valor);
        valor = valor * 4;
    }

    printf("\n");
}

void method_0714 ( )
{
    int n;
    int i;
    int denominador;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );

    denominador = 1;

    for (i = 1; i < n; i++)
    {
        denominador = denominador * 4;
    }

    for (i = 0; i < n; i++)
    {
        printf("1/%d ", denominador);
        denominador = denominador / 4;
    }

    printf("\n");
}

void method_0715 ( )
{
    int n;
    int i;
    double x;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );

    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    for (i = 0; i < n; i++)
    {
        printf("%.2lf ", 1 / pow(x, 2 * i));
    }

    printf("\n");
}

double function_0716 ( int n, double x )
{
    int i;
    double soma = 0.0;

    for (i = 0; i < n; i++)
    {
        soma = soma + 1 / pow(x, 2 * i);
    }

    return soma;
}

void method_0716 ( )
{
    int n;
    double x;
    double resultado;
    FILE *arquivo;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );

    printf("Digite o valor de x: ");
    scanf("%lf", &x);getchar( );

    resultado = function_0716(n, x);

    printf("Resultado = %.2lf\n", resultado);

    arquivo = fopen("RESULTADO06.TXT", "a");

    fprintf(arquivo, "Quantidade: %d - Resultado: %.2lf\n", n, resultado);

    fclose(arquivo);

    printf("\n");
}

double function_0717 ( int n )
{
    int i;
    double soma = 0.0;
    double denominador;

    denominador = pow(4, n - 1);

    for (i = 0; i < n; i++)
    {
        soma = soma + 1 / denominador;
        denominador = denominador / 4;
    }

    return soma;
}

void method_0717 ( )
{
    int n;
    double resultado;
    FILE *arquivo;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );


    resultado = function_0717(n);

    printf("Resultado = %.6lf\n", resultado);

    arquivo = fopen("RESULTADO07.TXT", "a");

    fprintf(arquivo, "Quantidade: %d - Resultado: %.6lf\n", n, resultado);

    fclose(arquivo);

    printf("\n");
}

int function_0718 ( int n )
{
    int a = 0;
    int b = 1;
    int c;
    int quantidade = 0;

    while (quantidade < n)
    {
        c = a + b;
        a = b;
        b = c;

        if (c % 2 == 0)
        {
            quantidade++;

            if (quantidade == n)
            {
                return c;
            }
        }
    }

    return 0;
}

void method_0718 ( )
{
    int n;
    int i;
    int valor;
    FILE *arquivo;

    printf("\nDigite a quantidade: ");
    scanf("%d", &n);getchar( );

    arquivo = fopen("RESULTADO08.TXT", "a");

    fprintf(arquivo, "Quantidade: %d - Valores: ", n);

    for (i = 1; i <= n; i++)
    {
        valor = function_0718(i);

        printf("%d ", valor);
        fprintf(arquivo, "%d ", valor);
    }

    fprintf(arquivo, "\n");

    fclose(arquivo);

    printf("\n");
}

int function_0719 ( char texto[] )
{
    int i;
    int quantidade = 0;

    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            quantidade++;
        }
    }

    return quantidade;
}

void method_0719 ( )
{
    char texto[80];
    int resultado;
    FILE *arquivo;

    printf("\nDigite uma cadeia de caracteres: ");
    scanf(" %[^\n]", texto);getchar( );

    resultado = function_0719(texto);

    printf("Quantidade de minusculas: %d\n", resultado);

    arquivo = fopen("RESULTADO09.TXT", "a");

    fprintf(arquivo, "Cadeia: %s - Minusculas: %d\n", texto, resultado);

    fclose(arquivo);

    printf("\n");
}

int function_0720 ( char texto[] )
{
    int i;
    int quantidade = 0;

    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= '0' && texto[i] <= '6')
        {
            quantidade++;
        }
    }

    return quantidade;
}

void method_0720 ( )
{
    char texto[80];
    int i;
    int resultado;
    FILE *arquivo;

    printf("\nDigite uma cadeia de caracteres: ");

    i = 0;

    while ((texto[i] = getchar()) != '\n')
    {
        i++;
    }

    texto[i] = '\0';

    resultado = function_0720(texto);

    printf("Quantidade de digitos menores ou iguais a 6: %d\n", resultado);

    arquivo = fopen("RESULTADO10.TXT", "a");

    fprintf(arquivo, "Cadeia: %s - Resultado: %d\n", texto, resultado);

    fclose(arquivo);

    printf("\n");
}

void method_07E1 ( )
{
    int n;
    int i;
    FILE *arquivo;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &n);
    getchar();

    arquivo = fopen("RESULTADOE1.TXT", "a");

    for (i = n; i >= 1; i--)
    {
        if (n % i == 0 && i % 2 != 0)
        {
            printf("%d ", i);
            fprintf(arquivo, "%d ", i);
        }
    }

    fprintf(arquivo, "\n");
    fclose(arquivo);

    printf("\n");
}

int function_07E2 ( char palavra[] )
{
    int tamanho = 0;
    int i;

    for (i = 0; palavra[i] != '\0'; i++)
    {
        tamanho++;
    }

    if ((palavra[0] == 'c' || palavra[0] == 'C') && tamanho <= 15)
    {
        return 1;
    }

    return 0;
}

void method_07E2 ( )
{
    char palavra[80];
    int quantidade = 0;
    FILE *arquivo;

    arquivo = fopen("PALAVRAS.TXT", "r");

    while (fgets(palavra, 100, arquivo) != NULL)
    {
        if (function_07E2(palavra))
        {
            quantidade++;
        }
    }

    fclose(arquivo);

    printf("\nQuantidade: %d\n", quantidade);

    arquivo = fopen("RESULTADOE2.TXT", "a");

    fprintf(arquivo, "Quantidade: %d\n", quantidade);

    fclose(arquivo);

    printf("\n");
}

int main ( void )
{
   int opcao = 0;
   printf ( "%s\n", "1579620-Marcella_Nery_Guedes_de_Araujo" );
   printf ( "\n" );
   do
   {
        printf("\n");
        printf("0- Parar");
        printf("\n");
        printf("1- Exercicio 0711");
        printf("\n");
        printf("2- Exercicio 0712");
        printf("\n");
        printf("3- Exercicio 0713");
        printf("\n");
        printf("4- Exercicio 0714");
        printf("\n");
        printf("5- Exercicio 0715");
        printf("\n");
        printf("6- Exercicio 0716");
        printf("\n");
        printf("7- Exercicio 0717");
        printf("\n");
        printf("8- Exercicio 0718");
        printf("\n");
        printf("9- Exercicio 0719");
        printf("\n");
        printf("10- Exercicio 0720");
        printf("\n");
        printf("11- Exercicio 07E1");
        printf("\n");
         printf("12- Exercicio 07E2");
        printf("\n");
        printf("\n");
       printf ( "%s", "Qual a opcao? " );
       scanf ( "%d", &opcao ); getchar ( );
       printf ( "%s%d\n", "opcao=", opcao );
       switch ( opcao )
       {
          case 0: /* nao fazer algo */
           break;
          case 1: method_0711();
           break;
          case 2: method_0712 ();
           break;
           case 3: method_0713 ();
           break;
           case 4: method_0714 ();
           break;
           case 5: method_0715 ();
           break;
           case 6: method_0716 ();
           break;
           case 7: method_0717 ();
           break;
           case 8: method_0718 ();
           break;
           case 9: method_0719 ();
           break;
           case 10: method_0720 ();
           break;
           case 11: method_07E1 ();
           break;
           case 12: method_07E2 ();
           break;
          default: /* outra opcao */
           printf ( "%s\n", "ERRO: Opcao invalida." );
           break;
       }
    }
    while ( opcao != 0 );
    printf ( "%s\n", "Fim do programa" );
    printf ( "\n" );
    return (0);
}

/* testes 
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718

Qual a opcao? 8
opcao=8

Digite a quantidade: 5
3 13 55 233 987 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718

Qual a opcao? 8
opcao=8

Digite a quantidade: 5
2 8 34 144 610 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719

Qual a opcao? 9
opcao=9

Digite uma cadeia de caracteres: ola mundo 
Quantidade de minusculas: 8


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
Exercicios07.c: In function 'main':
Exercicios07.c:383:12: error: duplicate case value
  383 |            case 9: method_0720 ();
      |            ^~~~
Exercicios07.c:381:12: note: previously used here
  381 |            case 9: method_0719 ();
      |            ^~~~
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720

Qual a opcao? 10
opcao=10

Digite uma cadeia de caracteres: ola mundo 
Quantidade de digitos menores ou iguais a 6: 0


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> 
PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1

Qual a opcao? 11
opcao=11

Digite um valor inteiro: 5
5 1 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 12
opcao=12

Quantidade: 0


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 12
opcao=12

Quantidade: 0


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> cd "c:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h\" ; if ($?) { gcc Exercicios07.c -o Exercicios07 } ; if ($?) { .\Exercicios07 }
1579620-Marcella_Nery_Guedes_de_Araujo


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 1
opcao=1
 Exercicio 0711
Digite a quantidade: 5
3 9 15 21 27 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 2
opcao=2

Digite a quantidade: 5
20 16 12 8 4 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 3
opcao=3

Digite a quantidade: 5
1 4 16 64 256 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 4
opcao=4

Digite a quantidade: 5
1/256 1/64 1/16 1/4 1/1 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 5
opcao=5

Digite a quantidade: 5
Digite o valor de x: 5
1.00 0.04 0.00 0.00 0.00 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 6
opcao=6

Digite a quantidade: 3
Digite o valor de x: 5
Resultado = 1.04


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 7
opcao=7

Digite a quantidade: 5
Resultado = 1.332031


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 8
opcao=8

Digite a quantidade: 5
2 8 34 144 610 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 9
opcao=9

Digite uma cadeia de caracteres: ola mundo 
Quantidade de minusculas: 8


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 10
opcao=10

Digite uma cadeia de caracteres: ola  mundo 
Quantidade de digitos menores ou iguais a 6: 0


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 11
opcao=11

Digite um valor inteiro: 5
5 1 

0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 12
opcao=12

Quantidade: 0


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 12
opcao=12

Quantidade: 0


0- Parar
1- Exercicio 0711
2- Exercicio 0712
3- Exercicio 0713
4- Exercicio 0714
5- Exercicio 0715
6- Exercicio 0716
7- Exercicio 0717
8- Exercicio 0718
9- Exercicio 0719
10- Exercicio 0720
11- Exercicio 07E1
12- Exercicio 07E2

Qual a opcao? 0
opcao=0
Fim do programa

PS C:\Users\marce\OneDrive\Desktop\1579620-Marcella_Nery_Guedes_de_Araujo-ED07\io_h> 
*/