#include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <time.h>
  #include "exam.h"

  struct exam {
      int id;
      int patient_id;
      int rx_id;
      struct tm* time;
  };

  Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time) {
      Exam *new_exam = (Exam*)malloc(sizeof(Exam));
      if (new_exam == NULL) {
          return NULL;
      }

      new_exam->id = id;
      new_exam->patient_id = patient_id;
      new_exam->rx_id = rx_id;
      new_exam->time = (struct tm*)malloc(sizeof(struct tm));
      if (new_exam->time == NULL) {
          free(new_exam);
          return NULL;
      }
      memcpy(new_exam->time, time, sizeof(struct tm));

      return new_exam;
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

  struct tm* get_exam_time(Exam *exam) {
      if (exam == NULL) {
          return NULL;
      }
      return exam->time;
  }
