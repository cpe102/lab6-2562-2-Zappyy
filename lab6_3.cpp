#include<iostream>
using namespace std;

char before(char x){
	char y = x-1;
	char a = 'A';
	if( x == a)
	{
		return 'Z';
	}if( x>'A'&& x <='Z')
	{
		return y;
	}else
	{
		return '0';
	}
}

int main(){

	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
