/*
  Small example of file input
*/
#include <stdio.h>

int main() {
  char mystring[100];
  FILE* fd = fopen("loren.txt", "rw"); // file name, current folder

  // while (fscanf(fd, "%[^\n]\n", mystring) != EOF) {
  //   printf("line: %s\n", mystring);
  // }
  
  // rewind(fd);
  // while (fscanf(fd, "%s", mystring) != EOF) { // empty characters separate strings
  //   printf("string: %s\n", mystring);
  // }
  // rewind(fd);
  int a, b;
  while (fscanf(fd, "%d, %d", &a, &b) != EOF) { // formatted input
    printf("integers: %d and %d\n", a, b);
  }
  // rewind(fd);
  // while (fgets (mystring, 10, fd)!=NULL) { 
  //   printf("fgest line: %s", mystring); // includes \n character
  // }
  fclose(fd);
}