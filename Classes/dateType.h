#ifndef dateType_H
#define dateType_H

#include <iostream>

class dateType{
public:
    /**
     setDate(int,int,int)
     modifier for dMonth, dDay, dYear. sets dMonth to first int passed if it is within what a month can be. dDay is set to second int passed; also validated. dYear is set to the third int passed; also validated.
     */
    void setDate(int month, int day, int year);
    /**
     getDay()
     Accessor for dDay. Returns dDay.
     */
    int getDay() const{return dDay;};
    /**
     getMonth()
     Accessor for dMonth. Returns dMonth.
     */
    int getMonth() const{return dMonth;};
    /**
     getMonthName()
     Accessor for dMonth. Returns the name of the month held in dMonth.
     */
    std::string getMonthName() const{return months[dMonth-1];};
    /**
     getYear()
     accessor for dYear. Returns dYear.
     */
    int getYear() const{return dYear;};
    /**
     setDay(int)
     modifier for dDay. Sets dDay to int passed if it is valid.
     */
    void setDay(int day);
    /**
     setYear(int)
     modifier for dYear. Sets dYear to int passed if it is valid.
     */
    void setYear(int year);
    /**
     setMonth(int)
     modifier for dMonth. Sets dMonth to int passed if it is valid.
     */
    void setMonth(int month);
    /**
     printDate()
     accessor for members of dateType. prints the currently held date in readable format.
     */
    void printDate() const;
    /**
     dateType(int, int, int)
     constructor for dateType. sets dMonth to first int passed if it is within what a month can be. dDay is set to second int passed; also validated. dYear is set to the third int passed; also validated.
     */
    dateType(int month, int day, int year);
    /**
     dateType()
     constructor for dateType. sets dMonth to 1. sets dDay to 1. sets dYear to 2001.
     */
    dateType();
    /**
     isLeapYear()
     accessor for dYear. returns true if dYear is divisable by 4 otherwise returns false.
     */
    bool isLeapYear();
    /**
     daysInMonth()
     accessor for monthDay[dMonth-1]. returns the number of days in the month dMonth
     */
    int daysInMonth();
    /**
     daysPassed()
     accessor for dDays. returns the number of days in the year prior to dDay.
     */
    int daysPassed();
    /**
     daysRemaining()
     accessor for dDays. returns the number of days left in the year passed dDay.
     */
    int daysRemaining();
    /**
     operator + (int)
     modifier for dDays. adds int to dDays until it is equal to days in the current moth then iterates month unless there are no more months in the year then iterates year and continues adding to dDays.
     */
    void operator+(int days);
    /**
     operator < (dateType)
     compares the values in dDay, dMonth and dYear to dateType.dDays, dateType.dMonth, and dateType.dYear. returns true if dateType passed holds a larger date.
     */
    bool operator<(dateType date);
    /**
     operator < (dateType)
     compares the values in dDay, dMonth and dYear to dateType.dDays, dateType.dMonth, and dateType.dYear. returns true if dateType passed holds a smaller date.
     */
    bool operator>(dateType date);
    /**
     daysInMonth(int)
     accessor for monthDay at month int. returns number of days in integer passed.
     */
    int daysInMonth(int i);
private:
    int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::string months[12] = {"January","Febuary","March","April","May","June","July","August","September","October","November","December"};
    int dMonth;
    int dDay;
    int dYear;
};

dateType::dateType(){
    dYear= 2001;
    dMonth = 1;
    dDay = 1;
}

bool dateType::isLeapYear(){
    return (dYear%4==0);
}

void dateType::setYear(int year){
    if(year <= 0 || year > 2999)
        std::cout << year << " is not a valid year.\n";
    else
        dYear = year;
}

void dateType::setMonth(int month){
    if(month > 12 || month <= 0){
        std::cout << month << " is not a valid month.\n";
        month = 1;
    }
    else
        dMonth = month;
}

void dateType::setDay(int day){
    if(day <= 0)
        std::cout << day << " is not a valid day.\n";
    else if (day > monthDay[dMonth-1] && !isLeapYear())
        std::cout << "There are not " << day << " days in month " << dMonth << ".\n";
    else if (isLeapYear() && dMonth == 2 && day > 29)
        std::cout << "There are only 29 days in month " << dMonth << " this year.\n";
    else
        dDay = day;
}

void dateType::setDate(int month, int day, int year){
    if(month > 12 || month <= 0){
        std::cout << month << " is not a valid month.\n";
        month = 1;
    }
    else
        dMonth = month;
    if(year <= 0 || year > 2999)
        std::cout << year << " is not a valid year.\n";
    else
        dYear = year;
    if(day <= 0)
        std::cout << day << " is not a valid day.\n";
    else if (day > monthDay[month-1] && !isLeapYear())
        std::cout << "There are not " << day << " days in month " << month << ".\n";
    else if (isLeapYear() && month == 2 && day > 29)
        std::cout << "There are only 29 days in month " << month << " this year.\n";
    else
        dDay = day;
    
    
}

dateType::dateType(int month, int day, int year){
    if(month > 12 || month <= 0){
        std::cout << month << " is not a valid month.\n";
        month = 1;
    }
    else
        dMonth = month;
    
    if(year <= 0 || year > 2999)
        std::cout << year << " is not a valid year.\n";
    else
        dYear = year;
    
    if(day <= 0)
        std::cout << day << " is not a valid day.\n";
    else if (day > monthDay[month-1] && !isLeapYear())
        std::cout << "There are not " << day << " days in month " << month << ".\n";
    else if (isLeapYear() && month == 2 && day > 29)
        std::cout << "There are only 29 days in month " << month << " this year.\n";
    else
        dDay = day;
    
    
}

int dateType::daysInMonth(){
    if (!isLeapYear())
        return monthDay[dMonth - 1];
    else if(dMonth == 2)
        return 29;
    else
        return monthDay[dMonth - 1];
}

int dateType::daysInMonth(int i){
    if (!isLeapYear())
        return monthDay[i];
    else if(i == 1)
        return 29;
    else
        return monthDay[dMonth - 1];
}

int dateType::daysPassed(){
    int sum = 0;
    for(int i = 0; i < dMonth-1; i++)
        sum = sum + daysInMonth(i);
    sum = sum + dDay;
    return sum;
}

int dateType::daysRemaining(){
    if(isLeapYear())
        return 365 - daysPassed();
    else
        return 364 - daysPassed();
}

void dateType::operator +(int days){
    int sum = dDay + days;
    while(sum > daysInMonth()){
        sum = sum - daysInMonth();
        if(dMonth!=12)
            dMonth++;
        else{
            dMonth = 1;
            dYear++;
        }
        
    }
    dDay = sum;
}

bool dateType::operator >(dateType date){
    if(date.getYear()<=dYear){
        if(date.getMonth() < dMonth)
            return true;
        else if(date.getMonth()==dMonth)
            if(date.getDay() <dDay)
                return true;
    }
    return false;
}

bool dateType::operator <(dateType date){
    if(date.getYear()>=dYear){
        if(date.getMonth() > dMonth)
            return true;
        else if(date.getMonth()==dMonth)
            if(date.getDay() > dDay)
                return true;
    }
    return false;
}

void dateType::printDate() const {
    std::cout << months[dMonth-1] <<" " << dDay <<", " <<dYear <<std::endl;
}

#endif
