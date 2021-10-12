#include <iostream>

using namespace std;
class Time{
    private:
        int hour;
        int minute;
        int second;
    public:
        Time(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
        void setTime(int hour, int minute, int second){
            this->hour = hour;
            this->minute = minute;
            this->second = second;
        }
		void setSecond(int second){
			this->second = second;
		}
		void setMinute(int minute){
			this->minute = minute;
		}
		void setHour(int hour){
			this->hour = hour;
		}
		int getHour(){
			return hour;
		}
		int getMinute(){
			return minute;
		}
		int getSecond(){
			return second;
		}
		void nextSecond(){
			if(second < 59){
				second++;
			}
			if(second >= 59 && minute < 59){
				second = 0;
				minute++;
			}
			if(second == 59 && minute == 59){
				second = 0;
				minute = 0;
				hour++;
				if(hour > 23){
					hour = 0;
				}
			}
		}
		void previousSecond(){
			if(hour == 0 && minute == 0 && second == 0){
				second = 59;
				minute = 59;
				hour = 23;
				return;
			}
			if(second == 0 && minute == 0){
				second = 59;
				minute = 59;
				hour--;
				return;
			}

			if(second == 0){
				minute--;
				second = 59;
				return;
			}
			second--;
		}
		void display(){
			string second = to_string(this->second);
			string minute = to_string(this->minute);
			string hour = to_string(this->hour);
			if(second.length() == 1){
				second = "0" + second;
			}
			if(minute.length() == 1){
				minute = "0" + minute;
			}
			if(hour.length() == 1){
				hour = "0" + hour;
			}
			cout << hour << ":" << minute << ":" << second << endl;
		}
		


};
int main() {
	Time t(12, 1, 1);
	t.display();
	t.setTime(23, 59, 59);
	t.display();
	t.nextSecond();
	t.display();
	t.nextSecond();
	t.display();
	t.setTime(7, 0, 0);
	t.display();
	t.setTime(0, 0, 0);
	t.previousSecond();
	t.display();
	return 0;
}