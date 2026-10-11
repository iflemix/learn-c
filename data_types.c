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

    // Вы спросите где строки? А в сишечке их нету, смотрите в файлик с массивами там объясняется что строчки это массив из char :3

    // Потыкаем выводик
    printf("Number: %d\n", number);
    printf("Char ASCII code: %d\nChar value: %c\n", letter, letter);
    printf("Learned: %d\n", isLearned);
    printf("PI: %f\n", PI);

    // Преобразование одного типа данных в другой
    int a = 5;
    double b = 10.5;
    double c = a + b; // Число a будет автоматически приведено к double
    printf("Result: %f\n", c);

    // Явное преобразование
    int x = 4;
    int y = 2;

    double coord = y / x; // Вернёт 0 т.к x и y являются int
    double coord_good = (double)y / (double)x; // Явно приводим x и y к double
    printf("Coord: %f\nCoord_good: %f\n", coord, coord_good);

    // sizeof() возвращает размер который занимает тип данных в байтах
    int intSize = sizeof(int);
    printf("sizeof(int): %d bytes", intSize);

    return 0;
}
