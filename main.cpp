#include <iostream>

using namespace std;

int main (){

    const int SECOND_IN_A_DAY = 86400;
    const int SECOND_IN_A_HOUR = 3600;
    const int SECOND_IN_A_MINUTE = 60;

    cout << "Enter Seconds: "; 
    int seconds;
    cin >> seconds;

    if (seconds >= SECOND_IN_A_DAY)
    {
        cout << "Number of Days: " << seconds / SECOND_IN_A_DAY << endl;
    }else if (seconds >= SECOND_IN_A_HOUR)
    {
        cout << "Number of Hours: " << seconds / SECOND_IN_A_HOUR << endl;
    }else if (seconds >= SECOND_IN_A_MINUTE)
    {
        cout << "Number of Minutes: " << seconds / SECOND_IN_A_MINUTE << endl;
    }else
    {
        cout << "Error" << endl;
        return 1; 
    }
    
    return 0;
}