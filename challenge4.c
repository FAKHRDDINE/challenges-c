#include <stdio.h>

int main()
{
    
    
int num , cond ;

printf("enter number : ");
scanf("%d",& num);

cond = num % 2;

if(cond == 0){
    printf("pair");
}else{
    printf("impair");
}



    return 0;
}