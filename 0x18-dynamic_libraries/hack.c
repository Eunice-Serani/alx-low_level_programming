#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
	char numbers[] = "9 8 10 24 75 - 9\n";
	char message[] = "Congratulations, you win the Jackpot!\n";

	write(1, numbers, 17);
	write(1, message, 38);
	exit(0);
}
