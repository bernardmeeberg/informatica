#include <stdio.h>

int main(void)
{
    long int i = 0;
    long int j = 0;
    long int max = 1000000000000000;
    
    for (i = 0; i <= max; i++)
    {
        for(j = 2; j < i/2; ++i)
        {
            // is het 0 wanneer na n/i niks overblijft?
            if(i % j != 0)
            {
                if (i > 10000000)
                {
                    printf("%li\n", i);
                }
                // het programma moet niet eeuwig door blijven lopen ;)
                break;
            }
        }
    }
}
