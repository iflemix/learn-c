#include <stdio.h>
#include <stdbool.h>

// void является 'пустым' типом данных без значения
int main(void) {
    // Символьные
    char letter = 'a';
    signed char signedChar = -127;
    unsigned char unsignedChar = 255;

    // Целочисленные
    int number = 53545;
    unsigned int unsignedNumber = 5;

    short shortNumber = 3;
    unsigned short unsignedShortNumber = 215;

    long longNumber = 3453;
    unsigned long unsignedLongNumber = 13;

    long long longLongNumber = 343443;
    unsigned long long unsignedLongLongNumber = 232424;

    /* unsigned - всегда положительное число */

    // Числа с плавающей точкой
    float floatNumber = 2.5;
    double doubleNumber = 2.34;
    long double longDoubleNumber = 2.456;

    // <stdbool.h> позволяет нам использовать логический тип bool, о спасибо тебе великий C99
    bool isLearned = true;

    // Константа (неизменяемая переменная)
    const float PI = 3.14;

    // Потыкаем выводик
    printf("Number: %d\n", number);
    printf("Char ASCII code: %d\nChar value: %c\n", letter, letter);
    printf("Learned: %d", isLearned);
    return 0;
}
