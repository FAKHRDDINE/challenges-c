#include <stdio.h>
#include <string.h>

void signe(int num1 , int num2){
    if(num1*num2 > 0){
         printf("the same signe \n");
    }else{
        printf("they are not the  same signe \n");
    }
}
int minmum(int num1 , int num2){
    int min;
    if(num1<num2){
        min =  num1;
    }else{
        min = num2;
    }
    return min;
}
int maxmum(int num1 , int num2){
  int max;
    if(num1>num2){
        max =  num1;
    }else{
        max = num2;
    }
    return max;
}


int main()
{
    int min , max ;
    int num1 , num2 ; 
    
printf("enter number 1 : ");
scanf("%d",& num1);
printf("enter number 2 : ");
scanf("%d",& num2);
signe(num1,num2);
min = minmum(num1,num2);
max = maxmum(num1,num2);
printf("minmum number is %d : \n",min);
printf("maxmum number is %d : \n",max);


    
    




    


    return 0;
}