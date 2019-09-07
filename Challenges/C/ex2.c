#include<stdio.h>
#include<string.h>
int main(int argc,char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp("-h",argv[1])==0){
    printf("A Caesar Cipher is easy to apply to the ascii table.\n");
  }else{
    char psswd[]="BcjuFbtz";
    for(int i=0;i<8;i++){
      if(argv[1][i]+1!=psswd[i]){
        printf("Fail!\n");
        return 0;
      }
    }
    printf("Score!\n");
  }
  return 0;
}
