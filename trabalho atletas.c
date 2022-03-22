#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int a, l, c, r, s;
    s=0;

    printf("Digite o numero de atletas: ");
    scanf("%d", &a);

    r=a/3;

    for (l=1; l<=a; l++)
    {
        for (c=r; c>=l; c--)
            {
                printf("-");
            }
        for (c=1; c<=l; c++, a--)
            {
                printf("|-");
            }

        for (c=r; c>=l; c--)
            {
                printf("-");
            }

        s=s++;

        printf("\n");
    }

    printf("Filas completas: %d\n", l-1);
    printf("Atletas que NAO formam uma fila completa: %d", a-s);

    getch();
}
