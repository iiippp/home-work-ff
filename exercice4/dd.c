#include<stdio.h>
// Un programme récursif qui calcule le pgcd de deux nombres entiers positifs
int pgcd(int a,int b){int r;
r=a%b;
if (r==0)
{
    return(b);
}else{
    a=b;
    b=r;
    return pgcd(a,b);
}
}

int main()
{
    int a;
    int b;
    printf("a must be bigger than b\n");
    printf("give me the value of  a and b :");
    scanf("%d %d",&a,&b);
    printf("pgcd of %d and %d is:%d",a,b,pgcd(a,b));
    return 0;
}
