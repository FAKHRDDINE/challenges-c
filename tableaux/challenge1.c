#include <stdio.h>

int main()
{
    
    
int ele[10] , i;


for(i = 0 ; i < 10 ; i++){
    
    printf("please enter number N%d : ",i+1);
    scanf("%d",& ele[i]);
}

for(i = 0 ; i < 10 ; i++){
    printf("ele[%d] = %d \n", i,ele[i]);
}






    return 0;
}