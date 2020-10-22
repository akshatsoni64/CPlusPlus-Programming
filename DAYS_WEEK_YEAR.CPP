#include <iostream>
using namespace std;

int main()
{
    int days, years, weeks;
    
    cout << "Enter Days: ";
    cin >> days;
    
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    
    cout << "Year: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days;
    return 0;
}
