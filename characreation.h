char CharacterCreation(char *name){
	int i;
	char text[255]={"\nYou are an adventurer travelling the harsh continent in search of treasure\nBut first, you must defeat these MONSTERS three!"};
    for(i=0; text[i]!='\0'; i++){
        printf("%c",text[i]);
        usleep(15000);
    }	
	printf("\n\n\t\t\t\tEnter your name, brave WARRIOR!\n\t\t\t>>");
	gets(name);
	char text2[255]={"\n\t\t\t\tThree monsters, three rounds.\n\t\t\t\tWill you be strong enough to win?\n\t\t\t\tLet's find out..."};
    for(i=0; text2[i]!='\0'; i++){
        printf("%c",text2[i]);
        usleep(15000);
    }	
	return *name;
}
