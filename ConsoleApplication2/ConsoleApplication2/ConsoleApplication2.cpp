// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
int one[9]= {0};
int aixoro;
int xoro;
int game = 1;
int playernumber;
string temp = "";
//2 = x 1 = o


void checkifwin(){

}
void check() {

	if (one[playernumber] != 0) {
			cout << "input diffrent space" << endl;
			cin >> temp;
			playernumber = stoi(temp);
			check();
		
		}

	

}

void ai()
{
	int x;
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[4] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[0] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[2] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[8] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[6] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[3] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[1] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[7] = aixoro;
		return;
	}
	if ((one[4] != xoro) && (one[4] != aixoro)) {
		one[5] = aixoro;
		return;
	}

}

int main()
{
	 one[0] =  0;
	 one[1] =  0;
	 one[2] =  0;
	 one[3] =  0;
	 one[4] =  0;
	 one[5] =  0;
	 one[6] =  0;
	 one[7] =  0;
	 one[8] =  0;
	 aixoro =  0;
	cout << "x or o?" << endl;
	cin >> xoro;
	cout << "xoro is this fam" << endl;
	cout << xoro << endl;
	if (xoro == 1) {
		cout << "test" << endl;
		aixoro = 2;
	}
	if (xoro == 2) {
		cout << "second test" << endl;
		aixoro = 1;
	}
	while (game == 1) {
		cout << "|" << one[0] << "|" << one[1] << "|" << one[2] << "|" << endl;
		cout << "|" << one[3] << "|" << one[4] << "|" << one[5] << "|" << endl;
		cout << "|" << one[6] << "|" << one[7] << "|" << one[8] << "|" << endl;
		 cout << "input space" << endl;
		cin >> temp;
		playernumber = stoi(temp);
		check();
		cout << "aixoro is " << endl;
		cout << aixoro << endl;
		one[playernumber] = xoro;
        ai();
	}
}

