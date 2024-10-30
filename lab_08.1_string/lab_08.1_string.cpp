#include <iostream>
#include <string>

using namespace std;

int Count(const string s){
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find("while", pos)) != -1){
		pos++;
		k++;
	}
	return k;
}

void Change(string& s){
	size_t pos = 0;
	while ((pos = s.find("while", pos)) != -1){
		s.replace(pos, 5, "**");
		pos++;
	}
}

int main(){
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);

	cout << "Counter = " << Count(str) << endl;

	Change(str);
	cout << "Modified string (param) : " << str << endl;
}