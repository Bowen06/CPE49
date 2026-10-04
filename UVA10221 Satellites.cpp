#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const double PI = acos(-1.0); 

int main()
{
    double s, a;
    string unit;

    cout << fixed << setprecision(6);
    while(cin >> s >> a >> unit)
    {
        double r = 6440.0 + s;
        if(unit == "min") a /= 60;
        if(a >= 180.0) a = 360.0 - a;
        double rad = a * PI / 180.0; 

        double arc = r * rad;
        double chord = 2 * r * sin(rad/2.0);


        cout << arc << " " << chord << endl;

    }
    

    return 0;
}