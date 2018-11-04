#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main(){
  mkdir("./dir1",0700);
  int filedesc = open("./dir1/file10",O_CREAT,0700);
  close(filedesc);
  mkdir("./dir2",0700);
  filedesc = open("./dir2/file20",O_CREAT,0700);
  close(filedesc);
  filedesc=open("./file1",O_CREAT,0700);
  close(filedesc);
  symlink("./dir2/file20","./link1");
}
