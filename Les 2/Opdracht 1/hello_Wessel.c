#include <stdio.h>
void print_function( char letter );
int ctr;
int bami;
int wessel( void )
{
char star = '*';
char dash = '-';
for (bami = 0 ; bami  < 10; bami++ )
{
print_function( star );
print_function( dash );
printf("\n");
}
return 0;
}
void print_function ( char letter )
{
for (ctr = 0; ctr < 9; ctr++) 
{
printf("%c", letter);
}
}

