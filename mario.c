#include <stdio.h>
#include <cs50.h>

void print_spaces(int n, int height);
void print_blocks(int n);

int main(void)
{
    // Get positive integer from User
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    // Builds Pyramid
    for (int i = 1; i <= height; i++)
    {
        print_spaces(i, height); 
        print_blocks(i); 
        printf("  ");
        print_blocks(i);
        printf("\n");
    }
}

void print_spaces(n, height)
{
    int spaces = height - n;
    
    // Dynamically prints spaces with respect to user inputted height
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}


void print_blocks(n)
{
    // Dynamically prints correct number of blocks
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}