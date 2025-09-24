/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int tries = 10;
    int counter = 1;
    int choice;
    float radius;
    while(counter < 11) {
        cout << "#" << counter++ << "\nChoose whether area or volume:\n[1] Area\n[2] Volume" << endl;
        cout << "Choice: "; cin >> choice;
        float answer;
        if (choice == 1 || choice == 2) {
            cout << "Radius: "; cin >> radius;
            if (choice == 1) {
                answer = M_PI * (radius * radius);
            } else if (choice == 2) {
                answer = (4.0/3.0) * (M_PI * (radius * radius * radius));
            }
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
            cout << "\nAnswer: " << answer << "\n" << endl;
        } else {
            cout << "\nChoice invalid! Try again.\n" << endl;
        }
        tries--;
    }
    
    cout << "Limit reached! Thank you for using the program." << endl;

    return 0;
}
