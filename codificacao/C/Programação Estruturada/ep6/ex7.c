#include <stdio.h>

void calcula_esfera(float R, float *area, float *volume);

int main(void){
    
    float R=0.0, area=0.0, volume=0.0;
    
    scanf("%f", &R);
    
    calcula_esfera(R, &area, &volume);
    
    printf("%.2f\n%.2f\n", area, volume);
    
    return 0;
}

void calcula_esfera(float R, float *area, float *volume){
    float pi = 3.14;
    
    *area = (4*pi*R*R);
    *volume = (4*pi*R*R*R) / 3;
}