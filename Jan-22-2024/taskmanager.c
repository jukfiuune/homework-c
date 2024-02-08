#include <stdio.h>
#include <stdlib.h>
#include "processes.h"

int main() {
  // Инициализираме променливите
  int processescount = 0;

  int choice;
  while (1) {
    // Извеждаме менюто
    printf("1. Create new process\n2. List all processes\n3. Stop process\n4. Exit\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1: {
        // Създаваме нов процес
        char name[30];
        printf("Enter process name: ");
        scanf("%s", name);
        int pid = createnewprocess(name);
        if (pid == 0) {
          printf("Failed to create process.\n");
        } else {
          printf("Created process with PID %d.\n", pid);
        }
        break;
      }
      case 2: {
        // Извеждаме списък със всички процеси
        for (int i = 0; i < processescount; i++) {
          printf("PID: %d, Name: %s\n", processes[i].pid, processes[i].name);
        }
        break;
      }
      case 3: {
        // Спираме процес
        int pid;
        printf("Enter PID to stop: ");
        scanf("%d", &pid);
        stopprocess(pid);
        break;
      }
      case 4: {
        // Излизаме от програмата
        return 0;
      }
      default: {
        printf("Invalid choice.\n");
        break;
      }
    }
  }

  return 0;
}
