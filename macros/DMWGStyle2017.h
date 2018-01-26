#ifndef  __DMWGSTYLE_H
#define __DMWGSTYLE_H

#include "TStyle.h"

void SetDMWGStyle(bool plotwithz = false);

TStyle* DMWGStyle(bool plotwithz, const char * name); 

#endif // __DMWGSTYLE_H
