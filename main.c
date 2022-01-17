#include <stdio.h>
#include <assert.h>
#include "testNumberToPair.h"
#include "PairToNumber.h"

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

extern int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
extern int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

const int MAX_COLORPAIR_NAME_CHARS = 16;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct
{
	enum MajorColor majorColor;
	enum MinorColor minorColor;
} ColorPair;

extern struct Colorpair colorPair;

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
