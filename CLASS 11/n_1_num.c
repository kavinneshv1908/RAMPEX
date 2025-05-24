#include <stdio.h>

int descending(int n) {
    if (n == 1)
        return 0;
    printf("%d\n", n);
    return descending(n - 1);
}

int main() {
    printf("%d\n",descending(12));
return 0;
}
