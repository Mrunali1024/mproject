	// LIBRARY MANAGEMENT//


#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include"p.h"

int membership() {
	char choice;
	while(choice!='4') {

		printf("\n\n\t\t0.Membership\n");
		printf("\t\t************\n");
		printf("\n\t1.Add Members\n");
		printf("\t2. Delete Members\n");
		printf("\t3. Modify Members\n");
		printf("\n\t   Enter your choice : ");
		
		
		switch(choice) {
		   	case '1':
				 printf("enter student\n");
				
				  break;
		   	case '2':
				  printf("delete student\n");
				  break;

		   	case '3':
				  printf("modify student\n");
				  break;
		   	default:
				break;
		}
	}
 }

void issue_return() {
	char choice;
	while(choice != '4') {

		printf("\n\n\t\tAdd/Issue/Return Books\n");
		printf("\t\t**********************\n");
		printf("\n\t1. Add Books\n");
		printf("\t2. Issue Books\n");
		printf("\t3. Return Books\n");
		
		printf("\n\t Enter your choice : ");
		
		switch(choice) {
			case'1':
			   	//add_book();
				break;
		  	case'2':
				//issue_book();
				break;
		  	case'3':
				//return_book();
				break;
		  	
		  	default:
				
				break;
	      }
	}
  }

void list_of_books() {
	char choice;
	while (choice!='4') {
	
	   printf("\n\n\t\tList of Books\n");
	   printf("\t\t*************\n");
	   printf("\n\t1. Total Books\n");
	   printf("\t2. Books Issued\n");
	   printf("\t3. Books in stock\n");
	   printf("\t\t  Enter your Choice : ");
	   
	     switch (choice) {

		    case '1':
			     //total_book();
			     break;
		    case '2':
			     //issue_book();
			     break;
		    case '3':
			     //stock_book();
		    
		    default:
			    
			     break;
	       }
	}
  }
