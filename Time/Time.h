#pragma once
#include <time.h>
class Time
{
private:
	int midNightSecond=0;
	public:
	
	Time(int=0,int=0,int=0);
	
	Time &setTime(int, int, int);
	Time &setHour(int);
	Time &setMinute(int);
	Time &setSecond(int);

	int getHour() const;
	int getMinute()const;
	int getSecond() const;

	void printUniversal() const;
	void printStandrard() const;
	
	~Time();
};

