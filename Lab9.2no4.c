#include <stdio.h>
#include <string.h>
int checkLogin(char *login, char *passwd);
//accepted only if Length = 5 and a number 1 or more digits
int checkValidPass(char *ps,int size);

int main() {
	char login[64], password[64];
	printf("Enter login : "); gets(login);
	printf("Enter password : "); gets(password);
	int size= strlen(password);
	
	if( checkLogin(login, password) == 1) {
		printf("Welcome\n");
	} else {
		printf("Incorrect login or password\n");
	}
	if (checkValidPass(password,size)) {
		//if Password is valid
		printf("Accepted\n");
	}
	else
		printf("Reject\n");
}


int checkValidPass(char *ps,int size) {
	int accepted=0;	
	int count=0;
	int i;
	for (i=0;i<size;i++){
		if (ps[i]>=48 && ps[i]<=57)
			count++;
	}
	int uppercase=0;
	for (i=0;i<size;i++){
		if (ps[i]>=65 && ps[i]<=90)
			uppercase++;
	}
	if (count&&size>=5&&size<=8) 
		accepted=1;
	if (ps[0]>=48&&ps[0]<=57)
		accepted=0;
	
	return accepted;
}
int checkLogin(char *login, char *passwd) {
	if( !strcmp(login, "student1") && !strcmp(passwd, "mPASS505"))
		return 1;
	else
		return 0;
}
