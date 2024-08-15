#include <stdio.h>
#include <string.h>

int main() {
    char str1[6] = "hello";
    char str2[6] = "hello";

    if (strcmp(str1, str2) == 0) {
        printf("They are equal\n");
    } else {
        printf("They are not equal\n");
    }

    return 0;
}
