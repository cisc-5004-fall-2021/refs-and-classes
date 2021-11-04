#include <iostream>

using namespace std;

class Time {
    public:
        Time();
        Time(int, int);
        void display() {
            cout << hours << ":" << minutes << endl;
        }
        void addMinutes(int);
        void addHours(int);
        Time operator+(const Time&) const;
    private:
        int hours;
        int minutes;
};