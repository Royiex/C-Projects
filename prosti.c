#include <stdio.h>

void main() {
    int broj;
    int rem;
    int i;
    int num = 0;
    printf("unesi broj: ");
    scanf("%d", &broj);

    for (i = 2; i <= broj; i++)
    {
        rem = broj % i;
        if (rem == 0) {
            num = num + i;
        }
    }
    if (num == broj)
        printf("broj je prost");
    else
        printf("broj nije prost");
}