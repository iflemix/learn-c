// typedef позволяет определить алиас любого существующего типа

// Определим алиас для int
typedef int MyInt;

// Определим алиас для структуры Person
typedef struct {
    char name[15];
    int age;
} PersonStruct;


int main() {
    MyInt number = 5;
    PersonStruct human;

    return 0;
}
