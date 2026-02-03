#include <stdio.h>

int	ft_atoi(char *str)
{
	// white space character are space, formfeed, newline, carriage return, horizontal tab and vertical tab, so namely ascii 9-13, and space is 32
	// + and - before the integer will lead to either pos or neg, total sum of + and - decides
	// processing consecutive digits in base 10?
	// reads string until non-conforming character is encountered and obtains number so far (so i am thinking non conforming means not space characters and not + or - characters and not numerical
	// dont worry about overflow and underflow, so dont worry about a variables range being exceeded
}
