#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;int randnum,x,HP = 10;
	while(1){
		randnum = rand() % 50;
		cout << "Welcome to the guessing game." << endl;
		cout << "Enter '1' to start the game." << endl;
		cout << "Enter other key to exit the game:";
		cin >> s;
		if(s == "1"){
			cout << "This number is between 1 and 50." << endl;
			while(x != randnum){
				if(!HP){
					cout << "You are die.";
					randnum = rand() % 50; 
					break;
				}
				cout << "Enter the number you think." << endl;
				cin >> x;
				if(x > randnum){
					HP--;
					cout << "Guess too big!There are " << HP << " more times.";
					continue;
				}else if(x < randnum){
					HP--;
					cout << "Guess too small!There are " << HP << " more times.";
					continue;
				}else{
					cout << "You are winner!" << endl;
					break;
				}
			}	
		}else{
			exit(0);
		}	
	}
	return 0;
}
