#include <iostream>

using namespace std;
int printMonthCalender(int numOfDays, int startingDay);
bool leapYear(int year);
void printYearCalender(int year, int startingDay);
int main() {
    int year, startingDay;
    cout<<"Please give a year and a starting day"<<endl;
    cin>>year>>startingDay;

    printYearCalender(year,startingDay);

    return 0;
}

int printMonthCalender(int numOfDays, int startingDay){
    int currDay, lastDay;
    int counter = 1;

    cout<<"Mon"<<"\t"<<"Tue"<<"\t"<<"Wed"<<"\t"<<"Thr"<<"\t"<<"Fri"<<"\t"<<"Sat"<<"\t"<<"Sun"<<endl;

    for(int count = 1; currDay < numOfDays; count++){
        currDay = count - startingDay + 1;
        if(currDay >= 1){
            cout << currDay;
        }
        if(count % 7 == 0){
            cout << endl;
        }
        else {
            cout << "\t";
        }
        counter++;
    }
    lastDay = (counter - 1) % 7;
    return lastDay;
}
bool leapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }
    else{
        return false;
    }
}

void printYearCalender(int year, int startingDay){
    bool isItALeapYear;
    isItALeapYear = leapYear(year);

    int daysInTheMonth;
    int lastDay;
    int month;

    for(month = 1; month <= 12; month++){
        if(month == 1){
            cout<<"January "<<year<<endl;
            daysInTheMonth = 31;
        }
        else if(month == 2){
            cout<<"February "<<year<<endl;
            if(isItALeapYear == true){
                daysInTheMonth = 29;
            }
            else{
                daysInTheMonth = 28;
            }
        }
        else if(month == 3){
            cout<<"March "<<year<<endl;
            daysInTheMonth = 31;
        }
        else if(month == 4){
            cout<<"April "<<year<<endl;
            daysInTheMonth = 30;
        }
        else if(month == 5){
            cout<<"May "<<year<<endl;
            daysInTheMonth = 31;
        }
        else if(month == 6){
            cout<<"June "<<year<<endl;
            daysInTheMonth = 30;
        }
        else if(month == 7){
            cout<<"July "<<year<<endl;
            daysInTheMonth = 31;
        }
        else if(month == 8){
            cout<<"August "<<year<<endl;
            daysInTheMonth = 31;
        }
        else if(month == 9){
            cout<<"September "<<year<<endl;
            daysInTheMonth = 30;
        }
        else if(month == 10){
            cout<<"October "<<year<<endl;
            daysInTheMonth = 31;
        }
        else if(month == 11){
            cout<<"October "<<year<<endl;
            daysInTheMonth = 30;
        }
        else if(month == 12){
            cout<<"December "<<year<<endl;
            daysInTheMonth = 31;
        }
        lastDay = printMonthCalender(daysInTheMonth, startingDay);
        startingDay = lastDay + 1;
        cout<<endl;
        cout<<endl;
    }
}