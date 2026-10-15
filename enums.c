#include <stdio.h>

enum colors {
    GREEN,
    BLUE,
    RED
};

int main() {
    enum colors selectedColor = RED;
    printf("Selected color: %d", selectedColor);
}
