#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // User se date aur number of days input lena
    int day, month, year, days_to_add;
    cout << "Enter day (1-31): ";
    cin >> day;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter number of days to add: ";
    cin >> days_to_add;
    
    // Date object create karna
    tm date = {};
    date.tm_mday = day;
    date.tm_mon = month - 1; // tm_mon is 0-indexed (Jan = 0, Feb = 1, etc.)
    date.tm_year = year - 1900; // tm_year is years since 1900
    
    // Date ko time_t me convert karna
    time_t raw_time = mktime(&date);
    
    if (raw_time == -1) {
        cout << "Invalid date!" << endl;
        return 1;
    }
    
    // Future date ko calculate karna
    raw_time += days_to_add * 24 * 60 * 60; // 1 day = 24 hours * 60 minutes * 60 seconds
    
    // New date ko tm structure me convert karna
    tm* future_date = localtime(&raw_time);
    
    // Output future date
    cout << "Future date after " << days_to_add << " days: ";
    cout << (future_date->tm_mday) << "/"
         << (future_date->tm_mon + 1) << "/"
         << (future_date->tm_year + 1900) << endl;
    
    return 0;
}
