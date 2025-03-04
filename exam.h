#ifndef EXAM_H
#define EXAM_H

#include <time.h>
#include "patient.h"

typedef struct exam Exam;

// Cria um novo exame
Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time);
// Libera a memória alocada para a estrutura de exame
void destroy_exam(Exam *exam);
// Retorna a identificação única do exame
int get_exam_id(Exam *exam);
// Retorna a identificação única do paciente que realizou o exame
int get_exam_patient_id(Exam *exam);
// Retorna a identificação única do aparelho de raio-X utilizado no exame
int get_exam_rx_id(Exam *exam);
// Retorna o horário de realização do exame
struct tm* get_exam_time(Exam *exam);

#endif
