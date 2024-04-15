ROUND2(player *Hero){
	int i;
		char intro[255]={"\n\t\t\t\tYour second opponent..\n\t\t\t\tNone other than the legendary archer himself\n\t\t\t\tLEGOLAS"};
		char round[255]={"\n\t\t\t\tROUND 2\n "};
		player *Villain2=NewPlayer(ELF,"Legolas");
    	for(i=0; intro[i]!='\0'; i++){
        printf("%c",intro[i]);
        usleep(15000);
   		}
   		ASCII(Villain2->class);
    	for(i=0; round[i]!='\0'; i++){
        printf("%c",round[i]);
        usleep(25000);
    	}   		
		DisplayStats(Villain2);   		
		Fight(Hero,Villain2);
}
