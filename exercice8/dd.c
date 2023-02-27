#include<stdio.h>
// Un programme récursif qui permet d’afficher la somme des éléments d’un tableau de taille 5.
int somme (int t[],int n){
if(n==0){
  return (0);
}else{
  return somme(t,n-1)+t[n-1];
}
}
int main()
{
    int  n=5;
    int t[5]={1,2,3,4,8};
    printf("la somme est :%d",somme(t,n));
    return 0;
}



