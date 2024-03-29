/**
 * \brief A brief description
 *
 * contains struct for student and functions to be used	
 *
 */

/**
 * @file student.h
 * @author Alan
 * @date March31
 * @brief contains struct for student and functions to be used
 */

 
typedef struct _student 
{ 
  char first_name[50];
  char last_name[50];
  char id[11];
  double *grades; 
  int num_grades; 
} Student;

void add_grade(Student *student, double grade);
double average(Student *student);
void print_student(Student *student);
Student* generate_random_student(int grades); 
