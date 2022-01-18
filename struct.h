#include <stdio.h>

extern const char* MajorColorNames[10] ;
extern const char* MinorColorNames[10] ;

extern int numberOfMajorColors ;
extern int numberOfMinorColors ;

const int MAX_COLORPAIR_NAME_CHARS = 16;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct
{
	enum MajorColor majorColor;
	enum MinorColor minorColor;
} ColorPair;

extern struct Colorpair colorPair;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
