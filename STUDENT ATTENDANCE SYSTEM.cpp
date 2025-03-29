#include <iostream>
using namespace std;

int main() {
    int attended, total;
    
    // Input: Attended classes and total conducted classes
    cout << "Enter the number of classes attended: ";
    cin >> attended;
    cout << "Enter the total number of classes conducted: ";
    cin >> total;

    if (total == 0) {
        cout << "Total classes cannot be zero!" << endl;
        return 0;
    }

    // Calculate current attendance percentage
    float attendancePercent = (attended * 100.0) / total;
    cout << "\nYour current attendance percentage: " << attendancePercent << "%\n";

    // Calculate maximum allowed absences for 75% attendance
    int maxAllowedAbsences = (total * 25) / 75;
    int holidaysYouCanTake = maxAllowedAbsences - (total - attended);

    if (attendancePercent >= 75) {
        cout << "You can take " << holidaysYouCanTake << " more holidays without falling below 75%.\n";
    } else {
        // Calculate required classes to reach 75% if attendance is low
        int requiredClasses = ((75 * total) - (100 * attended)) / 25;
        cout << "You need to attend " << requiredClasses << " more classes to reach 75%.\n";
    }

    return 0;
}

