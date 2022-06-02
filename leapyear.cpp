#include <iostream>
using namespace std;

/*  So I finished and moved on to the advanced C++ programming course
    and the first lecture is about functions. Then we were asked to
    design a function that will tell you if your birth year is a leap
    year... and I THINK I finally managed to do it.
    
    Edit: I messed up the boolean expressions in the if statement blocks and I think they work now.
    Not sure how to make this program perfect but I'll keep chipping away at it. Non numeric characters
    get interpreted as 0 by the program and still out put leap year/not a leap year.
*/

bool isLeapYear (int birthYear);

int main () {

    int birthYear;
    cout << "Please enter your birth year:" << endl;
    cin >> birthYear;

    isLeapYear(birthYear);

    return 0;


}

bool isLeapYear(int birthYear) {


    if (birthYear <= 2022 && (birthYear%4 == 0 || birthYear%400 == 0) ) {
        cout << birthYear << " was a leap year.";
    }
    else if (birthYear > 2022 && (birthYear%4 == 0 || birthYear%400 == 0)) {
            cout << birthYear << " will be a leap year.";
    }
    else if (birthYear > 2022 &&(birthYear%4 != 0 && birthYear%400 != 0)) {
            cout << birthYear << " will not be a leap year.";
    }
    else if (birthYear < 2022 && (birthYear%4 != 0 && birthYear%400 != 0)) {
        cout << birthYear << " was not a leap year.";
    }
    else {
        cout << "Did you enter a year?";
    }


    return isLeapYear;


}
