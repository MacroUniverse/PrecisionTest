#include "iprecision.h"
#include "fprecision.h"
#include "complexprecision.h"
//#include "intervalprecision.h"
using std::cout; using std::endl;

int main()
{
int_precision a(11111111), d;
float_precision f1(10, 64); // Initialized to zero and set precision to 64 digits
float_precision f2(2.0), f3(3), f4("0.12345678901234567890");

d = a * a * a; // a^3
cout << "11111111^3=" << d << endl;
d /= a;
cout << "11111111^2=" << d << endl;

f1 = log(f1);
f1 *= f2 + f3 / f4;
f1 = _float_table(_PI, 48); // Get PI with 48 decimals
cout << "PI with 48 digits:" << f1 << endl;
f1 = float_precision(2);
f1 = sqrt(f1);
cout << "Sqrt(2) with 48 digits:" << f1 << endl;
}
