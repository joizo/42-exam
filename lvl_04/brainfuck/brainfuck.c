#include <unistd.h>
#include <stdlib.h>

void	char_return(char *str)
{
		while (*str)
		{
			if (*str == '\\')
			{
				str++;
				if (*str == 'n')
				{
					write(1, "\n", 1);
					str++;
				}	
			}
			if (*str != '>' && *str != '<' && *str != '+' &&
			*str != '-' && *str != '[' && *str != ']' && *str != '.')
				write(1, str, 1);
			str++;
		}
}

void	brainfuck(char *str)
{
	char	*ptr;

	ptr = (char*)malloc(sizeof(char) * 2048);
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			(*ptr)++;
		else if (*str == '-')
			(*ptr)--;
		else if (*str == '[' && !*ptr)
			while (*str != ']')
				str++;
		else if (*str == ']' && !*ptr)
			while (*str != '[')
				str--;
		else if (*str == '.')
			write(1, ptr, 1);
		str++;
	}
}

int		main(int a_c, char **a_v)
{
	if (a_c == 2)
	{
		int i;

		i = 0;
		while (a_v[1][i])
		{
			if (a_v[1][i] != '>' && a_v[1][i] != '<' && a_v[1][i] != '+' &&
			a_v[1][i] != '-' && a_v[1][i] != '[' && a_v[1][i]!= ']' && a_v[1][i] != '.')
			char_return(a_v[1]);
			i++;
		}
	}
		char_return(a_v[1]);
	write(1, "\n", 1);
}

//Hello world!
//"++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>." | cat -e

//Hi
//"+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>." | cat -e