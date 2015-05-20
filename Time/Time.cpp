#include "Time.h"
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

Time::Time(int hr,int min,int sec)
{

	setTime(hr, min, sec);
}
Time &Time::setHour(int h){
	midNightSecond = midNightSecond - getHour() * 3600 + h * 3600;
	return*this;
}
Time &Time::setMinute(int m){
	midNightSecond = midNightSecond - getMinute() * 60 + m * 60;
	return*this;
}
Time &Time::setSecond(int s){
	midNightSecond = midNightSecond - getSecond() + s;
	return*this;
}
Time &Time::setTime(int h , int m , int s ){

	setHour(h).setMinute(m).setSecond(s);
	return *this;
}
int  Time::getHour()const{
	return (int)(midNightSecond/3600);
}
int Time::getMinute()const{
	return (midNightSecond %3600)/60;
}
int Time::getSecond()const{
	return (midNightSecond%60);
}

void Time::printUniversal()const{
	cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}
void Time::printStandrard()const{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond()<<((getHour()<12)?"AM":"PM");
}
Time::~Time()
{
}
