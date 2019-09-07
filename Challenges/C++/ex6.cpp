#include <iostream>

using namespace std;

int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(argv[1]==string("-h")){
    printf("Symbols are the mightiest of all human creations but, we can do with out.\n");
  }else{
    argv[1]==string("&&&&&&")?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
