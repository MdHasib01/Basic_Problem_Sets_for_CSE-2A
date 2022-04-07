#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Taking two number as input
    float first_number, second_number,multiplier;
    cout << "Input the first Number: ";
    cin >> first_number;
    cout << "Input the second number: ";
    cin >> second_number;

    // multiply the numbers
    multiplier = first_number * second_number;

    //Output of the multiplier
    cout << fixed << setprecision(2) <<multiplier;
    return 0;
}