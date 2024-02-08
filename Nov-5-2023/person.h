#ifndef PERSON_H
#define PERSON_H

#define MAX_NAME_LENGTH 20

struct Person {
    char first_name[MAX_NAME_LENGTH];
    char middle_name[MAX_NAME_LENGTH];
    char last_name[MAX_NAME_LENGTH];
    int birth_year;
};

#endif
