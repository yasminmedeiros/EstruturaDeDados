#include <stdio.h>
#include <math.h>
//gcc questao5.c -lm
float delta(float a,float b,float c){
    return ((b*b) - (4*a*c));
}
float raizPositiva(double delta,float b, float a){
    double raiz = sqrt(delta);
    return (-b + raiz/(2*a));
}
float raizNegativa (double delta,float b,float a){ 
    double raiz = sqrt(delta);
    return (-b - raiz/(2*a));
}

int main (void){
    float a,b,c;
    printf("Digite a ");
    scanf("%f",&a);
    printf("Digite b ");
    scanf("%f",&b);
    printf("Digite c ");
    scanf("%f",&c);

    double del = delta(a,b,c);
    float x1 = raizPositiva(del,b,a);
    float x2 = raizNegativa(del,b,a);
    printf("%f %f",x1,x2);
    return 0;
    


}