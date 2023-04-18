#include <stdio.h>

int get_int(char dspl_nsg[20]);

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
}


int get_int(char dspl_nsg[20])
{
    int n;
    printf("%s", dspl_nsg);
    scanf("%d", &n);
    return n;
}