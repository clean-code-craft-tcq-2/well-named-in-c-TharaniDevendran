#include <stdio.h>
#include <assert.h>
#include "ColorCoding.h"
void DisplayColorCodeManual()
{
    int Count =1;
    printf("Number\t\t\tMajorColor\t\t\tMinorColor");
    for(int i =0; i<numberOfMajorColors;i++)
    {
	    for(int j=0;j<numberOfMinorColors;j++)
	    {
		    printf("\n%d", Count++);
		    printf("\t\t\t%s",MajorColorNames[i]);
		    printf("\t\t\t%s\n", MinorColorNames[j]);
	    }
    }
}
