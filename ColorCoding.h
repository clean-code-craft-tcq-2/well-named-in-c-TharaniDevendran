#include <stdio.h>

extern const char* MajorColorNames[] ;
extern const char* MinorColorNames[] ;

extern int numberOfMajorColors ;
extern int numberOfMinorColors ;

extern int displaycounter = 0;

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
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
void DisplayColorCodeManual();
