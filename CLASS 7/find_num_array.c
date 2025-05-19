#include <stdio.h>
int main() {
    int arr[] = {8, 10, 11, 12, 50, 99};
    int key = 50;
    int found = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Yes, 50 is found.\n");
    } else {
        printf("50 not found.\n");
    }

    return 0;
}
