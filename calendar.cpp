#include "Calendar.h"
#include <iostream>
using namespace std;

// Class Calendar implementation code
// Constructor 1 with initialized values
Calendar::Calendar(){
   month = 1;
   week = 1;
   day = 1;
   warner = false;
}

// Constructor 2 accepting parameters from user
Calendar::Calendar(int m, int w, int d, bool warn){
   setDay(m, w, d, warn); // Function to set the current day
}

// Function to set the day and ensure variables are within boundaries
void Calendar::setDay(int m, int w, int d, bool warn){
   if (m >= 1 && m <= 12)
       month = m;
   else
       throw invalid_argument{"Month must be between 1 and 12"};

   if (w >= 1 && w <= 4)
       week = w;
   else
       throw invalid_argument{"Week must be between 1 and 4"};

   if (d >= 1 && d <= 7)
       day = d;
   else
       throw invalid_argument{"Day must be between 1 and 7"};

   warner = warn;

}

// Overloaded incrementor for the current day to the next
Calendar& Calendar::operator++(){
   incrementor(); // Call to incrementing function to check boundaries
   return *this; // Return reference
}

// Incrementing function to check boundaries
void Calendar::incrementor(){
   if (day < 7)
       day++;
   else{
       if (week < 4){
           ++week;
           day = 1;
       }
       else if (week == 4 && month < 12){
           ++month;
           week = 1;
           day = 1;
       }
       else {
           month = 1;
           week = 1;
           day = 1;
       }
   }

   if (month == warnMonth){
       if (week == warnWeek){
           if (day == warnDay){
               getWarner();
           }
       }
   }
}

// Overloaded output operator returning output stream
ostream& operator<<(ostream& output, const Calendar& c){
   output << c.month << "/" << c.week << "/" << c.day << endl;
   return output;
}

// Function to set the warner when user wants to use
string Calendar::setWarner(){
   int m, w, d;
   cout << "Enter a month, week, and day that you want to set the warner for (format m w d)";
   cin >> m >> w >> d;
   warner = true;

   if (m >= 1 && m <= 12){
       warnMonth = m;
   }
   if (w >= 1 && w <= 4){
       warnWeek = w;
   }
   if (d >= 1 && d <= 7){
       warnDay = d;
   }
   return "Warner is set\n";
}

// Static function to print warning sign for students
void Calendar::getWarner(){
   cout << "TODAY IS THE LAST DAY TO DROP THE COURSE\n";
}

