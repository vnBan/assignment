#include <stdio.h>
#include <stdlib.h>
#include "contact.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Contact cont[100];
	int count=0;
	int choice, searchChoice;
	Contact newContact;
	char name[20];
	char phoneNumber[20];
	do{
		printf("\n1 - Add Contact\n");
		printf("2 - Search by name\n");
		printf("3 - Search by number\n");
		printf("4 - Update Contact\n");
		printf("5 - Delete Contact\n");
		printf("6 - Contact Statistics\n");
		printf("7 - Exit\n");
		printf("Input choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter name: ");
				scanf("%s", &newContact.name);
				printf("Enter phone number: ");
				scanf("%s", &newContact.phoneNumber);
				printf("Enter email address: ");
				scanf("%s", &newContact.emailAddress);
				printf("Enter date of birth: ");
				scanf("%s", &newContact.birthDate);
				addContact(cont, &count, newContact);
				break;
			case 2:
				printf("Choose if you want to search for number or name (1/2): ");
				scanf("%d", &searchChoice);
				if(searchChoice==1){
					printf("Enter phone number to be searched: ");
					scanf("%[^\n]%*c", &phoneNumber);
					if(searchByName(phoneNumber, cont, count)==1){
						printf("The number exist.");
					}else{
						printf("The number does not exist");
					}
				} else if(searchChoice==2){
					printf("Enter name to be searched: ");
					scanf("%[^\n]%*c", &name);
					if(searchByName(name, cont, count)==1){
						printf("The name exist.");
					}else{
						printf("The name does not exist");
					}
				}
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
			case 8: 
				break; 
			
		}
	}while(choice!=7);
	return 0;
}
