/*
    Napisati program koji učitava prirodan broj n, a zatim ispisuje najmanji prost broj veći od učitanog broja.

*/

#include "../stdneb/stdneb.h"
#include <stdio.h>

int main (int argc, char *argv[]){
    int number;
    printf ("Unesite prirodan broj N: ");
    scanf ("%d", &number);

    printf ("Najmanji prost broj veći od %d je %d", number, next_smallest_prime(number));
}