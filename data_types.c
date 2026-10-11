#include <stdio.h>
#include <stdbool.h>

// void является 'пустым' типом данных без ничего
int main(void) {
    char letter = 'a';
    signed char signedChar = -127;
    unsigned char unsignedChar = 255;

    int number = 53545;
    unsigned int unsignedNumber = 5;

    short shortNumber = 3;
    unsigned short unsignedShortNumber = 215;

    long longNumber = 3453;
    unsigned long unsignedLongNumber = 13;

    long long longLongNumber = 343443;
    unsigned long long unsignedLongLongNumber = 232424;

    float floatNumber = 2.5;
    double doubleNumber = 2.34;
    long double longDoubleNumber = 2.456;

    /* unsigned - всегда положительное число */

    // <stdbool.h> позволяет нам использовать bool, о спасибо тебе великий C99
    bool isLearned = true;

    // Потыкаем выводик
    printf("Number: %d\n", number);
    printf("Char ASCII code: %d\nChar value: %c", letter, letter);
    return 0;
}
