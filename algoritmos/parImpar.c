#include <stdio.h>

int parImpar(int num)
{
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int result;

    result = parImpar(5);

    if(result == 1){
        printf("Número par");
    }else{
        printf("Número ímpar");
    }

    return 0;
}