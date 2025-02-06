#include <stdio.h>

 
int main() {
    int Age;
    scanf("%d",&Age);
    if(Age>=60){
        printf("Eligible\n");
    }else{
        printf("Not Eligible\n");
    }
 
    return 0;
}