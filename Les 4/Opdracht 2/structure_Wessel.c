#include <stdio.h>
#include <stdlib.h>


int main()
{

    struct algemeen
    {
        char naam[20];
        int leeftijd;
    };

    struct algemeen *pointer = (struct algemeen*)malloc(sizeof(struct algemeen));
    int check = 1;
    int counter = 1;
    struct algemeen *newpointer;

    while (1)
    {
        newpointer = pointer;
        newpointer += (counter-1);

        printf("Geef een naam: ");
        scanf("%s", newpointer->naam);

        
        printf("Geef een leeftijd: ");
        scanf("%d", &newpointer->leeftijd);


        printf("Typ 1 als je een nieuw element wilt toevoegen: ");
        scanf("%d", &check);
        if (check != 1)
        {
            break;
        }
        printf("\n");

        struct algemeen *pp = pointer;
        for (int i = 0; i < counter; i++)
        {
            printf("%s\n", pp->naam);
            printf("%d\n", pp->leeftijd);
            pp++;
        }

        counter++;

        pointer = (struct algemeen*)realloc(pointer, counter * sizeof(struct algemeen));
        if (pointer == NULL)
        {
            perror("Error");
            exit(-1);
        }
    }





    free(pointer);
    return 0;

}