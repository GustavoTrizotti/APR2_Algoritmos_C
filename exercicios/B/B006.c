#include <stdio.h>
#include <math.h>

/* 
Faça um programa que leia os coeficientes a, b e c de uma equação do segundo grau ax² + bx + c. Após isso, calcule e imprima a soma das raízes da equação. Se as raízes não forem reais, imprima nan (use print(math.nan))
*/

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float delta;
    delta = pow(b, 2) - (4 * a * c);
    if (delta < 0) {
        printf("nan");
    } else if (delta == 0) {
        printf("%.2f", (float) -b / (2 * a));
    } else {
        printf("%.2f", ((-b + sqrt(delta)) / (2 * a)) + ((-b - sqrt(delta)) / (2 * a)));
    }
    return 0;
}