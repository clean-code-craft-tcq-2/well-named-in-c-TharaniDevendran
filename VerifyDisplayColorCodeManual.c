#include <stdio.h>
#include <assert.h>
#include "ColorCoding.h"

void VerifyDisplayColorCodeManual(void *ColorCodeManual)
{
    ColorCodeManual();
    assert(displaycounter!=0);
}
