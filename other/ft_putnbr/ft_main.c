#include <stdlib.h> //atoi

void    ft_putnbr(int nb);

int main(int a_c, char **a_v)
{
    if (a_c == 2)
    {
       ft_putnbr(atoi(a_v[1]));
    }
    return (0);
}