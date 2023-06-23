#include <stdio.h>
#include <math.h>

int main() {
    //n1 refer to first digit in the number
    //n2 refer to second
    //N refer to no of digits in the number
    int num,n1,n2,N,i;

   
    scanf("%d", &num);

    // Calculate number of digits
    N= (int)(log10(num)) + 1;

    // Extract first and last digits
    n2 = num % 10;
    i = num / pow(10, N - 1);
    n1 = i % 10;

    // Swap first and last digits
    num -= n2;
    num -= n1 * pow(10, N - 1);
    num += n2 * pow(10, N - 1);
    num += n1;

    printf("%d", num);

    return 0;
}