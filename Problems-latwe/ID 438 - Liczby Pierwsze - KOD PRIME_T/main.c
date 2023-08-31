#include <stdio.h>
#include <stdlib.h>

void CzyPierwsza( int a)
{
    int i;
    if (a<2)
    {
        printf("NIE\n");
    }
    else
    {
        for (i=2; i*i<=a; i++)
        {
            if (a%i==0)
            {
                printf("NIE\n");
                return;
            }
        }
        printf("TAK\n");
    }
}


int main()
{
    int i, iloscLiczb, podanaLiczba;
    scanf("%i", &iloscLiczb);

    for (i=0; i<iloscLiczb; i++)
    {
        scanf("%i", &podanaLiczba);
        CzyPierwsza(podanaLiczba);
    }
    return 0;
}
