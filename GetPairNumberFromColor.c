#include <stdio.h>
#include <assert.h>
#include "struct.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int GetPairNumberFromColor(const ColorPair* colorPair)
{
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
