#include <iostream>
#include <cstdlib>

class base{
 public:
  virtual int gen(){
    int a=13*2;
    int b=99+127;
    int c= 1084+1;
    return a+b+c;
  }
};

class deriv:public base{
 public:
  int gen(){
    base b;
    return b.gen()<<1;
  }
};

using namespace std;

int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(argv[1]==string("-h")){
    printf("The math in these methods are virtually irritating.\n");
  }else{
    base b;
    deriv d;
    d.gen()-b.gen()==atoi(argv[1])?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
