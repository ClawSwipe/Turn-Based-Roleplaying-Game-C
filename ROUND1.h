ROUND1(player *Hero){
	int i;
		player *Villain1=NewPlayer(GOBLIN,"Draak");
		char intro[255]={"\n\t\t\t\tYour first opponent..\n\t\t\t\tThe leader of the GOBLINS himself\n\t\t\t\tDRAAK"};
		char round[255]={"\n\t\t\t\tROUND 1\n "};
    	for(i=0; intro[i]!='\0'; i++){
        printf("%c",intro[i]);
        usleep(15000);
   		}
   		ASCII(Villain1->class);
    	for(i=0; round[i]!='\0'; i++){
        printf("%c",round[i]);
        usleep(25000);
    	}   		
		DisplayStats(Villain1);   		
		Fight(Hero,Villain1);

}
