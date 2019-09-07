#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char** argv){
  if(argc==2&&strcmp("-h",argv[1])==0){
    printf("This string is built with some simple math operations, 123+123=246, on chars converted to ints, 0x32->2.\n");
  }else if(argc!=3){
    printf("Usage: ./prog input input\n");
    printf("Hint: ./prog -h\n");
  }else{
    int x=1012;
    int y=325;
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    a-b==x+y?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
