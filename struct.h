#include <stdio.h>

extern const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet"};
extern const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

extern int numberOfMajorColors ;
numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
extern int numberOfMinorColors;
numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0])

const int MAX_COLORPAIR_NAME_CHARS = 16;

extern enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
extern enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct
{
	enum MajorColor majorColor;
	enum MinorColor minorColor;
} ColorPair;

extern struct Colorpair colorPair;
