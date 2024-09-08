#include <stdio.h>
#include <conio.h>

void fun(int *ptr) {
    *ptr = 30;
}

int main() {
    int y = 20;
    fun(&y);
    printf("%d", y);
    getch();
    return 0;
}
