#include<iostream>

using namespace std;

int main(int argc, char** argv){
	if(argc!=2){
		cout << "Usage: ./prog input\n";
		cout << "Hint: ./prog -h\n";
	}else if(string(argv[1]) == "-h"){
		cout << "The desired input is in plain text.\n";
	}else{
		string(argv[1])=="password"?cout << "Score!\n":cout << "Fail!\n";
	}
	return 0;
}
