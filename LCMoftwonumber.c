#include<stdio.h>
int main()
{
    int a,L;
    printf("Enter the value of a = ");
    scanf("%d",&a);

    int b;
    printf("Enter the value of b = ");
    scanf("%d",&b);

    for(L=1; L<=a*b; L++){
        if(L%a==0 && L%b==0)
        break;
    }printf("LCM of %d and %d = %d",a,b,L);
return 0;
}