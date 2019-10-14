#include <stdio.h>

int main() {
    int x, y, z=1, i;
    printf ("enter the number and it's power \n");
    scanf ("%d%d", &x, &y);
    for (i = 1; i <= y; i++){
    z = z*x;
    }
    printf ("the result is %d",z );
    return 0;
}