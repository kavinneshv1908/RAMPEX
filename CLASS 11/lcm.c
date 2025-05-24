#include <stdio.h>

int findLCM(int a, int b, int multiple) {
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return findLCM(a, b, multiple + 1);
}

int main() {
    int num1, num2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;

    lcm = findLCM(num1, num2, max);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
