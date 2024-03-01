#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

ifstream fin("ride.in");
ofstream fout("ride.out");

int main() {
	string str;
	string str2;

	fin >> str;
	fin >> str2;
	
	//cout << str;
	//cout << str2;
	
	int n = 1;
	for(int i = 0; i < str.length(); i++) {
		int c = str[i] - 64;		
		n *= c;	
	}
	//cout << "\n" << n;

	int m = 1;
	for(int i = 0; i < str2.length(); i++) {
		int c = str2[i] - 64;
		m *= c;
	}
	//cout << "\n" << m;

	int mod1 = n % 47;
	int mod2 = m % 47;

	if(mod1 == mod2) {
		fout << "GO\n";
	} else {
		fout << "STAY\n";
	}


	// A has a value of 65
	// Z has a value of 90
	fout.close();
	return 0;
}
