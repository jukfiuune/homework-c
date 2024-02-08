#include "processes.h"
#include <stdio.h>
#include <string.h>

static unsigned int nextprocessid() {
  static int id = 1;
  return id++;
}

unsigned int createnewprocess(char *name) {
  if (processescount >= MAX_PROCESSES) {
    printf("Maximum number of processes reached. Stop one to create a new one.\n");
    return 0;
  }

  struct Process process;
  process.pid = nextprocessid();
  strcpy(process.name, name);

  processes[processescount] = process;
  processescount++;

  return process.pid;
}

void stopprocess(unsigned int id) {
  for (int i = 0; i < processescount; i++) {
    if (processes[i].pid == id) {
      for (int j = i; j < processescount - 1; j++) {
        processes[j] = processes[j + 1];
      }
      processescount--;
      return;
    }
  }
}
