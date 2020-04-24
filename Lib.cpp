#include "lib.h"
#include <math.h>
#define M_PI            3.14159265358979323846


float square_c(float r) 
{
	return 2.0 * M_PI * r;
}
double square_tr(float a, float b, float c)
{
	float p = (a + b + c) / 2.0;
		return sqrt(p*(p - a)*(p - b)*(p - c));
}
bool is_tr(float a, float b, float c)
{
	if (a * a + b * b == c * c)
		return true;
	else
		return false;
}