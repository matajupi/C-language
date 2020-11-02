#ifndef __PEOPLE_H__
#define __PEOPLE_H__

#include <stdio.h>
#include <string.h>

typedef struct {
    char name[64];
    int age;
    int gender;
} People;

// Input personal data
extern void InputPeople(People *data);

// Output personal data
extern void ShowPeople(People data);

#endif
