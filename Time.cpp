#include "Time.h"
#include <iostream>
#include <string>
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

void Time::get(int& hr, int& minute)
{
	
	hr = hour;
	minute = min;
	
}
ostream& operator<<(ostream& output, const Time& T)
{
	output << T.hour << ":" << T.min;
	return output;

}


Time::~Time()
{
}
