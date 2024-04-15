FILE *fptr;
HINT(class class){
	switch(class){	
		case ELF: ;
			char text[255];
			fptr=fopen("ELF.txt","r");	
			while (fgets(text, 255, fptr) != NULL){
				printf("\n\t\t\t\t%s",text);
			}
			break;		
		case GOBLIN: ;
			char text2[255];
			fptr=fopen("GOBLIN.txt","r");	
			fgets(text2,255,fptr);
			printf("\n\t\t\t\t%s",text2);
			break;			
		case DRAGON: ;
			char text3[255];
			fptr=fopen("DRAGON.txt","r");	
			while (fgets(text3, 255, fptr) != NULL){
				printf("\n\t\t\t\t%s",text3);
			}
			break;					
			
	}
}
