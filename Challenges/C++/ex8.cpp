#include<iostream>

using namespace std;

char* foo(){
  return (char*)"<>";
}

char* bar(){
  return foo();
}

char* fizz(){
  return bar();
}

char* buzz(){
  for(int i=0;i<10000;++i){
    int x=i<<1;
  }
  foo();
  bar();
  foo();
  bar();
  return fizz();
}

int main(int argc, char** argv){
  if(argc!=2){
    cout << "Usage: ./prog input" << endl;
    cout << "Hint: ./prog -h" << endl;
  }else if(string(argv[1]) == "-h"){
    cout << "Evil Nix version of ex6." << endl;
  }else{
    string(argv[1])==buzz()?cout << "Score!" << endl:cout << "Fail!" << endl;
  }
  return 0;
}
