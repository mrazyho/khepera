#ifndef MATH_LIB_H
#define MATH_LIB_H

#include <cmath>
#include "Point.h"

#ifndef M_PI
#define M_PI        3.14159265358979323846
#endif

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

//	computes cosinus with an argument in arc degrees
double cosD(double arcDegrees);

//	computes sinus with an argument in arc degrees
double sinD(double arcDegrees);

//	returns sign of this number
int sign(double number);

//	computes orthogonal projection of point P into line defined by two poins: LINE_BEG and LINE_END
Point orthogonalProjection(Point& p, Point& line_beg, Point& line_end, bool* belongs_to_line = 0);

#endif