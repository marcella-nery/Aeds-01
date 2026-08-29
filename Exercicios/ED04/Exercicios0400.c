/*
 * Exercicios04 - Programa - v0.0
 *
 * 1579620-Marcella_Nery_Guedes_de_Araujo
 */

// dependencias
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// definir constante
#define STR_SIZE 100

// prototipos dos metodos
void method_00(void);
void method_0411(void);
void method_0412(void);
void method_0413(void);
void method_0414(void);
void method_0415(void);
void method_0416(void);
void method_0417(void);
void method_0418(void);
void method_0419(void);
void method_0420(void);
void method_04E1(void);
void method_04E2(void);

// prototipos das funcoes
int ehLetraMinuscula(char caractere);
int contarLetras(const char *cadeia);
void separarLetras(const char *cadeia, char *resultado);
int contarDigitosImpares(const char *cadeia);
void separarAlfanumericos(const char *cadeia, char *resultado);
int contarAlfanumericos(const char *cadeia);
int contarAlfanumericosEspacos(const char *cadeia);
int contarDigitos(const char *cadeia);


/**
 * Funcao para verificar se um caractere e' uma letra minuscula
 */
int ehLetraMinuscula(char caractere)
{
    // testar caractere
    return (caractere >= 'a' && caractere <= 'z');
} // end ehLetraMinuscula()


/**
 * Funcao para contar letras minusculas entre 'l' e 'q'
 */
int contarLetras(const char *cadeia)
{
    // definir dados
    int posicao = 0;
    int quantidadeLetras = 0;

    // procurar as letras
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(ehLetraMinuscula(cadeia[posicao]) &&
           cadeia[posicao] >= 'l' &&
           cadeia[posicao] <= 'q')
        {
            quantidadeLetras = quantidadeLetras + 1;
        } // end if
    } // end for

    // retornar resultado
    return (quantidadeLetras);
} // end contarLetras()


/**
 * Funcao para separar letras entre 'l' e 'q'
 */
void separarLetras(const char *cadeia, char *resultado)
{
    // definir dados
    int posicao = 0;
    char simbolo[2];

    // iniciar a cadeia resultado
    resultado[0] = '\0';

    // procurar as letras
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if((cadeia[posicao] >= 'l' &&
            cadeia[posicao] <= 'q') ||
           (cadeia[posicao] >= 'L' &&
            cadeia[posicao] <= 'Q'))
        {
            // formar cadeia unitaria
            simbolo[0] = cadeia[posicao];
            simbolo[1] = '\0';

            // concatenar
            strcat(resultado, simbolo);
        } // end if
    } // end for
} // end separarLetras()


/**
 * Funcao para contar digitos impares
 */
int contarDigitosImpares(const char *cadeia)
{
    // definir dados
    int posicao = 0;
    int quantidadeDigitos = 0;

    // procurar os digitos
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(isdigit((unsigned char)cadeia[posicao]))
        {
            if(((int)cadeia[posicao] -
                (int)'0') % 2 != 0)
            {
                quantidadeDigitos = quantidadeDigitos + 1;
            } // end if
        } // end if
    } // end for

    // retornar resultado
    return (quantidadeDigitos);
} // end contarDigitosImpares()


/**
 * Funcao para separar simbolos alfanumericos
 */
void separarAlfanumericos(const char *cadeia, char *resultado)
{
    // definir dados
    int posicao = 0;
    char simbolo[2];

    // iniciar a cadeia resultado
    resultado[0] = '\0';

    // procurar os simbolos
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(isalnum((unsigned char)cadeia[posicao]))
        {
            // formar cadeia unitaria
            simbolo[0] = cadeia[posicao];
            simbolo[1] = '\0';

            // concatenar
            strcat(resultado, simbolo);
        } // end if
    } // end for
} // end separarAlfanumericos()


/**
 * Funcao para contar simbolos alfanumericos
 */
int contarAlfanumericos(const char *cadeia)
{
    // definir dados
    int posicao = 0;
    int quantidadeSimbolos = 0;

    // procurar os simbolos
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(isalnum((unsigned char)cadeia[posicao]))
        {
            quantidadeSimbolos = quantidadeSimbolos + 1;
        } // end if
    } // end for

    // retornar resultado
    return (quantidadeSimbolos);
} // end contarAlfanumericos()


