#include <stdio.h>

 
int main() {
     int num1,num2;
     scanf("%d %d", &num1 , &num2);
     if(num1==num2){
        printf("Equal\n");
     }else if(num1>num2){
        printf("First\n");
     }else if(num2>num1){
        printf("Second\n");
     }
    return 0;
}