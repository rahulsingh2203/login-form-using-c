#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	char username[50], password[50];
	printf("Login Dashboard");
	printf("\nEnter your username:");
	scanf("%s",username);
	printf("\nEnter your password:");
	scanf("%s",&password);
	//if(username == "admin" && password == "admin123"){
	if(strcmp(username,"admin")==0 && strcmp(password,"admin@123")==0){
		printf("\nLogin Successfull");
	}
	else{
		printf("\nLogin Failed");
	}
	getch();
}
