#include <stdio.h>

struct People {
    char *name;
    int age;
};

int main() {
    struct People people = {"Jabe", 99};
    printf("Name: %s\nAge: %d\n", people.name, people.age);
}
