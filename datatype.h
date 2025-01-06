#include <stdbool.h>

struct student{
    char studentId[10];
    char classroomId[10];
    char name[20];
    char email[30];
    char phone[20];
    char password[20];
};

struct classroom{
	char nameClass[10];
	char idTeacher[10];
	char idClass[10];
	struct student students[];
	
};

struct teacher{
	char idTeacher[10];
	char idClassroom[10];
	char nameTeacher[20];
	char email[30];
	char phone[20];
	struct classroom classrooms[];
};
