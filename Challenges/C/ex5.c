#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
  if(argc==2&&strcmp("-h",argv[1])==0){
    printf("This one is kinda like ex1 and ex2 combined.\n");
  }else if(argc!=7){
    printf("Usage: ./prog input input input input input input\n");
    printf("Hint: ./prog -h\n");
  }else{
    int psswd[6]={0x47,0x60,0x77,0x77,0x6e,0x71};
    for(int i=1;i<7;i++){
      if(*argv[i]!=psswd[i-1]+1){
        printf("Fail!\n");
        return 0;
      }
    }
    printf("Score!\n");
  }
  return 0;
}
