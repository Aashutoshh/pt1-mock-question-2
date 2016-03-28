#pragma once
#include <iostream>
#include <string>
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
	friend ostream& operator<<(ostream& output, const Time& T);
	~Time();
};

