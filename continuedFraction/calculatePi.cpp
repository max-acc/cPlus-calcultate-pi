//Calculating Pi until the eight digit
//Term to calculate Pi (π^4)*90 = 1/(n^4) ... was developed by Euler and is a continued fraction

#include <iostream>
#include <cmath>

using namespace std;

float intermediateResult;
float pi;

int main()
{

    for (int i = 1; i <= 50; i++) {     //The continued fration will be continued 50 times
        intermediateResult += 1 / pow(i, 4);    //Calculating the continued fraction
    }

    intermediateResult *= 90;   //Transform expression
    pi = sqrt(sqrt(intermediateResult));    //Getting the fourth root

    cout << "Pi is equivalent to" << pi;    //Printing the result
    return 0;
}
