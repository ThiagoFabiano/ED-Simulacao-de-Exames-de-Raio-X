# ED-Simulacao-de-Exames-de-Raio-X
Trabalho de programação referente a matéria de Estrutura de dados: Simulação de Realização de Exames de Raio-X (parte 1)
Alunos: Thiago Fabiano e Livia Hombre

Este projeto simula a realização de exames de raio-X de tórax em hospital, com ênfase na organização da fila.
A cada momento, pacientes chegam ao hospital e exames são realizados mediante disponibilidade de aparelhos. A IA sugere
diagnósticos preliminares e os exames são encaminhados para laudo de acordo com a disponibilidade
da equipe de radiologistas.

O foco principal é na implementação de dois Tipos Abstratos de Dados (TADs): `Patient` e `Exam`.

# Estrutura do Projeto

- patient.h: Definição do TAD `Patient` e suas funções associadas.
- patient.c: Implementação das funções do TAD `Patient`.
- exam.h: Definição do TAD `Exam` e suas funções associadas.
- exam.c: Implementação das funções do TAD `Exam`.
- main.c: Função principal para testar os TADs `Patient` e `Exam`.
- Makefile: Script para facilitar a compilação do projeto.

# Estrutura do Código:
 - 'Patient': Representa um paciente no sistema, possui id (identificação única), name (nome do paciente) e bithdate (data de nascimento),
   - Funções:
     - Patient* create_patient(int id, const char *name, struct tm *birthdate): Cria um paciente no sistema
     - void destroy_patient(Patient *patient): Passando como parâmetro o paciente, está função exclui do sistema, (libera a memória)
     - int get_patient_id(Patient* patient): Função utilizada para obter o id do paciente
     - const char* get_patient_name(Patient* patient): Função usada para obter o nome do paciente.

- 'Exam': Representa um exame realizado por um paciente, possui id, patient id (identificação do paciente que realizou o exame), rx_id (identificação do aparelho de raio x), time (horário de realização do exame)
  - Funções:
    - Exam* create_exam(int id, int patient_id, int rx_id, struct tm *time): Recebe como parametro seu id, o id do paciente o id do aparelho de raio-x e o horário que foi realizado, assim criando um exame no sistema.
    - void destroy_exam(Exam *exam): Exclui (libera memória) do exame
    - int get_exam_id(Exam *exam): Função utilizada para obter a identificação de um exame
    - int get_exam_patient_id(Exam *exam): Função utilizada para obter a identificação do paciente que realizou o exame
    - int get_exam_rx_id(Exam *exam): Função utilizada para obter a identificação da maquina que realizou o exame
    - struct tm* get_exam_time(Exam *exam): Função utilizada para obter o horario em que o exame foi realizado

# Testando a implementação
O código fornecido em main.c cria um paciente e um exame, e imprime suas informações., para testar o funcionamento do programa descrito.
