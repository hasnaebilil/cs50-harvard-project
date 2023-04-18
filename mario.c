#include <stdio.h>

int get_size(void);
void print_grid(int size);
int get_int(char dspl_nsg[20]);


int main(void)
{
    //  Get size of grid
    int n = get_size();

    // Print grid of bricks
    print_grid(n);    
}


// Get size function
int get_size(void) 
{
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    return n;
}

// Print grid function
void print_grid(int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int get_int(char dspl_nsg[20])
{
    int n;
    printf("%s", dspl_nsg);
    scanf("%d", &n);
    return n;
}