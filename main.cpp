#include <iostream>
#include "Calendar.h"
using namespace std;

int main() {
   // Declare and initialize variables with an arbitrary date
   int month = 11; // Set month to November
   int week = 4; // Set week to the fourth
   int day = 7; // Set day to the seventh
   Calendar c1(month, week, day);

   cout << c1; // Print out today's date
   c1.setWarner(); // Admin sets warner for tomorrow
   ++c1; // Increment to tomorrow which sets off warning
   cout << c1; // Print out today's date
   return 0;
}
