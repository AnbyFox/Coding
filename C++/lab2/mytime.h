#ifndef MYTIME_H
#define MYTIME_H

class MyTime
{
	public:
	int hour;
	int min;
	int sec;
	MyTime();
	MyTime(int _hour, int _min, int _sec);
	void info();
	MyTime operate(int _time, char type);
	MyTime add(MyTime given);
	MyTime take(MyTime given);
};

#endif