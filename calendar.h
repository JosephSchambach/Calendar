#ifndef FINALPROJECT2_CALENDAR_H
#define FINALPROJECT2_CALENDAR_H

#include <iostream>
using namespace std;

// Class of type calendar
class Calendar {
   // Overloaded output operator
   friend ostream& operator<<(ostream&, const Calendar&);
public:
   Calendar(); // Constructor 1
   Calendar(int, int, int, bool = false); // Constructor 2

   void setDay(int, int, int, bool); // Function to set the day

   Calendar& operator++(); // Overloaded increment operator

   string setWarner(); // Function to allow admin to set warning

// Private variables and functions
private:
   int month;
   int week;
   int day;
   bool warner;
   int warnMonth{0};
   int warnWeek{0};
   int warnDay{0};

   // Private functions
   static void getWarner(); // Warning function
   void incrementor(); // Function to help increment
};


#endif //FINALPROJECT2_CALENDAR_H
