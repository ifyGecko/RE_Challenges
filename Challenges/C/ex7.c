#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<openssl/md5.h>
int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(strcmp("-h",argv[1])==0){
    printf("Don't put to much effort in this one, just brute force the hash!\n");
  }else{
    unsigned char hash[16]={0xad,0xd9,0xe8,0x99,0xe2,0x39,0x9e,0xc0,0x9a,0x4c,0xc8,0x8d,0x25,0x3c,0x8b,0x99};
    unsigned char digest[16];
    MD5_CTX context;
    MD5_Init(&context);
    MD5_Update(&context,argv[1],strlen(argv[1]));
    MD5_Final(digest,&context);
    strncmp(digest,hash,16)==0?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
