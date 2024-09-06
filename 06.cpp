//if else statement

#include <iostream>
using namespace std;

int main(){
    //declaring 2 variables
    int MarksGot = 32;
    int PassingMarks = 33;
    // comparing
    if (MarksGot>PassingMarks){
        cout<< "PASS :)" << endl; //could've ended with "\n" too
    }
    else if (MarksGot == PassingMarks) {
        cout << "SOMEHOW PASS :| \n"; // just variations. couldve used <<endl
    }
    else{
        cout << "FAIL :(" << endl; //could've ended with "\n" too
    }
    return 0;
}