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
    cout << "Usage: ./prog input\n";
    cout << "Hint: ./prog -h\n";
  }else if(argv[1]==string("-h")){
    cout << "Classes might need to undergo construction.\n";
  }else{
    atoi(argv[1])==c.b?cout << "Score!\n":cout << "Fail!\n";
  }
  return 0;
}
