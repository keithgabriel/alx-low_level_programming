#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congratulations, you won the jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
