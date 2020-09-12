#include <stdio.h>
#include <math.h>

int main (void){
    float a,b,c;

    printf("Digite a ");
    scanf("%f",&a);
    printf("Digite b ");
    scanf("%f",&b);
    int x;

    for (x = a;x<=b;x++){
        printf("%d",x);
    }
    int y=a;
    while(y<=b){
        printf("%d",y);
        y++;
    }
    y=a;
    do{
        printf("%d",y);
        y++;
    }while(y<=b);
    return 0;

}