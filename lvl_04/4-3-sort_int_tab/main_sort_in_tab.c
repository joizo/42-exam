#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size);

int main (void)
{
    int tab[7] = {9, 7, 8, 6, 4, 5, 10};
    int size = 7;
    int i = 0;

    sort_int_tab(tab, size);

    while(i < size)
    {
        printf("%d\n", tab[i]);
        i++;
    }
return (0);
}