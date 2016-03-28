#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
	int hour;
	int min;
public:
	Time();
	Time(int hr,int minute);
	void set(int hr,int minute);
	void get(int& hr , int& minutes);
	//ostream &operator << (ostream &output, Time &T);
	~Time();
};

