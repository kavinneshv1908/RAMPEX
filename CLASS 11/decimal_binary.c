#include <stdio.h>

int bin(int n){
    if(n==0) return;
    bin(n/2);
    printf("%d",n%2);
}

int main() {

    printf("Enter a binary number: ");
    scanf("%d", &n);

    printf("%d in binary = %d in decimal", n, bin(n));

    return 0;
}
