#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //Write a c++ program that reads two times in military format(0900, 1730) and prints the number of hours and minutes between the two times.Here is a sample run.User input is in color.
    //Please enter the first time : 0900
    //Please enter the second time : 1730
    //8 hours 30 minutes
    //Extra credit if you can deal with the case where the first time is later than the second :
    //Please enter the first time : 1730
    //Please enter the second time : 0900
    //15 hours 30 minutes

    int firstTime, secondTime;
    cout << "Please enter the first time: ";
    cin >> firstTime;
    cout << "Please enter the second time: ";
    cin >> secondTime;

    int firstHour = firstTime / 100;
    int firstMinute = firstTime % 100;
    int secondHour = secondTime / 100;
    int secondMinute = secondTime % 100;

    int totalMinutesFirst = (firstHour * 60) + firstMinute;
    int totalMinutesSecond = (secondHour * 60) + secondMinute;

    if (totalMinutesFirst > totalMinutesSecond) 
    {
        totalMinutesSecond += 24 * 60; // add a day
    }

    int differenceInMinutes = abs(totalMinutesSecond - totalMinutesFirst);

    cout << differenceInMinutes / 60 << " hours " << differenceInMinutes % 60 << " minutes" << endl;

    return 0;
}