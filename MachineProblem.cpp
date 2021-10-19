//https://github.com/Jaeger47/EMC122-CplusPlus/edit/main/looping.cpp
#include <iostream>

using namespace std;

int main(){

    int n, k=1;
    cout << "Input Any Positive Integers: ";
    cin >> n;

    while (n != 1){

        if (n%2 == 0)
            n = n/2;

        else
            n = n*3+1;

        cout << "\nCurrent Given Value is " << n;
        k++;
    }
    return 0;
}
