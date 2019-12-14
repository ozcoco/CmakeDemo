#include <iostream>
#include <cstring>

int main()
{

    int i = 3344325;

    char bi[4];

    mempcpy(bi, &i, 4);

    int b = 0;

    mempcpy(&b, bi, 4);

    printf("%d \n", b);

    return 0;
}