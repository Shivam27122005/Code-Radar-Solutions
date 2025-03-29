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

// Function to print factorials in the given range
void factorialRange(int start, int end) {
    // Swap values if start > end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    if (start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }

    for (int num = start + 1; num <= end; num++) {
        printf("%lld\n", factorial(num));
    }
}