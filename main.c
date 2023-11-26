// main.c
#include "main.h"

int main(void) {
    int len;

    len = _printf("Hello, %s! The answer is %d\n", "world", 42);
    printf("Number of characters printed: %d\n", len);

    return 0;
}
