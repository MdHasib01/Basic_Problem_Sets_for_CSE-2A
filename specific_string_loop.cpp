#include <iostream>
#include <string.h>

using namespace std;

int main(){
    //Take input of a specific string
    string fixed_txt;
     cout << "Type the word 'NAME' here: " ;
     cin >> fixed_txt;

    //Specific String
    string fixed_string("NAME");

    //Checking the input string
    if(fixed_txt == fixed_string){

        //loop the string 5 times
       for(int i = 0; i<=5; i++){
            cout << fixed_txt << endl;
        };
    }
    else{
        //Didn't match (error message)
        cout << "You type the wrong keyword";
    };
    return 0;
}