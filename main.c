#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"p.h"
int main() {
	char choice;
	scanf("%d", &choice);
	while(choice != '4') {
		printf("\n\t\tStudent Library System\n");
		printf("\t\t**********************\n");
		printf("\n\t1.Membership\n");
		printf("\t 2. Add/Issue/Return Books\n");
		printf("\t 3. List of Books\n");
		
		printf(" \n\t  Enter your choice : ");
		

		switch(choice) {
		  case'1':
			membership();
			break;
		  case'2':
			issue_return();
			break;

		  case'3':
			list_of_books();
			break;

		 

		  default:
			
			break;
		}
	}
}
