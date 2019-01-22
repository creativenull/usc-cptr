// Arnold Chand

/**
 * Just a prepend/append function.
 * It prepends/appends the character '/' to a string value.
 */

#include <iostream>
#include <cstring>
using namespace std;

char slash = '/';

string pre(string);
string app(string);

int main(){
	string k;
	char s;
	cout<< "Enter any info:" <<endl;
	getline(cin, k, '\n');
	cout<< "do you want to prepend '/' or append '/'? ";
	cin>> s;
	switch(s){
		case 'a':
			cout<< app(k) <<endl;
			break;
		case 'p':
			cout<< pre(k) <<endl;
			break;
		default:
			cout<< "error";
			break;
	}
	
	return 0;
}

string pre(string l){
	l = slash + l;
	return l;
}

string app(string j){
	j = j + slash;
	return j;
}
