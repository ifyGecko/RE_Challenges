#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: env var=foo ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp("-h",argv[1])==0){
    printf("Be aware of enviroment variables!\n");
  }else{
    char* stuff[][3]={{"eggs","potato","chicken"},
		  	{"cheese","bacon","sausage"},
		  	{"honeydew","banana","pizza"}};
    char* env_var;
    strcmp((env_var=getenv("ex6"))!=NULL?env_var:" ",stuff[1][1])==0?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
