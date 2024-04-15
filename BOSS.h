BOSS(player *Hero){
	int i;
	char a[255]={"\n\t\t\t\tSo you've arrived...\n\t\t\t\tI didn't think you would make it this far.\n\t\t\t\tBut it matters not.\n\t\t\t\tSay your final prayers, foolish WARRIOR\n"};
	player *Boss=NewPlayer(DRAGON,"Igneel");
    for(i=0; a[i]!='\0'; i++){
    	printf("%c",a[i]);
        usleep(100000);
   	}
   	ASCII(Boss->class);
   	DisplayStats(Boss);
   	Fight(Hero,Boss);
	   	
}
