#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // User se date input lena
    int day, month, year;
    cout << "Enter day (1-31): ";
    cin >> day;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    
    // Date object create karna
    tm date = {};
    date.tm_mday = day;
    date.tm_mon = month - 1; // tm_mon is 0-indexed (Jan = 0, Feb = 1, etc.)
    date.tm_year = year - 1900; // tm_year is years since 1900
    
    // Current time se comparison
    time_t raw_time = mktime(&date);
    
    if (raw_time == -1) {
        cout << "Invalid date!" << endl;
        return 1;
    }
    
    // Output current date and day of the week
    cout << "Date entered: " << asctime(&date);
    cout << "Day of the week: " << ctime(&raw_time) << endl;
    
    return 0;
}
