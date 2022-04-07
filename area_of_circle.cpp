#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // taking the Radious input
    float radious;
    cout <<"Input the Radious of the circle: ";
    cin >> radious;

    //Declaring the pi value
    float pi = 3.1416;

    //calculating the area of the circle
    float area = pi*radious*radious;

    //output of the area of the circle
    cout << "The Area of the circle is :" ;
    cout << fixed << setprecision(2) <<area;
    return 0;
}