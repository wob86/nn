/*
 *  nnc.cpp
 *  nn
 *
 *  Created by Robert Tracey on 21/05/2008.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */
#include <math.h>
#include "nnc.h"

void nn::assignw (float a, float b, float c)
{
w1 = a;
w2 = b;
w3 = c;
}

void nn::assignb (float bias)
{
bmain = bias;
}

void nn::assignp (float x1, float x2, float x3)
{
p1 = x1;
p2 = x2;
p3 = x3;
}

float nn::tot()
{
return (p1*w1+p2*w2+p3*w3+bmain*1.0);
}

float nn::tansig(float n)
{

return (2.0/(1.0+exp(-2.0*n))-1.0);
}