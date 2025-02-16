// Your code here...
#include<stdio.h>

int main(){
    int age, status;
    scanf("%d%d", &age, &status);
    if( age>=18 && status==1){
        printf("Eligible\n");
    }else if(( age>=18 && status=0) ||( age < 18 && status=1) ||( age < 18 && status=0) ){
        printf("Not Eligible\n");
    }
    return 0;
}