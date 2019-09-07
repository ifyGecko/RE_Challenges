#include<iostream>
#include<cstdlib>

using namespace std;

template<typename T>
bool check(T x, T y){
    return x==y;
}

int main(int argc, char** argv){
    if(argc==2 && string(argv[1])=="-h"){
        cout << "Don't worry the template of doom can't hurt you." <<endl;
    }else if(argc!=3){
        cout << "Usage: ./prog input input" << endl;
        cout << "Hint: ./prog -h" << endl;
    }else{
        int a(atoi(argv[1]));
        int b(atoi(argv[1]));
        if(check(a, b)){
            a*b<a+b?cout << "Score!" <<endl:cout << "Fail!" << endl;
        }
    }
    return 0;
}
