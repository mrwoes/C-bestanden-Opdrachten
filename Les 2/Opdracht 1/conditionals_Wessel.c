#include <stdio.h>
#include "hello_Wessel.h"

int main() 
{
    int r;
    printf("U kunt kiezen uit de volgende getalen: 1, 2 of 3: ");
    scanf("%d",&r);
    if (r < 0)
    {
        return(0);
    }

    if (r == 2)
    {
        wessel();
    }
    printf("Voor het volgende getal was er gekozen: %d", r);



    return(0);
}