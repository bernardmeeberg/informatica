/**
 * priemgetal.c
 * 
 * Bernard van de Meeberg
 * bernardmeeberg@gmail.com
 * 
 * kijkt of een nummer een priemgetal is
 * 
 * algorithme:
 * 1: deel het nummer door 2
 * 2: ga langs elk nummer (vanaf 2) onder de uitkomst van stap 1 en kijk:
 *      of het ingevoerde nummer gedeeld door het huidige nummer niks overhoudt
 * 3: verzin een manier om de uitkomst weer te geven ;)
 * 
 * huidig maximum nummer: 9223372036854775807
 */
#include <stdio.h>

int main(void)
{
    // ingevoerd nummer
    // een long integer wordt gebruikt om lange getallen mogelijk te maken
    long int n = 0;
    // for-loop nummer
    int i = 0;
    // houdt de uitkomst bij
    int uitkomst = 0;

    // kijkt of n positief is
    do
    {
        printf("Geef een positief getal:\n");
        scanf("%li", &n);
    }
    while (n < 1);
    
    // voor elk nummer tot 1/2 n
    // i begint met 2
    // i stopt bij 1/2 n
    for(i = 2; i <= n/2; ++i)
    {
        // is het 0 wanneer na n/i niks overblijft?
        if(n % i == 0)
        {
            uitkomst = 1;
            // het programma moet niet eeuwig door blijven lopen ;)
            break;
        }
    }
    if (uitkomst == 0)
        printf("%li is een priemgetal.\n",n);
    else
        printf("%li is geen priemgetal.\n",n);
    return 0;
}