/**
 * Funcao para contar simbolos alfanumericos e espacos
 */
int contarAlfanumericosEspacos(const char *cadeia)
{
    // definir dados
    int posicao = 0;
    int quantidadeSimbolos = 0;

    // procurar os simbolos
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(isalnum((unsigned char)cadeia[posicao]) ||
           cadeia[posicao] == ' ')
        {
            quantidadeSimbolos = quantidadeSimbolos + 1;
        } // end if
    } // end for

    // retornar resultado
    return (quantidadeSimbolos);
} // end contarAlfanumericosEspacos()


/**
 * Funcao para contar digitos em uma cadeia
 */
int contarDigitos(const char *cadeia)
{
    // definir dados
    int posicao = 0;
    int quantidadeDigitos = 0;

    // procurar os digitos
    for(posicao = 0;
        cadeia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(isdigit((unsigned char)cadeia[posicao]))
        {
            quantidadeDigitos = quantidadeDigitos + 1;
        } // end if
    } // end for

    // retornar resultado
    return (quantidadeDigitos);
}


/**
 * Method_00 - nao faz nada
 */
void method_00(void)
{
    // nao faz nada
} // end method_00()


/**
 * Method_0411 - contar valores dentro e fora de um intervalo
 */
void method_0411(void)
{
    // definir dados
    int quantidadeValores = 0;
    double limiteInferior = 0.0;
    double limiteSuperior = 0.0;
    double valorAtual = 0.0;
    int posicao = 0;
    int quantidadeDentro = 0;
    int quantidadeFora = 0;

    // identificar
    printf("\nMethod_0411 - v0.0\n");

    // ler quantidade
    printf("Entrar com a quantidade de valores: ");
    scanf("%d", &quantidadeValores);

    // ler intervalo
    printf("Entrar com o limite inferior: ");
    scanf("%lf", &limiteInferior);

    printf("Entrar com o limite superior: ");
    scanf("%lf", &limiteSuperior);

    getchar();

    // ler valores
    for(posicao = 0;
        posicao < quantidadeValores;
        posicao = posicao + 1)
    {
        printf("Entrar com o valor %d: ", posicao + 1);
        scanf("%lf", &valorAtual);

        if(valorAtual >= limiteInferior &&
           valorAtual <= limiteSuperior)
        {
            quantidadeDentro = quantidadeDentro + 1;
        }
        else
        {
            quantidadeFora = quantidadeFora + 1;
        } // end if
    } // end for

    getchar();

    // mostrar resultados
    printf("\nQuantidade dentro = %d\n", quantidadeDentro);
    printf("Quantidade fora   = %d\n", quantidadeFora);

    // encerrar
    printf("\nAperte ENTER para continuar");
    getchar();
} // end method_0411()


/**
 * Method_0412 - contar letras minusculas entre 'l' e 'q'
 */
