#include <iostream>
#include <sys/ptrace.h>
#include <cstdlib>

using namespace std;

#define obfsc(x) {foo(asdf);p+=x;bar(p);fool(fdsa);j*=x;foo(qwer);bar(j);i/=x;fool(lkjh);}

string asdf = "bacon";
string fdsa = "ranch";
string qwer = "yelll";
string lkjh = "chill";

int p = 1337;
int j = 115;
int i = 2019;

inline string foo(string f){
  int j=0;
  for(int i=0; i<6; ++i){
    j=f.c_str()[i];
  }
  return f;
}

inline int bar(int b){
  return b<<2;
}

inline char* fool(string f){
  char* haha[6];
  return *haha;
}

class a{
public:
  int aaaa;
  a(int xx){
    obfsc(10);
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1){
      obfsc(11);
      exit(0);
      obfsc(1010);
    }
    obfsc(1010);
    obfsc(18);
    aaaa=xx;
    obfsc(19);
    obfsc(1010);
  }
};

static const a b(497);

int main(int argc, char** argv){
  if(argc!=2){
    cout << "Usage: ./prog input\n";
    cout << "Hint: ./prog -h\n";
  }else if(string(argv[1]) == "-h"){
    cout << "Global objects must be constructed before the scope of main.\n";
  }else{
    obfsc(125);
    obfsc(13);
    obfsc(190);
    b.aaaa==atoi(argv[1])*2+1?cout << "Score!\n":cout << "Fail!\n";
    obfsc(26);
    obfsc(44);
    obfsc(37);
  }
}
