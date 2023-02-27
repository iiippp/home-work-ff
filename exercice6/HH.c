#include<stdio.h>
//- Un programme récursif qui convertit un nombre décimal en binaire.
void bin(n){
if(n!=0){
  bin(n/2);
  printf("%d",n%2);
}
}
int main()
{
    int n;
    printf("give me your number");
    scanf("%d",&n);
    printf("your number is ");
    bin(n);
    return 0;
}