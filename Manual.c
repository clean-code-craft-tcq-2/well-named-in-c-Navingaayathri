#include <stdio.h>
#include "Color_mapping.h"
#include "Manual.h"

void ColorCodeManual()
{
	printf("Color Code Manual");
	int PairCount;
  	int totalPairs = 25;
  	for (PairCount = 1; PairCount <= totalPairs; PairCount++)
	{
		ColorPair colorPair = GetColorFromPairNumber(PairCount);
		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
		ColorPairToString(&colorPair, colorPairNames);
		printf("%s Pair Number: %d\n", colorPairNames, PairCount);
	}
}
