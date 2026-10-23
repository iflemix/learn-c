#include <corecrt.h>
#include <stdio.h>

int main() {
    /*
        Открытие файла
        Функция fopen является устаревшей и небезопасной, поэтому вместо неё используется fopen_s
        Референс: https://ru.cppreference.com/c/io/fopen
    */
    // Определяем указатель на специальную структуру FILE для работы с потоком ввода/вывода
    FILE *myFile = NULL;
    // Открываем файл в режиме w для записи
    errno_t err = fopen_s(&myFile, "file.txt", "w");
    // Проверяем удалось ли открыть файл
    // Код 0 означает что файл открыт успешно
    if (err != 0) {
        printf("File write open error: %d", err);
        return 1;
    }

    /*
        Для записи в файл используется функция putc
        Референс: https://ru.cppreference.com/c/io/fputc
    */
    // Строка для записи
    char text[] = "random text";
    // Длина строки
    int textLength = sizeof(text) / sizeof(text[0]);
    // Записываем строку в файл
    for (int i = 0; i < textLength; i++) {
        putc(text[i], myFile);
    }

    /*
        Для закрытия файлового потока используется функция fclose
        Референс: https://ru.cppreference.com/c/io/fclose
    */
    // Закрываем файл после записи, чтобы ОС освободила его для дальнейшей работы с ним
    fclose(myFile);

    /*
        Для чтения файла используется функция getc
        EOF (end of file) обозначение конца файла, getc вернёт его когда дойдёт до конца файла
    */
    // Открываем файл в режиме r для чтения
    errno_t errRead = fopen_s(&myFile, "file.txt", "r");
    if (errRead != 0) {
        printf("File read open error: %d", errRead);
        return 1;
    }

    char ch;
    int count = 0;
    char readedText[textLength];

    // Считываем символы из файла и заполняем их в массив readedText
    while ((ch = getc(myFile)) != EOF) {
        readedText[count] = ch;
        count++;
    }

    // Выводим считанный из файла текст
    printf("Readed text: %s", readedText);

    // Закрываем поток файла после чтения
    fclose(myFile);

    return 0;
}
