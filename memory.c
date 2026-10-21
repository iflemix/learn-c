#include <stddef.h>
#include <stdlib.h>

int main() {
    /*
        Работа с динамической памятью для меня очень важная и интересная тема
        Утечка памяти меня пока только в мозге преследует :D
    */

    // Функция malloc позволяет выделить память в куче, принимает аргументом размер байтов для выделения
    // malloc возвращает указатель, также может вернуть NULL если не удалось выделить память в куче
    // Выделим память в куче для типа данных int (4 байта)
    int *intInHeap = malloc(sizeof(int));

    // free позволяет освободить указанную ячейку памяти
    // Освободим выделенную память для intInHeap
    // free(intInHeap);

    // realloc позволяет изменить размер ранее выделенной памяти
    // realloc также возвращает указатель или NULL если не удалось выделить память
    // Расширяем память intInHeap до 8 байт
    int *intInHeapNew = realloc(intInHeap, 8);
    // Проверяем удалось ли выделить память для intInHeapNew
    if (intInHeapNew) {
        free(intInHeapNew); // Если удалось очищаем новый указатель
    } else {
        free(intInHeap); // Если не удалось очищаем старый указатель
    }

    // calloc позволяет выделить память для n элементов размером m байт
    // Главное отличие от malloc - calloc инициализирует и заполняет выделенную память нулями
    // Выделим память для 5 элементов типа char
    int *callocCharExample = calloc(5, sizeof(char));
    free(callocCharExample);

    // Выделяем память для массива чисел для n элементов
    int n = 5;
    int arraySize = sizeof(int) * 5;
    int *intArray = malloc(arraySize);
    free(intArray);

    return 0;
}
