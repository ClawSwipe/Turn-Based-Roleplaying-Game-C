ASCII(class class){
	switch(class){
		case WARRIOR: ;
			char text[255];
			fptr=fopen("Wascii.txt","r");	
			while (fgets(text, 255, fptr) != NULL){
				printf("%s",text);
				usleep(25000);
			}
			break;
		case GOBLIN: ;
			char text2[255];
			fptr=fopen("Gascii.txt","r");	
			while (fgets(text2, 255, fptr) != NULL){
				printf("%s",text2);
				usleep(25000);
			}
			break;
		case ELF: ;
			char text3[255];
			fptr=fopen("Eascii.txt","r");	
			while (fgets(text3, 255, fptr) != NULL){
				printf("%s",text3);
				usleep(25000);
			}	
			break;
		case DRAGON: ;
				char text4[255];
			fptr=fopen("Dascii.txt","r");	
			while (fgets(text4, 255, fptr) != NULL){
				printf("%s",text4);
				usleep(25000);
			}	
			break;	
	}
}
