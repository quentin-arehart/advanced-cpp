#include <iostream>
using namespace std;

/*  This program uses an array structure to take the number of students
    and their grades in order to print out the class average and what
    grades are above the average. This is the example program for the array lecture.
*/


const int MAX_CLASS_SIZE = 60;
    int main() {

    int numOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    int currGrade, sum;
    int ind;
    double average;
    cout << "Please enter the amount of students: (no more than " << MAX_CLASS_SIZE << ")" << endl;

    cin >> numOfStudents;

    // reading the grades
    cout << "Enter the students’ grades separated by a space:" << endl;
    for (ind = 0; ind < numOfStudents; ind++){
        cin >> currGrade;
        gradesList[ind] = currGrade;
    }

    //calculating the average
    sum = 0;
    for (ind = 0; ind < numOfStudents; ind++) {
        sum += gradesList[ind];
    }
    average = (double)sum / (double)numOfStudents;
    cout << "The class average is " << average << endl;


    // print grades above the average
    cout << "The grades above the average are ";
    for (ind = 0; ind < numOfStudents; ind++) {
        if (gradesList[ind] > average) {
            cout << gradesList[ind]<< " ";
        }
    }


    return 0;
}
