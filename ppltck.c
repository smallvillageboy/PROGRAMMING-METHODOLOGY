#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 256

typedef struct {
	char student_id[40];
	char first_name[40];
	char last_name[40];
	char country[40]; 
	char birthday[11];
	char class_name[40];
	char gender[7];
	char line_data[MAX];
	float diem_tb;
} sinh_vien;
typedef struct {
	char student_id[40];
	char subject_id[40];
	float score;
} diem_so;
typedef struct {
    char  subject_id[40];
	char subject_name[40];
	char credit[40];
} mon_hoc;

void remove_last_character(char []);
void print_error_command();
int compare_date_month_year(char [], char []);

int read_file_dssv(sinh_vien []); 
int read_file_diem(diem_so []);
int read_file_dsmh(mon_hoc []);
void swap_element(sinh_vien [], int , int );
void check_command(char [], sinh_vien [], int, int);
void get_count(sinh_vien [], char [], int );
void get_country(sinh_vien [], char [], int );
void get_list(sinh_vien [], char [], int );
void get_sort(sinh_vien [], char [], int );
void get_top(sinh_vien [], diem_so[], char [], int, int);
sinh_vien sv[2000];
diem_so diem[2000];
mon_hoc mon[100];

int main() {
	

	int row_dssv = read_file_dssv(sv);
	int row_diem = read_file_diem(diem); 
	int row_mon = read_file_dsmh(mon); 
	
	FILE *f;
	f = fopen("log.txt", "w");
	fprintf(f, "%d %d %d", row_dssv, row_diem, row_mon);
	fclose(f);
    
	char cmd[MAX];
    fgets(cmd, sizeof(cmd), stdin);
    remove_last_character(cmd);
    check_command(cmd, sv,row_dssv, row_diem);
	
    return 0;
}

int read_file_dssv(sinh_vien sv[]) {
	FILE *fp;
   	fp = fopen("dssv.csv", "r"); 
	int row = -1;
	char* temp = malloc(sizeof(char)*MAX);

   	while (!feof(fp)) {
		char read_line[MAX];
		fgets(read_line, sizeof(read_line), fp); 
		remove_last_character(read_line);
		row++;

		if (row != 0) {  
			strcpy(sv[row].line_data, read_line); 
			int column = 0;
		   	temp = strtok(read_line, ",");
		   	strcpy(sv[row].student_id, temp);
			
		   	while (temp != NULL) {
			   		temp = strtok(NULL, ",");
					column++;
			   		if (column == 1) {
						strcpy(sv[row].first_name, temp);
					}
					else if (column == 2) {
							strcpy(sv[row].last_name, temp);
					}
					else if (column == 3) {
						strcpy(sv[row].gender, temp);
					}
					else if (column == 4) {
						strcpy(sv[row].birthday, temp);
					}
					else if (column == 5) {
						strcpy(sv[row].class_name, temp);
					}
					else if (column == 6) {
						strcpy(sv[row].country, temp);
					}
		   	}
		}	
	}
	free(temp);
	fclose(fp);
	return row;
}
int read_file_diem(diem_so diem[]) {
	FILE *fp;
	fp = fopen("diem.csv", "r");
	int row = -1;
	char *temp = malloc(sizeof(char)*MAX);
	while (!feof(fp)) {
		char read_line[MAX];
		fgets(read_line, sizeof(read_line), fp);
		remove_last_character(read_line);
		row++;

		if (row != 0) {
				int column = 0;
		   		temp = strtok(read_line, ",");
		   		strcpy(diem[row].student_id, temp); 

		   		while (temp != NULL) {
			   		temp = strtok(NULL, ",");
					column++;

			   		if (column == 1) {
						strcpy(diem[row].subject_id, temp);
					}
					else if (column == 2) {
						diem[row].score = atof(temp);
					}
		   		}
			}
	}
	free(temp);
	fclose(fp);
	return row;
}
int read_file_dsmh(mon_hoc mon[]) {
	FILE *fp; 
	fp = fopen("dsmh.csv", "r");
	int row= -1;
	char *temp = malloc(sizeof(char)*MAX);

	while (!feof(fp)) {
		char read_line[MAX];
		fgets(read_line, sizeof(read_line), fp);
	    remove_last_character(read_line);	
		row++;	

	    if (row != 0) {
	        int column = 0;
		    temp = strtok(read_line, ",");
            strcpy(mon[row].subject_id, temp);
		    while (temp != NULL) {
			    temp = strtok(NULL, ",");
			    column++;
			    if (column == 1)
				    strcpy(mon[row].subject_name, temp);
			    else if (column == 2)
				    strcpy(mon[row].credit, temp);
            }
		}
	} 
	free(temp);
	fclose(fp);
	return row;
}

