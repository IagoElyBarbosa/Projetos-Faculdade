#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x=3;
    int *px;
    
    float y = 3.4;
    float *py;
    
    char z = 'A';
    char *pz;

    pz = &z;
    py = &y;
    px = &x;
    
    printf("Antes:\n");
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);

    scanf("%i", &(*px));
    scanf("%f", &(*py));
    scanf(" %c", pz);
    
    printf("Depois:\n");
    printf("x = %i\n", x);
    printf("y = %f\n", y);
    printf("z = %c\n", z);
    
    
    return 0;
}
