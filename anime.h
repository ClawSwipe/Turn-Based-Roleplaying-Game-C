anime(){
    int i;
    char t1[]="\n\n\n\n\n\n\n\t\t\t\t ==========================";
    char t2[]="\t\t\t\t It's About Drive, It's About Power";
    char t3[]="\t\t\t\t ==========================";
    for(i=0; t1[i]!='\0'; i++){
        printf("%c",t1[i]);
        usleep(15000);
    }
    printf("\n");
    for(i=0; t2[i]!='\0'; i++){
        printf("%c",t2[i]);
        usleep(15000);
    }
    printf("\n");
    for(i=0; t3[i]!='\0'; i++){
        printf("%c",t3[i]);
        usleep(15000);
    }	
}
