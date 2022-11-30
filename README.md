# Calendar

Calendar was a school project that I got to do in C++ as a final assignemnt for school. This program is meant to create a calendar that can be used by an educational
institution to set up warnings for students as classes come due. This was a tough one for me, but I managed to get a 100% on it. 

The main.cpp function as usual operates as launching point for the functions and other files. It declares and initializes two calendar constructors and establishes a 
current date. It also allows the user to set a warner for a certain date and iterates through until the date is reached, at which point, a warning is issued. However, 
warning function is not a required element of the constructor.

Calendar.h
Header file for calendar.cpp to declare the different prototypes for the public functions as well as all the private variables. 

Calendar.cpp
This is where the action takes place. The user has two constructors, one that does not require a date and one that does. If the user opts out of setting a date, it 
defaults to month 1, week 1, and day 1, or 1/1/1. This file contains two overloaded operators, the << and ++ operators. This enables efficient outputs and also allows 
the calendar to increment while checking to ensure that it does not go past certain guidelines for months, weeks, and days. There are some simplifications in regards to 
actual dates, but it is more about the actual operation. This file also creates the warner function that the administrator can set to warn students when a deadline is 
approaching. 