void check_command(char cmd[], sinh_vien sv[], int row_dssv, int row_diem) {
	int length_of_cmd = strlen(cmd), i, first_space = -1, last_space = -2;
	for (i = 0; i < length_of_cmd; i++) {
		if (isalnum(cmd[i]) == 0) 
			if (cmd[i] != 32) {
				print_error_command();
				return;
			}
	}
	for (i = 0; i < length_of_cmd; i++) { 
		if (cmd[i] == 32) {
			first_space = i;
			break;
		}
	}
	for (i = length_of_cmd - 1; i >= 0; i--) { 
		if (cmd[i] == 32) {
			last_space = i;
			break;
		}
	}
	if (first_space != last_space) {
		print_error_command();
		return;
	}

    char cau_lenh[100], tham_so[100];
    memset(cau_lenh, '\0', sizeof(cau_lenh));
    memset(tham_so, '\0', sizeof(tham_so));
    strncpy(cau_lenh, cmd, first_space);
    strncpy(tham_so, cmd + first_space + 1, length_of_cmd - first_space);
	for (i = 0; i < strlen(cau_lenh); i++) {
		cau_lenh[i] = tolower(cau_lenh[i]);
	}
	for (i = 0; i < strlen(tham_so); i++) {
		tham_so[i] = tolower(tham_so[i]);
	}

	if (strcmp(cau_lenh, "count") == 0) {
		get_count(sv, tham_so, row_dssv);
		return;
	}   
	else if (strcmp(cau_lenh, "country") == 0) {
    	get_country(sv, tham_so, row_dssv);
		return;
    }
 	else if (strcmp(cau_lenh, "list") == 0) {
		get_list(sv, tham_so, row_dssv);
		return;
    }
	else if (strcmp(cau_lenh, "sort") == 0) {
    	get_sort(sv, tham_so, row_dssv);
		return;
    }
	else if (strcmp(cau_lenh, "top") == 0) {
		if (tham_so[0] == '0') {
			print_error_command();
			return;
		}
		for (i=0; i<strlen(tham_so); i++)
			if (isdigit(tham_so[i]) == 0) {
				print_error_command();
				return;
			}
		get_top(sv, diem, tham_so, row_dssv, row_diem);
		return;
	}
	else {
		print_error_command();
	}
}

