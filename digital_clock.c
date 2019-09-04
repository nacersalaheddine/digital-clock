#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
#include "ascii_digits.h"

/*

Code Writter @home by "Salah eddine nacer" 
Software engineer & Web Developer
github.com/nacersalaheddine/digital_clock_console_pgm
Contact Me@: 
nacersalaheddine05@gmail.com
*/

void print_ascci_digits(
	char colon[][cols_number],
	char hours_first_digit[][cols_number],char hours_second_digit[][cols_number],
	char minutes_first_digit[][cols_number],char minutes_second_digit[][cols_number],
	char seconds_first_digit[][cols_number],char seconds_second_digit[][cols_number]){
	
	int rows = 0;
	int k1,k2;//for colons
	int i,j,l,m,n,o;//for digits
	int box = 0;
	
	
	/********************************************************/
	printf("\n|");
	while(box < 100){
			printf("-");
			box++;
	}
	printf("|\n\n");
	/********************************************************/
	
	while(rows < rows_number){
		i = 0;j = 0,k1=0,k2=0,l = 0,m = 0,n=0,o=0;
		while(hours_first_digit[rows][i] != '\0' ){
				printf("%c", hours_first_digit[rows][i]);
				i++;
		}
		
		while(hours_second_digit[rows][j] != '\0'){
				printf("%c", hours_second_digit[rows][j]);
				j++;		
		}
		
		
		while(colon[rows][k1] != '\0'){
				printf("%c", colon[rows][k1]);
				k1++;		
		}
		
		while(minutes_first_digit[rows][l] != '\0' ){
				printf("%c", minutes_first_digit[rows][l]);
				l++;
		}
		
		while(minutes_second_digit[rows][m] != '\0'){
				printf("%c", minutes_second_digit[rows][m]);
				m++;		
		}
		
		while(colon[rows][k2] != '\0'){
				printf("%c", colon[rows][k2]);
				k2++;		
		}
		
		while(seconds_first_digit[rows][n] != '\0' ){
				printf("%c", seconds_first_digit[rows][n]);
				n++;
		}
		
		while(seconds_second_digit[rows][o] != '\0'){
				printf("%c", seconds_second_digit[rows][o]);
				o++;		
		}
		
		
		printf("\n");
		
		rows++;
	}
	
	/********************************************************/
	box = 0;
	printf("\n|");
	while(box < 100){
			printf("-");
			box++;
	}
	printf("|\n\n");
	/********************************************************/	
}


int main(){

	clock_t t;
    double cpu_time_used;
	
	
    struct tm *tmp;
    time_t s;
    s = time(NULL);
    tmp= localtime(&s);
	
	int seconds,minutes,hours;
	system("color 0b");
	while(1){

        t = clock();
		system("cls");		
		s = time(NULL);
		tmp= localtime(&s);
		seconds = tmp->tm_sec;
		minutes = tmp->tm_min;
		hours   = tmp->tm_hour;
		
		print_ascci_digits(
		elements[10].element,
		elements[hours/10].element,elements[hours%10].element
		,elements[minutes/10].element,elements[minutes%10].element,
		elements[seconds/10].element,elements[seconds%10].element);
		
		t = clock() - t;
		cpu_time_used = ((double) (t)) / CLOCKS_PER_SEC;

		Sleep(1000 - (cpu_time_used*100));

	}

	return 0;
}

