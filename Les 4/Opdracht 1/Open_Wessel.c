#include <stdio.h>
char tk(FILE *bestand);


int main()
{
    FILE *bestand;
    bestand = fopen("text.txt","r");
    if (bestand == NULL)
    {
        printf("Helaas kon het bestand niet worden geopend!");
        return 0;
    }
    tk(bestand);

    fclose(bestand);
    return 0;
}

char tk(FILE *bestand)
{
    char check;
    int teller = 0;
    FILE *nieuw;
    nieuw = fopen("nieuwe.txt", "w");

    while ((check = fgetc(bestand)) != EOF)
    {
        teller++;

        check = check + 1;
        fputc(check, nieuw);

    }
    fclose(nieuw);
    printf("In totaal heeft u %d karakters ingevoerd bij het maken van de zin." , teller);

}