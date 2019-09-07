#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp("-h",argv[1])==0){
    printf("Recall hex 0x30 is ascii digit 0, so 0x30+1 is ascii digit 1.\n");
  }else{
    char *psswd=malloc(sizeof(char)*10+1);
    for(int i=0;i<10;i++){
		psswd[i]=i+0x30;
    }
    psswd[10]='\0';
    strcmp(psswd,argv[1])==0?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
