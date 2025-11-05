#include "mytime.h"
#include <iostream>

MyTime::MyTime() {
	hour = 0; min = 0; sec = 0;
}

MyTime::MyTime(int _hour, int _min, int _sec) {
	hour = _hour;
	min = _min;
	sec = _sec;
}

void MyTime::info() {
	std::cout << "(" << hour << " hours, " << min << " minutes, " << sec << " seconds)\n";
}

MyTime MyTime::operate(int _time, char type) {
	MyTime result;
	int total_secs = (hour * 60 * 60) + (min * 60) + sec;
	
	switch(type) {
		case '+':
			total_secs += _time;
			std::cout << "Plus.\n";
			break;
		case '-':
			total_secs -= _time;
			std::cout << "Minus.\n";
			break;
	}
	
	result.sec =  (total_secs % 60);
	result.min =  (total_secs / 60) % 60;
	result.hour = (total_secs / 60 / 60);
	
	if(type == 'r') {
		result.sec = result.min = result.hour = 0;
		std::cout << "Reset.\n";
	}
	
	return result;
}

MyTime MyTime::add(MyTime given) {
	MyTime result;
	std::cout << "Plus.\n";
	
	result.sec =  sec + given.sec;
	result.min =  min + given.min;
	result.hour = hour + given.hour;
	
	return result;
}

MyTime MyTime::take(MyTime given) {
	MyTime result;
	std::cout << "Minus.\n";
	
	result.sec =  sec - given.sec;
	result.min =  min - given.min;
	result.hour = hour - given.hour;
	
	return result;
}