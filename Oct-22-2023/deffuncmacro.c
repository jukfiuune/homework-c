#include <stdio.h>

#define COMMAND(NAME, TYPE) TYPE ## _ ## NAME ## _command

#define DEFINE_COMMAND(NAME, TYPE) void COMMAND(NAME, TYPE)(void)

DEFINE_COMMAND(quit, external) {
    printf("External Quit Command\n");
}

DEFINE_COMMAND(help, internal) {
    printf("Internal Help Command\n");
}

void main() {
    // Call the defined functions.
    external_quit_command();
    internal_help_command();
}
