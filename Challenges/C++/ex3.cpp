#include<iostream>
#include<cstdlib>

using namespace std;

template<typename T>
bool check(T x, T y){
    return x==y;
}

int main(int argc, char** argv){
    if(argc==2 && string(argv[1])=="-h"){
        cout << "Don't worry the template of doom can't hurt you.\n";
    }else if(argc!=3){
        cout << "Usage: ./prog input input\n";
        cout << "Hint: ./prog -h\n";
    }else{
        int a(atoi(argv[1]));
        int b(atoi(argv[2]));
        if(check(a, b)){
            a*b<a+b?cout << "Score!\n":cout << "Fail!\n";
        }else{
            cout << "Fail!\n";   
        }
    }
    return 0;
}
