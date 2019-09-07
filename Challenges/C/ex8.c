#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp("-h",argv[1])==0){
    printf("Isn't there only one version of ELF, how could it not be 1? Maybe you should patch the binary?\n");
  }else{
    unsigned char* version;
    FILE* fp=fopen("ex8", "r");
    fseek(fp,6,SEEK_SET);
    fread(version,1,1,fp);
    (int)*version!=1&&*argv[1]==0x30?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
