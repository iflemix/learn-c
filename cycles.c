#include <stdio.h>

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("Step: %d\n", i);
    }

    int a = 7;
    while (a != 0) {
        a--;
        printf("A: %d\n", a);
    }

    // do..while выполняется один раз гарантированно, после проверяет условие, пока условие истинно выполняется
    int b = 4;
    do
    {
        printf("meow :3\n");
    }
    while (b > 4);

    return 0;
}
