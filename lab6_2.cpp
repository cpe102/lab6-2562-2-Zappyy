#include<iostream>
#include<string>
using namespace std;
int main()
{
	long long int sid;
	long long int gear=10000000;
	string name,mov,day,wish;
 	cout << "Fahsai: Sawadee ka...Can you tell me your name? " << endl;
 	cout << "??????: " ;
 	getline(cin,name);
	cout << "Fahsai: Wow!!! " << name << " that is a really cool name. " << endl;
	cout << "Fahsai: I think you are Engineering student. What is your student ID? " << endl;
	cout << name << ": ";
	cin >> sid;
	cout << "Fahsai: I think you may be GEAR " << (sid/gear)-12 <<  ". I have a free movie tickets for you." <<endl;
	cout << "Fahsai: Let's go to cinema together!!!" << endl;
	cout << "Fahsai: What movie do you want to watch?" << endl;
	cout << name << ": ";
	cin.ignore();
	getline(cin,mov);
	cout << "Fahsai: So....which day are you free to go with me?" << endl;
	cout << name << ": ";
	getline(cin,day);
	cout  << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watch " << mov << " with you." << endl;
	cout << name << ": ";
	cin.ignore();
	getline(cin,wish);
	cout << "Fahsai: 555+ see you "<< day <<". Bye Bye" <<  " \\(^ ^)/ ";
	return 0;
}
