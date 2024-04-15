FILE *fptr;
GameOver(){
	int i;
	char final[50];
    char t1[]="\n\n\n\n\n\n\n\t\t\t\t ==========================";
    char t2[]="\t\t\t\t           THE END";
    char t3[]="\t\t\t\t ==========================\n";	
	fptr=fopen("GameOver.txt","r");
	while (fgets(final, 50, fptr) != NULL){
		printf("%s",final);
		usleep(35000);
	}	
    for(i=0; t1[i]!='\0'; i++){
        printf("%c",t1[i]);
        usleep(15000);
    }
    printf("\n");
    for(i=0; t2[i]!='\0'; i++){
        printf("%c",t2[i]);
        usleep(35000);
    }
    printf("\n");
    for(i=0; t3[i]!='\0'; i++){
        printf("%c",t3[i]);
        usleep(15000);
    }	
}
