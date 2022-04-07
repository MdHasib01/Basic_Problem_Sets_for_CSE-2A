#include <iostream>

using namespace std;

int main(){
    //Taking input form the user
    int number;
    cout << "Inout a number: ";
    cin >> number;

    //checking the number is even or odd
    if(number % 2 == 0){
        cout << "The number is even" << endl;
    }
    else{
        cout << "The number is odd" << endl;
    }
    return 0;
}