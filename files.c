#include <corecrt.h>
#include <stdio.h>

int main() {
    /*
        Функция fopen является устаревшей и небезопасной, поэтому вместо неё используется fopen_s
        Референс: https://ru.cppreference.com/c/io/fopen
    */

    // Определяем указатель на специальную структуру FILE для работы с потоком ввода/вывода
    FILE *myFile = NULL;

    // Открываем файл
    errno_t err = fopen_s(&myFile, "file.txt", "w");

    // Проверяем удалось ли открыть файл
    // Код 0 означает что файл открыт успешно
    if (err != 0) {
        printf("При открытии файла произошла ошибка с кодом %d", err);
        return 1;
    }

    // Закрываем файл
    fclose(myFile);

    return 0;
}
