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
    cout << "Usage: ./prog input\n";
    cout << "Hint: ./prog -h\n";
  }else if(string(argv[1]) == "-h"){
    cout << "Evil Nix version of ex6.\n";
  }else{
    string(argv[1])==buzz()?cout << "Score!\n":cout << "Fail!\n";
  }
  return 0;
}
