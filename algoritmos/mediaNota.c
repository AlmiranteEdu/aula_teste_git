#include <stdio.h>

float media(int n1, int n2, int n3)
{
    float nota;
    nota = (n1 + n2 + n3) / 3;
    return nota;
}

int main()
{
    int nota1, nota2, nota3;

    printf("\n ===== CALCULADORA DE NOTA ===== \n");

    printf("\n Digite a sua primeira nota: ");
    scanf("%i", &nota1);
    printf("\n Digite a sua segunda nota: ");
    scanf("%i", &nota2);
    printf("\n Digite a sua terceira nota: ");
    scanf("%i", &nota3);

    printf("\n\n A média final das suas notas é: %.1f ", media(nota1, nota2, nota3));

    if(media(nota1, nota2, nota3) >= 7){
        printf("\n Aprovado! ");
    }else{
        printf("\n Reprovado! ");
    }

    return 0;
}