void method_0412(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    int quantidadeLetras = 0;

    // identificar
    printf("\nMethod_0412 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // calcular
    quantidadeLetras = contarLetras(sequencia);

    // mostrar resultados
    printf("Quantidade = %d\n", quantidadeLetras);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0412()


/**
 * Method_0413 - contar letras minusculas entre 'l' e 'q'
 */
void method_0413(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    int quantidadeLetras = 0;

    // identificar
    printf("\nMethod_0413 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // calcular
    quantidadeLetras = contarLetras(sequencia);

    // mostrar resultados
    printf("Quantidade = %d\n", quantidadeLetras);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0413()


/**
 * Method_0414 - mostrar letras entre 'l' e 'q'
 */
void method_0414(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    char resultado[STR_SIZE];

    // identificar
    printf("\nMethod_0414 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // separar letras
    separarLetras(sequencia, resultado);

    // mostrar resultados
    printf("Letras encontradas = %s\n", resultado);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0414()


/**
 * Method_0415 - contar letras maiusculas e minusculas entre 'l' e 'q'
 */
void method_0415(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    int quantidadeLetras = 0;

    // identificar
    printf("\nMethod_0415 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // calcular
    quantidadeLetras = 0;

    for(int posicao = 0;
        sequencia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if((sequencia[posicao] >= 'l' &&
            sequencia[posicao] <= 'q') ||
           (sequencia[posicao] >= 'L' &&
            sequencia[posicao] <= 'Q'))
        {
            quantidadeLetras = quantidadeLetras + 1;
        } // end if
    } // end for

    // mostrar resultados
    printf("Quantidade = %d\n", quantidadeLetras);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0415()


/**
 * Method_0416 - mostrar letras maiusculas e minusculas entre 'l' e 'q'
 */
void method_0416(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    char resultado[STR_SIZE];

    // identificar
    printf("\nMethod_0416 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // separar letras
    separarLetras(sequencia, resultado);

    // mostrar resultados
    printf("Letras encontradas = %s\n", resultado);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0416()


/**
 * Method_0417 - contar digitos impares
 */
void method_0417(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    int quantidadeDigitos = 0;

    // identificar
    printf("\nMethod_0417 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // calcular
    quantidadeDigitos = contarDigitosImpares(sequencia);

    // mostrar resultados
    printf("Quantidade de digitos impares = %d\n",
           quantidadeDigitos);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0417()


/**
 * Method_0418 - mostrar simbolos nao alfanumericos
 */
void method_0418(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    char resultado[STR_SIZE];
    int posicao = 0;
    int indiceResultado = 0;

    // identificar
    printf("\nMethod_0418 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // separar simbolos
    resultado[0] = '\0';

    for(posicao = 0;
        sequencia[posicao] != '\0';
        posicao = posicao + 1)
    {
        if(!isalnum((unsigned char)sequencia[posicao]) &&
           sequencia[posicao] != '\n')
        {
            resultado[indiceResultado] = sequencia[posicao];
            indiceResultado = indiceResultado + 1;
        } // end if
    } // end for

    resultado[indiceResultado] = '\0';

    // mostrar resultados
    printf("Simbolos nao alfanumericos = %s\n", resultado);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0418()


/**
 * Method_0419 - mostrar simbolos alfanumericos
 */
void method_0419(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    char resultado[STR_SIZE];

    // identificar
    printf("\nMethod_0419 - v0.0\n");

    // ler sequencia
    printf("Entrar com uma sequencia: ");
    fgets(sequencia, STR_SIZE, stdin);

    // separar simbolos
    separarAlfanumericos(sequencia, resultado);

    // mostrar resultados
    printf("Simbolos alfanumericos = %s\n", resultado);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0419()


/**
 * Method_0420 - contar simbolos alfanumericos em varias sequencias
 */
void method_0420(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    int quantidadeSequencias = 0;
    int posicao = 0;
    int quantidadeAtual = 0;
    int quantidadeTotal = 0;

    // identificar
    printf("\nMethod_0420 - v0.0\n");

    // ler quantidade
    printf("Entrar com a quantidade de sequencias: ");
    scanf("%d", &quantidadeSequencias);
    getchar();

    // ler e contar
    for(posicao = 0;
        posicao < quantidadeSequencias;
        posicao = posicao + 1)
    {
        printf("Entrar com a sequencia %d: ",
               posicao + 1);

        fgets(sequencia, STR_SIZE, stdin);

        quantidadeAtual = contarAlfanumericos(sequencia);

        printf("Quantidade = %d\n", quantidadeAtual);

        quantidadeTotal =
            quantidadeTotal + quantidadeAtual;
    } // end for

    // mostrar resultados
    printf("\nTotal acumulado = %d\n", quantidadeTotal);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_0420()


/**
 * Method_04E1 - contar simbolos alfanumericos e espacos
 */
void method_04E1(void)
{
    // definir dados
    char sequencia[STR_SIZE];
    int quantidadeSequencias = 0;
    int posicao = 0;
    int quantidadeAtual = 0;
    int quantidadeTotal = 0;

    // identificar
    printf("\nMethod_04E1 - v0.0\n");

    // ler quantidade
    printf("Entrar com a quantidade de sequencias: ");
    scanf("%d", &quantidadeSequencias);
    getchar();

    // ler e contar
    for(posicao = 0;
        posicao < quantidadeSequencias;
        posicao = posicao + 1)
    {
        printf("Entrar com a sequencia %d: ",
               posicao + 1);

        fgets(sequencia, STR_SIZE, stdin);

        quantidadeAtual =
            contarAlfanumericosEspacos(sequencia);

        printf("Quantidade = %d\n", quantidadeAtual);

        if(quantidadeAtual > 3)
        {
            quantidadeTotal =
                quantidadeTotal + quantidadeAtual;
        } // end if
    } // end for

    // mostrar resultados
    printf("\nTotal = %d\n", quantidadeTotal);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_04E1()


/**
 * Method_04E2 - verificar qual sequencia possui menos digitos
 */
void method_04E2(void)
{
    // definir dados
    char primeiraSequencia[STR_SIZE];
    char segundaSequencia[STR_SIZE];
    int quantidadePrimeira = 0;
    int quantidadeSegunda = 0;

    // identificar
    printf("\nMethod_04E2 - v0.0\n");

    // ler primeira sequencia
    printf("Entrar com a primeira sequencia: ");
    fgets(primeiraSequencia, STR_SIZE, stdin);

    // ler segunda sequencia
    printf("Entrar com a segunda sequencia: ");
    fgets(segundaSequencia, STR_SIZE, stdin);

    // calcular
    quantidadePrimeira =
        contarDigitos(primeiraSequencia);

    quantidadeSegunda =
        contarDigitos(segundaSequencia);

    // mostrar resultados
    if(quantidadePrimeira < quantidadeSegunda)
    {
        printf("\nA primeira sequencia possui menos digitos.\n");
    }
    else
    {
        if(quantidadeSegunda < quantidadePrimeira)
        {
            printf("\nA segunda sequencia possui menos digitos.\n");
        }
        else
        {
            printf("\nAs duas sequencias possuem a mesma quantidade de digitos.\n");
        } // end if
    } // end if

    // mostrar quantidades
    printf("Primeira = %d\n", quantidadePrimeira);
    printf("Segunda  = %d\n", quantidadeSegunda);

    // encerrar
    printf("\nAperte ENTER para continuar!");
    getchar();
} // end method_04E2()


/**
 * Funcao principal - executar o programa
 */
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
        printf("%s\n", "1 - Exercicio 0411");
        printf("%s\n", "2 - Exercicio 0412");
        printf("%s\n", "3 - Exercicio 0413");
        printf("%s\n", "4 - Exercicio 0414");
        printf("%s\n", "5 - Exercicio 0415");
        printf("%s\n", "6 - Exercicio 0416");
        printf("%s\n", "7 - Exercicio 0417");
        printf("%s\n", "8 - Exercicio 0418");
        printf("%s\n", "9 - Exercicio 0419");
        printf("%s\n", "10 - Exercicio 0420");
        printf("%s\n", "11 - Exercicio 04E1");
        printf("%s\n", "12 - Exercicio 04E2");

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
                printf("\nOpcao 1 - Exercicio 0411\n");
                method_0411();
                break;

            case 2:
                printf("\nOpcao 2 - Exercicio 0412\n");
                method_0412();
                break;

            case 3:
                printf("\nOpcao 3 - Exercicio 0413\n");
                method_0413();
                break;

            case 4:
                printf("\nOpcao 4 - Exercicio 0414\n");
                method_0414();
                break;

            case 5:
                printf("\nOpcao 5 - Exercicio 0415\n");
                method_0415();
                break;

            case 6:
                printf("\nOpcao 6 - Exercicio 0416\n");
                method_0416();
                break;

            case 7:
                printf("\nOpcao 7 - Exercicio 0417\n");
                method_0417();
                break;

            case 8:
                printf("\nOpcao 8 - Exercicio 0418\n");
                method_0418();
                break;

            case 9:
                printf("\nOpcao 9 - Exercicio 0419\n");
                method_0419();
                break;

            case 10:
                printf("\nOpcao 10 - Exercicio 0420\n");
                method_0420();
                break;

            case 11:
                printf("\nOpcao 11 - Exercicio 04E1\n");
                method_04E1();
                break;

            case 12:
                printf("\nOpcao 12 - Exercicio 04E2\n");
                method_04E2();
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

