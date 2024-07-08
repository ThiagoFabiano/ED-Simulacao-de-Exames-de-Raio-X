#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "patient.h"

struct patient {
    int id;
    char* name;
    struct tm birthdate;
};

Patient* create_patient(int id, const char *name, struct tm *birthdate) {
    Patient *new_patient = (Patient*)malloc(sizeof(Patient));
    if (new_patient == NULL) {
        return NULL;
    }

    new_patient->id = id;
    new_patient->name = (char*)malloc((strlen(name) + 1) * sizeof(char));
    if (new_patient->name == NULL) {
        free(new_patient);
        return NULL;
    }

    strcpy(new_patient->name, name);
    new_patient->birthdate = *birthdate;

    return new_patient;
}

void destroy_patient(Patient *patient) {
    if (patient != NULL) {
        free(patient->name);
        free(patient);
    }
}

int get_patient_id(Patient *patient) {
    if (patient == NULL) {
        return -1;
    }
    return patient->id;
}

const char* get_patient_name(Patient *patient) {
    if (patient == NULL) {
        return NULL;
    }
    return patient->name;
}

struct tm* get_patient_birthdate(Patient *patient) {
    if (patient == NULL) {
        return NULL;
    }
    return &(patient->birthdate);
}
