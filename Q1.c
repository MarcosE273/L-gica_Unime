#include <stdio.h>
#include <math.h>

int main()
{
    int X1,Y1,X2,Y2;
    float D;
    
    printf("Posicao do primeiro ponto: \n");
    scanf("%d %d",&X1,&Y1);
    printf("Posicao do segundo ponto: \n");
    scanf("%d %d",&X2,&Y2);
    D=sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1)));
    printf("Distancia entre os pontos: %f\n",D);

    return 0;
}