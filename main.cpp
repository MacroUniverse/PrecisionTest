#include "precisioncore.h"
// #include "complexprecision.h" TODO!
//#include "intervalprecision.h" TODO!
using std::cout; using std::endl;

namespace slisc {
	using ArbPrec::int_precision;
	using ArbPrec::float_precision;
	using ArbPrec::_float_table;
	using ArbPrec::_PI;
}

int main()
{
	using namespace slisc;
// int precision
int_precision a("11111111"), d;
cout << a << endl;
d = a * a * a; // a^3
cout << "11111111^3=" << d << endl;
d /= a;
cout << "11111111^2=" << d << endl;

// float precision
float_precision f1(33141, 64); 
float_precision f2(2.0), f3(3);
float_precision f4("-3.1415e8", 64); // Initialized to 10 and set precision to 64 digits

f1 = sin(f1);
f1 *= f2 + f3 / f4;
f1 = _float_table(_PI, 48); // Get PI with 48 decimals
cout << "PI with 48 digits:" << f1 << endl;
f1 = float_precision(2); f1 * f1;
f1 = sqrt(f1);
cout << "Sqrt(2) with 48 digits:" << f1 << endl;
}
