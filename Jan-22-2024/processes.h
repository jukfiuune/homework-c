#ifndef PROCESSES_H
#define PROCESSES_H
#define MAX_PROCESSES 5
struct Process {
    unsigned int pid;
    char name[30];
};
extern struct Process processes[MAX_PROCESSES];
extern int processescount;
static unsigned int nextprocessid();
unsigned int createnewprocess(char *name);
void stopprocess(unsigned int id);
#endif