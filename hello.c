#include <cs50.h>
#include <stdio.h>
int main() {
    // printf() displays the string inside quotation
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);
    return 0;
}
