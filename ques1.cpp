#include <stdio.h>
#include <string.h>
int main() {
    char str[20] = "hello";
    char *str1 = "world";
    strcat(str, str1);
    printf("%s %d", str, str[11]);
}
