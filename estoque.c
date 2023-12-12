#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#define f 3
// Franklin Douglas
// Adilio Rocha
//--------------------------------
struct estoque
{
    char name[999];
    int select;
    int stockscale;
};

int stock(struct estoque b[])
{
    int enterORquit[2] = {0, 0};
    if (b[0].select == 1)
    {
        printf("Quantos produtos quer inserir?: ");
        scanf("%i", &enterORquit[1]);
        enterORquit[0] += enterORquit[1];
    }
    if (b[0].select == 2)
    {
        printf("Quantos produtos quer retirar?: ");
        scanf("%i", &enterORquit[1]);
        enterORquit[0] -= enterORquit[1];
    }
    return enterORquit[0];
}
int main()
{
    setlocale(LC_ALL, "portuguese");
//variable declaration------------
    struct estoque components[f];
    int option[2];
    int i;
    int stocksize[3] = {0, 0, 0};
//--------------------------------
    for (i = 0; i < f; i++)
    {
        components[i].stockscale = 0;
    }
    strcpy(components[0].name, "rx 5600 xt");
    strcpy(components[1].name, "rx 6600");
    strcpy(components[2].name, "rx 580 8GB");

    do
    {
        system("cls || clear");
        do
        {
            printf("1- VIZUALIZAR ESTOQUE");
            printf("\n2- SELECIONAR ESTOQUE");
            printf("\n\nDigite: ");
            scanf("%i", &option[0]);
            if (option[0] != 1 && option[0] != 2)
            {
                system("cls || clear");
                printf("ESCOLHA UMA DAS ABAIXO\n\n");
            }
        } while (option[0] != 1 && option[0] != 2);
        if (option[0] == 2)
        {
            switch (option[0])
            {
            case 1:
                
                break;
            case 2:
                system("cls || clear");
                printf("\n1- %s", components[0].name);
                printf("\n2- %s", components[1].name);
                printf("\n3- %s", components[2].name);
                printf("\n\nDigite: ");
                scanf("%i", &option[1]);
                break;
            }
            switch (option[1])
            {
            case 1:

                system("cls || clear");
                printf("\n1- ESTOCAR");
                printf("\n2- RETIRAR");
                printf("\n\nDigite: ");
                scanf("%i", &components[0].select);
                if (components[0].select == 1)
                {
                    stocksize[0] += stock(components);
                }
                if (components[0].select == 2)
                {
                    stocksize[0] -= stock(components);
                }
                break;
            case 2:

                system("cls || clear");
                printf("\n1- ESTOCAR");
                printf("\n2- RETIRAR");
                printf("\n\nDigite: ");
                scanf("%i", &components[0].select);
                if (components[0].select == 1)
                {
                    stocksize[1] += stock(components);
                }
                if (components[0].select == 2)
                {
                    stocksize[1] -= stock(components);
                }
                break;
            case 3:

                system("cls || clear");
                printf("\n1- ESTOCAR");
                printf("\n2- RETIRAR");
                printf("\n\nDigite: ");
                scanf("%i", &components[0].select);
                if (components[0].select == 1)
                {
                    stocksize[2] += stock(components);
                }
                if (components[0].select == 2)
                {
                    stocksize[2] -= stock(components);
                }
                break;
            }
        }

    } while (option[0] != 1);
    system("clear || cls");
    printf("\no estoque de %s é: %i", components[0].name, stocksize[0]);
    printf("\no estoque de %s é: %i", components[1].name, stocksize[1]);
    printf("\no estoque de %s é: %i", components[2].name, stocksize[2]);
    return 0;
}
