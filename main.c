/* CLion Git Test Program 
 * Author: Jim Morrissey
 * Updated: 11/12/2021 
 */

#include <stdio.h>
extern int add2ints(int, int);

extern int mult2ints(int, int);

extern int sub2ints(int, int);
extern char done_string[];

int main() {
    printf("Hello, World, as usual!\n");
    printf("I've added a new line!\n");
    printf("Say what?!?!\n");
    int one = 1;
    int two = 2;
    int ans = add2ints(one, two);
    printf("one + two = %d\n", ans);
    printf("Master: some new stuff\n");
    ans = mult2ints(one, two);
    printf("one * two = %d, you dig?\n", ans);
    ans = sub2ints(one, two);
    printf("one - two = %d, dig it?\n", ans);
    printf("\n%s\n", done_string);
    return 0;
}
