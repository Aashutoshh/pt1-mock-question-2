#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
	hour = 0;
	min = 0;
}
Time::Time(int hr,int minute)
{
	hour = hr;
	min = minute;
}
void Time::set(int hr, int minute)
{
	
	hour = hr;
	min = minute;
	
}
void Time::get(int hr, int minute)
{
	
	hr = &hour;
	minute = &min;
	cout << *hr << "  555555 " << *minute << endl;
}

Time::~Time()
{
}
