#include <stdio.h>

int main()
{
    
    
int a , b;


printf("enter a : ");
scanf("%d",& a);
printf("enter b : ");
scanf("%d",& b);


if(a == b){
    const int total =  (a  + b) * 3;
    printf("%d",total);
}else{
    printf("%d",a+b);
}

    return 0;
}