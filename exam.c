#include "exam.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct exam {
  int id;
  int patient_id;
  int rx_id;
  struct tm *time;
};

Exam *create_exam(int id, int patient_id, int rx_id, struct tm *time) {
  Exam *exame_novo = (Exam *)malloc(sizeof(Exam));
  if (exame_novo == NULL) {
    return NULL;
  }

  exame_novo->id = id;
  exame_novo->patient_id = patient_id;
  exame_novo->rx_id = rx_id;
  exame_novo->time = (struct tm *)malloc(sizeof(struct tm));
  if (exame_novo->time == NULL) {
    free(exame_novo);
    return NULL;
  }
  *exame_novo->time = *time;

  return exame_novo;
}

void destroy_exam(Exam *exam) {
  if (exam != NULL) {
    free(exam->time);
    free(exam);
  }
}

int get_exam_id(Exam *exam) {
  if (exam == NULL) {
    return -1;
  }
  return exam->id;
}

int get_exam_patient_id(Exam *exam) {
  if (exam == NULL) {
    return -1;
  }
  return exam->patient_id;
}

int get_exam_rx_id(Exam *exam) {
  if (exam == NULL) {
    return -1;
  }
  return exam->rx_id;
}

struct tm *get_exam_time(Exam *exam) {
  if (exam == NULL) {
    return NULL;
  }
  return exam->time;
}

