#include<stdio.h>
#include<string.h>
int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp("-h",argv[1])==0){
    printf("Take a look at values pushed on the stack. Don't forget ascii chars are stored as hex numbers.\n");
  }else{
    char psswd[5]={'e','a','s','y'};
    strcmp(psswd,argv[1])==0?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
