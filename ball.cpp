//*A ball is spinning and creates 3000 revolutions per minutes. Calculate the degrees it rotates in one second.*//
#include <iostream>
using namespace std;

int main()
{
    int rev=3000, sec=60, degree=360, product, x;

    cout << "Calculating the total degrees a ball creates in a second with 3000 revolutions per minute." << endl;

    //Calculation
    product = rev * degree;
    x = product / sec;

    cout << "The total degrees of the ball it spins in a second is " << x << "°";

    return 0;
}
