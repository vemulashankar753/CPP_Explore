#include <stdio.h>
#include <sys/types.h>
#include <signal.h>


void signal_int(int sig_num)
{
  printf ("Signal interrupt received\n");
  signal(SIGINT, signal_int);
}
void signal_brk(int sig_num)
{
  printf ("Signal break received\n");
  signal(SIGBREAK, signal_brk);
  raise(SIGABRT);
}
void signal_term(int sig_num)
{
  printf ("Signal term received\n");
  signal(SIGTERM, signal_term);
}
void signal_abort(int sig_num)
{
  printf ("Signal abort received\n");
  signal(SIGABRT, signal_abort);
}
int main(int argc, char* argv[])
{
  signal(SIGINT, signal_int);
  signal(SIGBREAK, signal_brk);
  signal(SIGTERM, signal_term);
  signal(SIGABRT, signal_abort);
  
  while(1){
    ;
  }
}
