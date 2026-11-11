#include <stdio.h>
#include <string.h>
#include "main.h"

void main(void)
{
	char str[] = "acabacacd";
	char pat[] = "aba";

        printf("%s\n", _strstr(str, pat));
}
