#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "nnc.h"

using namespace std;
/***class nn{
private:
float w1,w2,w3,bmain, p1,p2,p3, n;
public:
void assignw (float a, float b, float c)
{
w1 = a;
w2 = b;
w3 = c;
}
void assignb (float bias)
{
bmain = bias;
}
void assignp (float x1, float x2, float x3)
{
p1 = x1;
p2 = x2;
p3 = x3;
}
float tot()
{
return (p1*w1+p2*w2+p3*w3+bmain*1.0);
}
float tansig(float n)
{

return (2.0/(1.0+exp(-2.0*n))-1.0);
}

};***/
int main (int argc, char * const argv[]) {
	nn mine;
	stringstream stream;
	float winf[4];
	float pinf[4];
	float binf, n1;
	string win[4];
	string pin[3];
	int i =0;
	
	ifstream reader1("Wb_trained.txt");
	
	if( ! reader1)
		{
			cout << "error opening file!!!" << endl;
			return -1;
		}
	ifstream reader2("P.dat");
	
	if( ! reader2)
		{
			cout << "error opening file!!!" << endl;
			return -1;
		}
	
	while (i <= 3)
		{
			getline(reader1, win[i], '\t');
			i++;
		}
	i =0;
	while (i <= 2)
		{
			stream << win[i];
			stream >> winf[i];
			stream.str("");
			stream.clear();
			i++;
		}
	stream << win[3];
	stream >> binf;
	stream.str("");
	stream.clear();
	
	mine.assignw(winf[0], winf[1], winf[2]);
	mine.assignb(binf);
	
	i=0;
	while (i <= 2)
		{
			getline(reader2, pin[i], '\n');
			i++;
		}
	i =0;
	while (i <= 2)
		{
			stream << pin[i];
			stream >> pinf[i];
			stream.str("");
			stream.clear();
			i++;
		}
	mine.assignp(pinf[0], pinf[1], pinf[2]);
	n1 = mine.tot();
	
	cout << mine.tansig(n1) << endl;
    return 0;
}
