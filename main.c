#include "head.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{

	struct BigNumber* x = NULL;

	x = MemoryOfNum("8908");

	struct BigNumber* y = NULL;

	y = MemoryOfNum("56574");

	struct BigNumber* z = NULL;

	z = Summ(x, y);

	PrintLongNumber(z);

	return 0;
}
