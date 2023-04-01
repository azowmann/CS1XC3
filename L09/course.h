
/**
 * \brief A brief description
 *
 * contains course struct and functions to be used
 */



/**
 * @file course.h
 * @author Alan
 * @date March31
 * @brief struct and functions
 */



#include "student.h"
#include <stdbool.h>
 
typedef struct _course 
{
  char name[100];
  char code[10];
  Student *students;
  int total_students;
} Course;

void enroll_student(Course *course, Student *student);
void print_course(Course *course);
Student *top_student(Course* course);
Student *passing(Course* course, int *total_passing);

