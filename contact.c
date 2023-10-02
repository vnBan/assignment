#include<stdio.h>
#include "contact.h"
void addContact(Contact contacts[], int *count, Contact newContact){
	contacts[(*count)]=newContact;
	(*count)++;
}
int searchByName(char name[], Contact contacts[], int count){
	int i = 0;
	for(i=0;i<count;i++){
		if(strcmp(contacts[i].name, name)==0){
			return 1;
		}
	}
	return 0;
}
int searchByPhoneNumber(char phoneNumber[], Contact contacts[], int count){
	int i = 0;
	for(i=0;i<count;i++){
		if(strcmp(contacts[i].phoneNumber, phoneNumber)==0){
			return 1;
		}
	}
	return 0;
}
