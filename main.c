#include <stdio.h>
extern int add2ints(int, int);

int main() {
    printf("Hello, World, as usual!\n");
    printf("I've added a new line!\n");
    printf("Say what?!?!\n");
    int one = 1;
    int two = 2;
    int ans = add2ints(one, two);
    printf("one + two = %d\n", ans);
    return 0;
}
