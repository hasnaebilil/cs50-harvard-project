#include <cs50.h>
#include <stdio.h>

int main(void)
{
    while (true)
    {
        string name = get_int("user name: ");
        printf("%s \n", name);
    }
}

