#include <stdio.h>

 
int main() {
    int Year;
    scanf("%d", &Year);

    if((Year % 4 ==0 && Year % 100 != 0) || (Year % 400 == 0)){
        printf("%d is a Leap Year.\n", Year);
    }else{
        printf("%d is Not a Leap Year.\n",Year);
    }
    return 0;
}