#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstString;
    string secondString;

    cout << "String Input Console Application" << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "\nRound " << i << endl;

        cout << "Enter the first string: ";
        getline(cin, firstString);

        cout << "Enter the second string: ";
        getline(cin, secondString);

        string combined = firstString + secondString;

        cout << "Combined string: "
             << combined << endl;
    }

    cout << "\nProgram completed successfully!" << endl;

    return 0;
}
