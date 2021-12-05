#include <stdio.h>
#include <string.h>


int main()
{
    char zin[69];
    printf("Hier kunt u een zin typen: ");
    gets(zin);
    printf("%s\n", zin);
    printf("In totaal heeft u %d karakters ingevoerd bij het maken van de zin.", strlen(zin));
    return 0;
}