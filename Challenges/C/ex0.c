#include<stdio.h>
#include<string.h>
int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp(argv[1],"-h")==0){
    printf("This string is in plain text, use a tool that will display human readable text stored inside of binary files.\n");
  }else{
    strcmp("password",argv[1])==0?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
