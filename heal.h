Heal(player *Hero){
	int i;
	printf("\n");
	char heal[10]={"Healing..."};
	for( i=0;i<heal[i];i++){
		printf("%c",heal[i]);
		usleep(100000);
	}	
	Hero->health=60;
}
