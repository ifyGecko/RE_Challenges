#include<iostream>
#include<cstdlib>

using namespace std;

class a{
public:
  int b;
  a(){ b=2019; };
};

int main(int argc, char** argv){
  a c;
  if(argc !=2){
    cout << "Usage: ./prog input" << endl;
    cout << "Hint: ./prog -h" << endl;
  }else if(argv[1]==string("-h")){
    cout << "Classes might need to undergo construction." << endl;
  }else{
    if(atoi(argv[1])==c.b){
      cout << "Score!" << endl;
    }else{
      cout << "Fail!" << endl;
    }
  }
  return 0;
}
