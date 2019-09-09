#include <iostream>

using namespace std;

char* make(){
  return (char*)"@@@&&&@@@";
}
  
char* generator(){
  return make();
}

int main(int argc, char** argv){
  if(argc!=2){
    cout << "Usage: ./prog input\n";
    cout << "Hint: ./prog -h\n";
  }else if(argv[1]==string("-h")){
    cout << "Escape these simple characters.\n";
  }else{
    argv[1]==string(generator())?cout << "Score!\n":cout << "Fail!\n";
  }
  return 0;
}
