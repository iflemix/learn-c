#include <stdio.h>

int main(void) {
    /* Ну тут всё по базе в общем-то ничего нового */
    // ! - отрицание
    // && конъюкция
    // || дизъюкция
    // Возвращает 1 истина, 0 ложно

    int number = 8;

    // Условная операция
    int numberExpression = number == 8; // 1

    // Условное выражение if else (как и везде :d)
    if (numberExpression) {
        printf("number = 8\n");
    } else if (number == 5) {
        printf("number = 5\n");
    } else {
        printf("number = ?\n");
    }

    // switch case
    switch (numberExpression) {
        case 1:
            printf("number = 8\n");
            break;
        case 0:
            printf("number != 8\n");
            break;
        default:
            printf("wtf number?\n");
            break;
    }

    /*
    Тернарные операторы
    Люблю и ненавижу, у программиста была проблема он решил её тернарным оператором, теперь у него (две проблемы? вот и не угадали) от ? него : ушла жена)
    условие ? истинный вариант : ложный вариант (вау! вот это да! ого!)
    */
    int numberTernar = number > 8 ? number + 2 : number + 3;
    printf("Ternar result: %d", numberTernar);

    return 0;
}
