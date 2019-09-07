#include<iostream>

using namespace std;

int main(int argc, char** argv){
	if(argc!=2){
		cout << "Usage: ./prog input" << endl;
		cout << "Hint: ./prog -h" << endl;
	}else if(string(argv[1]) == "-h"){
		cout << "The desired input is in plain text." << endl;
	}else{
		string(argv[1])=="password"?cout << "Score!" << endl:cout << "Fail!" << endl;
	}
	return 0;
}
