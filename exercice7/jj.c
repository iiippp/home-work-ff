#include<stdio.h>
//- Un programme récursif qui permet d’afficher les éléments d’un tableau de taille 5.
void affichage(int t[],int n){
if(n!=0){
  affichage(t,n-1);
  printf("%d",n);
}
}
int main()
{
    int  n=5;
    int t[5]={1,2,3,4,5};
    printf("your numbers are ");
    affichage(t,n);
    return 0;
}










