#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char *argv[]){
    struct student students[100];
    struct teacher teachers[100];
    struct classroom classrooms[10];
    int size = 0;
    int sizeGV = 0;
    int sizeCL = 0;
    int choose;
    FILE *file = fopen("students.bin", "rb");
    loadStudents(students, &size, file);
    FILE *fileTeacher = fopen("teacher.bin", "rb");
    loadTeachers(teachers, &sizeGV, fileTeacher);
    FILE *fileCL = fopen("classroom.bin", "rb");
    loadClassrooms(classrooms, &sizeCL, fileCL);
    char email[50];
    char passWord[20];
    do{
    	printf("\n\t\t\t\t\t\t1.Login Admin\n");
    	printf("\t\t\t\t\t\t2.thoat!!!\n");
    	printf("\t\t\t\t\t\tlua chon cua ban: ");
    	scanf("%d",&choose);
    	getchar();
    	switch(choose){
    		case 1:
    			do{
    				printf("\n\t\t\t\t\t\t***LOGIN***");
    				printf("\n\t\t\t\t\t\tNhap email: ");
    				fgets(email,sizeof(email),stdin);
    				email[strcspn(email, "\n")] = '\0';
    				printf("\t\t\t\t\t\tNhap password: ");
    				fgets(passWord,sizeof(passWord),stdin);
    				passWord[strcspn(passWord, "\n")] = '\0';
    				if(strcmp(email,"1") == 0 && strcmp(passWord,"1") == 0){
    					printf("\t\t\t\t\t\tDang nhap thanh cong!!!\n");
					}else{
						printf("\n\t\t\t\t\t\tSai mk hoac tk, vui long dang nhap lai!!!");
						continue;
					}
    				printf("\n\t\t\t\t\t\t***ADMIN***\n");
    				printf("\t\t\t\t\t\t1.QUAN LI SINH VIEN\n");
    				printf("\t\t\t\t\t\t2.QUAN LI LOP HOC\n");
    				printf("\t\t\t\t\t\t3.QUAN LI GIAO VIEN\n");
    				printf("\t\t\t\t\t\t4.THOAT!!!\n");
    				printf("\t\t\t\t\t\tlua chon cua ban: ");
    				scanf("%d",&choose);
    				getchar();
    				switch(choose){
    					case 1:
    						do{
                    printf("\n\t\t\t\t\t***Student Management System Using C***\n");
                    printf(" ");
                    printf("\t\t\t\t\t\tSTUDENT MENU\n");
                    printf("\t\t\t\t\t========================\n");
                    printf("\t\t\t\t\t[1] In danh sach sinh vien.\n");
                    printf("\t\t\t\t\t[2] Them sinh vien.\n");
                    printf("\t\t\t\t\t[3] Sua sinh vien.\n");
                    printf("\t\t\t\t\t[4] Xoa sinh vien.\n");
                    printf("\t\t\t\t\t[5] Tim kiem sinh vien theo ten.\n");
                    printf("\t\t\t\t\t[6] Sap xep danh sach sinh vien theo ten.\n");
                    printf("\t\t\t\t\t[0] Thoat chuong trinh!!!.\n");
                    printf("\t\t\t\t\t========================\n");
                    printf("\t\t\t\t\tlua chon cua ban: ");
                    scanf("%d",&choose);
                    getchar(); 
                    switch(choose){
                        case 1:
                            printStudents(students, size);
                            break;
                        case 2:
                            addStudent(students, &size, file);
                            break;
                        case 3:
                        	updateStudent(students, size);
                            break;
                        case 4:
                        	deleteStudent(students, &size, file);
                            break;
                        case 5:
                        	searchNameStudent(students, size);
                        	
                            break;
                        case 6:
                        	sortStudent(students, size);
                        	break;
                    }
                }while(choose!=0);
    						break;
    					case 2:
    						do{
    							printf("\n\t\t\t\t\t***Class Management System Using C***");
    							printf(" ");
    							printf("\n\t\t\t\t\t\tCLASS MENU\n");
    							printf("\t\t\t\t\t========================\n");
                                printf("\t\t\t\t\t[1] In danh sach lop hoc.\n");
                    			printf("\t\t\t\t\t[2] Them lop hoc.\n");
                    			printf("\t\t\t\t\t[3] Sua thong tin lop hoc.\n");
                    			printf("\t\t\t\t\t[4] Xoa lop hoc.\n");
                    			printf("\t\t\t\t\t[5] Chi tiet lop hoc.\n");
                    			printf("\t\t\t\t\t[6] Them sinh vien vao lop hoc.\n");
                    			printf("\t\t\t\t\t[7] Xoa sinh vien khoi lop hoc.\n");
                    			printf("\t\t\t\t\t[8] Xap xep danh sach lop hoc.\n");
                    			printf("\t\t\t\t\t[0] Thoat chuong trinh!!!.\n");
                    			printf("\t\t\t\t\t========================\n");
    							printf("\t\t\t\t\tlua chon cua ban: ");
    							scanf("%d",&choose);
    							getchar();
    							switch(choose){
    								case 1:
    									printClassrooms(classrooms, sizeCL);
    									break;
    								case 2:
    									addClassroom(classrooms, &sizeCL, teachers, sizeGV);
    									break;
    								case 3:
    									updateClassroom(classrooms, sizeCL); 
    									break;
    								case 4:
    									deleteClassroom(classrooms, &sizeCL);
    									break;
    								case 5:
    									break;
								}
							}while(choose!=0);
    						break;
    					case 3:
    						do{
    							printf("\n\t\t\t\t\t***Teacher Management System Using C***");
    							printf(" ");
    							printf("\n\t\t\t\t\t\tTEACHER MENU\n");
    							printf("\t\t\t\t\t========================\n");
                                printf("\t\t\t\t\t[1] In danh sach giao vien.\n");
                    			printf("\t\t\t\t\t[2] Them giao vien.\n");
                    			printf("\t\t\t\t\t[3] Sua thong tin giao vien.\n");
                    			printf("\t\t\t\t\t[4] Xoa giao vien.\n");
                    			printf("\t\t\t\t\t[5] Tim kiem giao vien theo ten.\n");
                    			printf("\t\t\t\t\t[6] Them lop cho giao vien.\n");
                    			printf("\t\t\t\t\t[0] Thoat chuong trinh!!!.\n");
                    			printf("\t\t\t\t\t========================\n");
    							printf("\t\t\t\t\tlua chon cua ban: ");
    							scanf("%d",&choose);
    							getchar();
    							switch(choose){
    								case 1:
    									printTeachers(teachers, sizeGV);
    									break;
    								case 2:
    									addTeacher(teachers, &sizeGV, file);
    									break;
    								case 3:
    									updateTeacher(teachers, sizeGV);
    									break;
    								case 4:
    									deleteTeacher(teachers, &sizeGV, fileTeacher);
    									break;
    								case 5:
    									searchNameTeacher(teachers, sizeGV);
    									break;
    								case 6:
    									break;
								}
							}while(choose!=0);
    						break;
    					case 4:
    						break;
					}
				}while(choose!=4);
    			break;
    		case 2:
    			break;
		}
	}while(choose!=2);
    return 0;
}

