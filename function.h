#include <stdio.h>
#include "datatype.h" 


void loadStudents(struct student students[], int *size, FILE *file);
void saveStudents(struct student students[], int size, FILE *file);
void printStudents(struct student students[], int size);
void addStudent(struct student students[], int *size, FILE *file);
void updateStudent(struct student students[], int size);
void deleteStudent(struct student students[],int *size, FILE *file);
void sortStudent(struct student students[], int size);
void searchNameStudent(struct student students[], int size);



void loadTeachers(struct teacher teachers[], int *sizeGV, FILE *file);
void saveTeachers(struct teacher teachers[], int sizeGV, FILE *file);
void printTeachers(struct teacher teachers[], int sizeGV);
void addTeacher(struct teacher teachers[], int *sizeGV, FILE *file);
void updateTeacher(struct teacher teachers[], int sizeGV);
void deleteTeacher(struct teacher teachers[],int *sizeGV, FILE *fileTeacher);
void searchNameTeacher(struct teacher teachers[], int sizeGV);



void loadClassrooms(struct classroom classrooms[], int *sizeCL, FILE *fileCL);
void saveClassrooms(struct classroom classrooms[], int sizeCL, FILE *fileCL);
void addClassroom(struct classroom classrooms[], int *sizeCL, struct teacher teachers[], int sizeGV);
void printClassrooms(struct classroom classrooms[], int sizeCL);
void updateClassroom(struct classroom classrooms[], int sizeCL);
void deleteClassroom(struct classroom classrooms[], int *sizeCL);
