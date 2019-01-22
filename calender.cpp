// Name: calender.cpp
// Author/Creator: Arnold Chand
// Last Updated: Sunday, 23 January, 2011 at 7:46pm
// This program displays a calender of January and Feburary 2011,
// on the assumption that the dates that exceeds 31(or 28) are 0.
#include <iostream>
#include <string>
using namespace std;

int main() {
	int jan[6][7] = {};
	int feb[6][7] = {};
	string days[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
	// original values variable
	int x = 0, y = 0;
	// new values variable
	int a = 0;

	// Start January Calender
	// Declare first 7 days in order to start the calender	
	jan[0][6] = 1;
	jan[1][0] = 2;
	jan[1][1] = 3;
	jan[1][2] = 4;
	jan[1][3] = 5;
	jan[1][4] = 6;
	jan[1][5] = 7;
	
	// Sunday calculation
	x = 1;
	a = 2;
	while (a <= 5) {
		jan[a][0] = jan[x][0] + 7;
		a++;
		x++;
	}
	// Monday
	x = 1;
	a = 2;
	while (a <= 5) {
		jan[a][1] = jan[x][1] + 7;
		a++;
		x++;
	}
	// Tuesday
	x = 1;
	a = 2;
	while (a <= 4){
		jan[a][2] = jan[x][2] + 7;
		a++;
		x++;
	}
	// Wednesday
	x = 1;
	a = 2;
	while (a <= 4){
		jan[a][3] = jan[x][3] + 7;
		x++;
		a++;
	}
	// Thursday
	x = 1;
	a = 2;
	while (a <= 4){
		jan[a][4] = jan[x][4] + 7;
		x++;
		a++;
	}
	// Friday
	x = 1;
	a = 2;
	while (a <= 4){
		jan[a][5] = jan[x][5] + 7;
		x++;
		a++;
	}
	// Saturday
	x = 0;
	a = 1;
	while (a <= 4){
		jan[a][6] = jan[x][6] + 7;
		x++;
		a++;
	} // End January Calender
	
	// Start Feburary Calender
	feb[0][2] = 1;
	feb[0][3] = 2;
	feb[0][4] = 3;
	feb[0][5] = 4;
	feb[0][6] = 5;
	feb[1][0] = 6;
	feb[1][1] = 7;
	
	// Sunday
	x = 1;
	a = 2;
	while (a <= 4){
		feb[a][0] = feb[x][0] + 7;
		x++;
		a++;
	}
	// Monday
	x = 1;
	a = 2;
	while (a <= 4){
		feb[a][1] = feb[x][1] + 7;
		x++;
		a++;
	}
	// Tuesday
	x = 0;
	a = 1;
	while (a <= 3){
		feb[a][2] = feb[x][2] + 7;
		x++;
		a++;
	}
	// Wednesday
	x = 0;
	a = 1;
	while (a <= 3){
		feb[a][3] = feb[x][3] + 7;
		x++;
		a++;
	} 
	// Thursday
	x = 0;
	a = 1;
	while (a <= 3){
		feb[a][4] = feb[x][4] + 7;
		x++;
		a++;
	}
	// Friday
	x = 0;
	a = 1;
	while (a <= 3){
		feb[a][5] = feb[x][5] + 7;
		x++;
		a++;
	}
	// Saturday
	x = 0;
	a = 1;
	while (a <= 3){
		feb[a][6] = feb[x][6] + 7;
		x++;
		a++;
	} // End Feburary Calender
	
	// Print January
	cout<< "January" <<endl;
	y = 0;
	while (y <= 6){
		cout<< days[y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 1
	y = 0;
	while (y <= 6){
		cout<< jan[0][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 2
	y = 0;
	while (y <= 6){
		cout<< jan[1][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 3
	y = 0;
	while (y <= 6){
		cout<< jan[2][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 4
	y = 0;
	while (y <= 6){
		cout<< jan[3][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 5
	y = 0;
	while (y <= 6){
		cout<< jan[4][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 6
	y = 0;
	while (y <= 6){
		cout<< jan[5][y]<< "\t";
		y++;
	}
	cout<< endl <<endl;
	// End January
	// Print Feburary
	cout<< "Feburary" <<endl;
	y = 0;
	while (y <= 6){
		cout<< days[y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 1
	y = 0;
	while (y <= 6){
		cout<< feb[0][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 2
	y = 0;
	while (y <= 6){
		cout<< feb[1][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 3
	y = 0;
	while (y <= 6){
		cout<< feb[2][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 4
	y = 0;
	while (y <= 6){
		cout<< feb[3][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 5
	y = 0;
	while (y <= 6){
		cout<< feb[4][y]<< "\t";
		y++;
	}
	cout<< endl;
	// Week 6
	y = 0;
	while (y <= 6){
		cout<< feb[5][y]<< "\t";
		y++;
	}
	cout<< endl;
		
	return 0;
}
