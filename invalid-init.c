#include <stdio.h>
#include <stdlib.h>
#include <terminals.h>
#include <unistd.h>

int main() {
	InitTerminalDriver();

	int res = InitTerminal(100);
	assert(res == ERROR);

	exit(0);
}