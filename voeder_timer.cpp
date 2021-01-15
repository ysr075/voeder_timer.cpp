#include <iostream> 
#include <stdlib.h>
using namespace std;

void delay(int number_of_seconds) {
	int milli_seconds = 1000 * number_of_seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds);
}

int main() {
	int lichtsensor_I1;
	int i;
	int motor_aan_draaien_loop = 5;
	int motor_uit_draaien_loop = 5;
	int motor_aan = 8; 
	int motor_uit = -8; 
	int motor_stop = 0; 
	int licht = 1; 
	int geen_licht = 0; 
	do {
		cout << "\nI1: "; cin >> lichtsensor_I1;
		if (lichtsensor_I1 == licht) {
			for (i = 0; i < motor_aan_draaien_loop; i++) {
				cout << motor_aan;
				delay(1);
			}
			motor_stop;
		} else if (lichtsensor_I1 == geen_licht) {
			for (i = 0; i < motor_uit_draaien_loop; i++) {
				cout << motor_uit;
				delay(1);
			}
			motor_stop;
		} else {
			exit(1);
		}
	} while (true);
}
