#include<stdio.h>

int main()
{
    int cp;

    printf("\nDigite o CPF que deseja calcular o número verificador: ");
    scanf ("%d", &cp);

    //SEPARAR CADA NUMERO DO CPF

    int dig1 = (cp / 100000000) %10;
    int dig2 = (cp / 10000000) % 10;
    int dig3 = (cp / 1000000) % 10;
    int dig4 = (cp / 100000) % 10;
    int dig5 = (cp / 10000) % 10;
    int dig6 = (cp / 1000) % 10;
    int dig7 = (cp / 100) % 10;
    int dig8 = (cp / 10) % 10;
    int dig9 = (cp % 10);

    // calcular primeiro digito verificador

    int ver1 = ((dig1*10)+(dig2*9)+(dig3*8)+(dig4*7)+(dig5*6)+(dig6*5)+(dig7*4)+(dig8*3)+(dig9*2));
    ver1 = ver1 % 11;
    if (ver1 == 1)
        ver1 = 0;
    else
        ver1 = 11 - ver1;
    

    // calcular segundo digito verificador

    int ver2 = ((dig1*11)+(dig2*10)+(dig3*9)+(dig4*8)+(dig5*7)+(dig6*6)+(dig7*5)+(dig8*4)+(dig9*3)+(ver1*2));
        ver2 = ver2 % 11;
    if (ver2 == 1)
        ver2 = 0;
    else
        ver2 = 11 - ver2;
    

    printf("O CPF completo é %d-%d%d", cp, ver1, ver2);
    return 0;
}