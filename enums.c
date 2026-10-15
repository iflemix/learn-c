#include <stdio.h>

enum Colors {
    GREEN,
    BLUE,
    RED
};

int main() {
    enum Colors selectedColor = RED;
    printf("Selected color: %d", selectedColor);
}
