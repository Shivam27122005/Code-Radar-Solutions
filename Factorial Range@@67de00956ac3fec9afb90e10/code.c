// Your code here...
#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to print factorials in a range
void print_factorials() {
    int start, end;
    printf("Enter the start value: ");
    scanf("%d", &start);
    printf("Enter the end value: ");
    scanf("%d", &end);
    
    if (start < 0 || end < 0) {
        printf("Start and end must be non-negative integers.\n");
        return;
    }
    
    for (int num = start; num <= end; num++) {
        printf("Factorial of %d: %lld\n", num, factorial(num));
    }
}

// Main function
int main() {
    print_factorials();
    return 0;
}
