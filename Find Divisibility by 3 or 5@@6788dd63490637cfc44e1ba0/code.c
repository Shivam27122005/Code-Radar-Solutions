#include <stdio.h>

 
int main() {
    int num;
    scanf("%d", &num);
    if(num%3==0 && num%5==0){
        printf("Divisible\n");
    }else{
        printf("Not Divisible\n");
    }

    return 0;
}