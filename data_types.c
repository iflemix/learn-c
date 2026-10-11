#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

// Алиасы для типов, дальше объясняется (typedef существующий_тип новое_название)
typedef unsigned char uint8_t;
typedef signed char int8_t;

// void является 'пустым' типом данных без ничего
int main(void) {
    char letter = 'a';
    signed char signedChar = -127;
    unsigned char unsignedChar = 255;

    int8_t int8 = -127;
    uint8_t uint8 = 255;

    /* Вот тут произошёл затуп
        Если тип char я понял, то при виде signed char / unsigned char и что их используют для чисел немножно так приаху.. запутался в общем.

        Спасибо добрым людям и статьям (https://habr.com/ru/posts/928192/)
        Если верить автору тип char транслируется в unsigned char или signed char в зависимости от значения внутри.
        (а говорят питон слишком магический язык!!! блzkf!!)

        Именно для этого и существует прекрасная конструкция тайп алиасов typedef, которые мы определили в самом начале.

        unsigned char это uint8
        signed char это int8

        Вообще данные алиасы можно ручками не создавать они уже лежат в заголовочном файле stdint.h, но для наглядности оставил.
    */

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
