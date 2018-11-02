#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
int main(){
  mkdir("./dir1",0700);
  creat("./dir1/file10",0700);
  mkdir("./dir2",0700);
  creat("./dir2/file20",0700);
  creat("./file1",0700);
  symlink("./dir2/file20","./link1");
}
