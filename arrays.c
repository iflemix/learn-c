#include <stddef.h>
#include <stdio.h>

int main(void) {
    // Ограниченный массив (5 элементов)
    int numbers[5] = {1, 2, 3, 4, 5};

    // Неограниченный массив (Размер вычислится автоматически в зависимости от количества элементов)
    int anyNumbers[] = {1, 2, 3, 4, 5, 1, 9, 9};

    // Константный массив (нельзя изменять дану!вотблин!)
    const int constNumbers[3] = {6, 6, 6};

    // Многомерный массив
    int deepNumbers[3][2] = {{0, 1}, {1, 2}, {2, 3}};

    // Строк в си  нет поэтому для строк используют массив char
    char text[] = "hello world";

    // Размер массива
    size_t numbersSize = sizeof(numbers);

    // Количество элементов в массиве
    size_t numbersCount = sizeof(numbers) / sizeof(int);

    // Перебираем массивчик цикликом, первый цикл на си это так волнительно <3
    for (int i = 0; i < numbersCount; i++) {
        printf("Number: %d\n", numbers[i]);
    }

    return 0;
}
