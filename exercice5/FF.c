#include<stdio.h>
//Un programme qui contient les deux fonctions récursives suivantes : 
//La fonction montee qui affiche les entiers de 1 à n, dans l’ordre croissant.
//La fonction descente qui affiche les entiers de 1 à n, dans l’ordre décroissant
int montee(int n){
if (n!=0)
{
    montee(n-1);
    printf("%d  ",n);
}
}
int descente(int n){
if (n!=0)
{
    printf("%d  ",n);
    descente(n-1);
}
}
int main()
{
    int n=5;
    //printf("give me your number");
    //scanf("%d",&n);
    montee(n);
    printf("\n");
    descente(n);
    return 0;
}