#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct password{
  int a;
  char* b;
  char c;
};

int foo();
char* bar();
int check(struct password*, char** argv);

int main(int argc, char** argv){
  if(argc == 2 && strcmp(argv[1], "-h") == 0){
    printf("You may need to know about C structs.\n");
  }else if(argc != 4){
    printf("Usage: ./prog input input input\n");
    printf("Hint: ./prog -h\n");
  }else{
    struct password *p=(struct password*)malloc(sizeof(struct password));
    for(int i=0; i<10; ++i){
      p->a=foo();
    }
    p->b=bar();
    p->c=p->b[2]+1;
    if(check(p, argv)==0){
      printf("Score!\n");
    }else{
      printf("Fail!\n");
    }
    free(p);
  }
  return 0;
}

int foo(){
  static int a=0;
  return a++;
}

char* bar(){
  char a='a';
  char* s=(char*)malloc(sizeof(char*)*3);
  for(int i=0; i<3; ++i){
    s[i]=a+(i*5);
  }
  return s;
}

int check(struct password* p, char** argv){
  if(p->a==atoi(argv[1])){
    if(strcmp(p->b, argv[2])==0){
      if(p->c==*argv[3]){
        return 0;
      }
    }
  }
  return 1;
}
