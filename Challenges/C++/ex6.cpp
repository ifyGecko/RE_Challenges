#include <iostream>

using namespace std;

int main(int argc, char** argv){
  if(argc!=2){
    cout << "Usage: ./prog input\n";
    cout << "Hint: ./prog -h\n";
  }else if(argv[1]==string("-h")){
    cout << "Symbols are the mightiest of all human creations but, we can do with out.\n";
  }else{
    argv[1]==string("&&&&&&")?cout << "Score!\n":cout << "Fail!\n";
  }
  return 0;
}
