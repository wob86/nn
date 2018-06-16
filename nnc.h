/*
 *  nnc.h
 *  nn
 *
 *  Created by Robert Tracey on 21/05/2008.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */
#include <string>
class nn
{
private:
float w1,w2,w3,bmain, p1,p2,p3, n;
public:
void assignw (float a, float b, float c);

void assignb (float bias);

void assignp (float x1, float x2, float x3);

float tot();

float tansig(float n);


};