void get_count(sinh_vien sv[], char tham_so[], int row_dssv) {
	int count = 0, i;
	tham_so[0] = toupper(tham_so[0]);
		
	if (strcmp(tham_so, "Male") == 0) {
		for (i = 1; i <= row_dssv; i++) {
			if (strcmp(sv[i].gender, "Male") == 0) {
				count++;
			}
		}
	}	
	else if (strcmp(tham_so, "Female") == 0) {
		for (i = 1; i <= row_dssv; i++)
			if (strcmp(sv[i].gender, "Female") == 0) {
				count++;
			}
		}
	FILE *gp;
	gp  = fopen("result.csv", "w");
	fprintf(gp, "%d", count);
	fclose(gp);
}
void get_country(sinh_vien sv[], char tham_so[], int row_dssv) {
	FILE *gp;
	gp = fopen("result.csv", "w");
    tham_so[0] = toupper(tham_so[0]);
	int index = -1, i;
	for (i = row_dssv; i >= 1; i--)
		if (strcmp(sv[i].country, tham_so) == 0) {
			index = i;
			break;
		}

	if (index != -1){
		for (i = 1; i <= index; i++) {
    		if (strcmp(tham_so, sv[i].country) == 0) {
    			fprintf(gp, (i == index)? "%s" : "%s\n", sv[i].line_data); 
    		}
    	}
	}
    fclose(gp); 
}
void get_list(sinh_vien sv[], char tham_so[], int row_dssv) {
	FILE *gp;
	gp = fopen("result.csv", "w");
	int index = -1, i;
	for (i = row_dssv; i >= 1; i--) {
		if (strcmp(sv[i].class_name, tham_so) == 0) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		for (i = 1; i <= index; i++) {
    		if (strcmp(tham_so, sv[i].class_name) == 0) {
    			fprintf(gp, (i == index)? "%s" : "%s\n", sv[i].line_data);
    		}
    	}
	} 	
    fclose(gp);
}
void get_sort(sinh_vien sv[], char tham_so[], int row_dssv) {
	int i, j;
	if (strcmp(tham_so, "asc") == 0 || strcmp(tham_so, "desc") == 0) {
		for (i = 1; i < row_dssv; i++) {
			for (j = i + 1; j <= row_dssv; j++) {
				if (strcmp(sv[i].first_name, sv[j].first_name) > 0) {
					swap_element(sv,i,j);
				}
				else if  (strcmp(sv[i].first_name, sv[j].first_name) == 0){
						if (compare_date_month_year(sv[i].birthday, sv[j].birthday) < 0) {
							swap_element(sv,i,j);	
						}
						else if (compare_date_month_year(sv[i].birthday, sv[j].birthday) == 0) {
							if (strcmp(sv[i].last_name, sv[j].last_name) > 0) {
								swap_element(sv,i,j);
							}
							else if (strcmp(sv[i].last_name, sv[j].last_name) == 0)
								if(strcmp(sv[i].country,sv[j].country) > 0) {
									swap_element(sv,i,j);
								}
						}
				}
			}	
		}
	}
	else {
		print_error_command();
		return;
	}

	if (strcmp(tham_so, "asc") == 0){
		FILE *gp = fopen("result.csv", "w");
    		for (i = 1; i <= row_dssv; i++) {
				fprintf(gp, (i == row_dssv)? "%s" : "%s\n", sv[i].line_data);
			}
		fclose(gp);
	}
	else if (strcmp(tham_so, "desc") == 0){
		FILE *gp = fopen("result.csv", "w");
    		for (i = row_dssv; i >=1; i--) {
				fprintf(gp, (i == 1)? "%s" : "%s\n", sv[i].line_data);
			}
		fclose(gp);
	}
}
void get_top(sinh_vien sv[], diem_so diem[], char tham_so[], int row_dssv, int row_diem) {
		int i, j;
		if (tham_so[0] == '0') {
			print_error_command();
			return;
		}
		
		for (i = 0; i < strlen(tham_so); i++)
			if (isdigit(tham_so[i]) == 0) {
				print_error_command();
				return;
			}

		float sum, count;
		for (j=1; j<=row_dssv; j++) {
			sv[j].diem_tb = 0;
			sum = 0.0;
			count = 0.0;
			for (i=1; i<=row_diem;i++) {
				if (strcmp(sv[j].student_id, diem[i].student_id) == 0) {
					sum += diem[i].score;
					count = count+1.0;
				}
			}
			if (count > 0)
				sv[j].diem_tb = sum/count;		
		}
		for (i = 1; i < row_dssv; i++) {
			for (j = i + 1; j <= row_dssv; j++)
				if (sv[i].diem_tb < sv[j].diem_tb) {
					swap_element(sv,i,j);
				}
		}
		
		int n = atoi(tham_so);
		if (n > row_dssv)
			n = row_dssv;
		FILE *gp = fopen("result.csv", "w");
		for (i = 1; i <= n; i++) {
			fprintf(gp, (i == n)? "%s":"%s\n", sv[i].line_data);
		}
		fclose(gp);
}


void swap_element(sinh_vien sv[], int i, int j) {
		sinh_vien tmp = sv[i];
		sv[i] = sv[j];
		sv[j]= tmp;
}
int compare_date_month_year(char birthday1[], char birthday2[]) {
	char date1[3], date2[3], month1[3], month2[3], year1[5],year2[5];
	memset(date1, '\0', sizeof(date1));
	memset(date2, '\0', sizeof(date2));
	memset(month1, '\0', sizeof(month2));
	memset(month2, '\0', sizeof(month2));
	memset(year1, '\0', sizeof(year1));
	memset(year2, '\0', sizeof(year2)); 
	
	strncpy(date1, birthday1, 2);
	strncpy(date2, birthday2, 2);
	strncpy(month1, birthday1 + 3, 2);
	strncpy(month2, birthday2 + 3, 2);
	strncpy(year1, birthday1 + 6, 4);
	strncpy(year2, birthday2 + 6, 4); 

	if (strcmp(year1, year2) != 0)
		return -strcmp(year1, year2);
	if (strcmp(month1, month2) != 0)
		return -strcmp(month1, month2);
	if (strcmp(date1, date2) !=0 )
		return -strcmp(date1, date2);
	return 0;
}
void remove_last_character(char st[]) {
	if (st[strlen(st)-1] == 10 || st[strlen(st)-1] == 13)
		   	st[strlen(st)-1] = '\0';
	if (st[strlen(st)-1] == 10 || st[strlen(st)-1] == 13)
		   	st[strlen(st)-1] = '\0';
}
void print_error_command() { 
	FILE *f;
	f = fopen("error.txt", "w");
	fprintf(f, "invalid command");
	fclose(f);
}