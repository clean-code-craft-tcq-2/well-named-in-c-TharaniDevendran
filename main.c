#include <stdio.h>
#include <assert.h>
#include "struct.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    printf("Number\t\t\tMajorColor\t\t\tMinorColor");
    int Count =1;
    for(int i =0; i<numberOfMajorColors;i++)
    {
	    for(int j=0;j<numberOfMinorColors;j++)
	    {
		    printf("\n%d", Count++);
		    printf("\t\t\t\%s",MajorColorNames[i]);
		    printf("\t\t\t%s\n", MinorColorNames[j]);
	    }
    }
    return 0;
}
