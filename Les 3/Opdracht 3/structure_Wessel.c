#include <stdio.h>

int main()
{
    int num;
    struct algemeen
    {
        char naam[20];
        int leeftijd;
        struct opleiding
        {
            char naam[50];
            int instroomjaar;
        } opleiding;
        

    };

    struct algemeen lijst[2];

    for (num = 0; num < 2; num++)
    {
        printf("Wat is uw naam: ");
        scanf("%s", lijst[num].naam);

        printf("Wat is uw leeftijd: ");
        scanf("%d", &lijst[num].leeftijd);

        printf("Wat is de naam van uw opleiding: ");
        scanf("%s", lijst[num].opleiding.naam);

        printf("Wat is het instroomjaar dat u bent begonnen met de opleiding?: ");
        scanf("%d", &lijst[num].opleiding.instroomjaar);

        printf("\n");
    }

    for (num = 0; num < 2; num++)
    {
        printf("%s\n%d\n%s\n%d\n\n", lijst[num].naam, lijst[num].leeftijd, lijst[num].opleiding.naam, lijst[num].opleiding.instroomjaar);
    }

    return 0;
}
