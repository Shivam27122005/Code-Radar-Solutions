// Your code here...
#include<stdio.h>
int main(){
    int num1,num2,ORoperation;
    scanf("%d%d",&num1,&num2);
    ORoperation = (num1 | num2);
    printf("bitwise OR operation\n",ORoperation);
}