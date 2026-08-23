#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
  printf(1, "Starting trace test...\n");
  
  // Turn tracing on
  trace(1);
  
  // These system calls should be logged to the console
  getpid();
  sleep(1);
  
  // Turn tracing off
  trace(0);
  
  // This system call should NOT be logged
  getpid();

  printf(1, "Test complete.\n");
  exit();
}