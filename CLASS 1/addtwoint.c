#include <stdio.h>
int main() {
    int num1, num2, sum;
    
    printf("Enter the fisrt number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    
    printf("The sum of num1 and num2: %d\n",sum);
    return 0;
}