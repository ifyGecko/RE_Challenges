#include <sys/ptrace.h>
#include <iostream>

using namespace std;

int main(int argc, char** argv){
  if(argc!=2){
    cout << "Usage: ./prog input\n";
    cout << "Hint: ./prog -h\n";
  }else if(argv[1]==string("-h")){
    cout << "I bet a debugger would help, maybe even a quick binary patch.\n";
  }else{
    ptrace(PTRACE_TRACEME, 0, 1, 0)==-1&&argv[1]==string("@@@@@@@@")?cout<<"Score!\n":cout<<"Fail!\n";
  }
  return 0;
}
