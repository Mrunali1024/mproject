struct date {
	int dd;
	int mm;
	int yy;
  }date;

typedef struct class_student {
		
		  
		   char name[40];
		   char address[40];
		   char f_name[40];
		   char class[3];
		   char sec[2];
		   int noi;
		  
	}A;

struct books {
	int book_no;
        char book_name[40];
}books;

struct member {
	char a_name[40];
	char p_name[40];
        char st;
}record,B;

void issue_book();
void return_book();
void add_issue_return();
void disp_book_name();
void list_of_books();
void total_book();
void add_book();
void box();
int  membership();
char fbook_name[40];

