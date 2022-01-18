#include <stdio.h>
#include <assert.h>
#include "struct.h"

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = 12;
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
