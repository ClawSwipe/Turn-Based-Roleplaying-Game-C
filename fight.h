char line[50];	
int turns,defcheck=0;
int Fight(player *Attacker, player *Target) {
    turns=0;
   while (Target->health > 0) {

    if (Attacker->autoPilot == false) {
		int EffectiveAttack = Attacker->attack,Armor=0;      // Get user input if autopilot is set to false.
    	turns++;
		DisplayFightMenu();
		int choice;
		printf(">> ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &choice);
		 switch (choice) {
		   case 1:
		   	system("cls");
		     Target->health = Target->health - EffectiveAttack;
		     printf("%s inflicted %d damage to %s.\n", Attacker->name, EffectiveAttack, Target->name);
		     DisplayStats(Target);
		     printf("\n\t\t\t\t\t\t\t\t\t\tTurn:%d\n",turns);
		     break;
		    case 2:
		    	system("cls");
		    	if((turns%Target->Sturn)==0){
		    		Target->health = Target->health - (EffectiveAttack*50);
		    		printf("%s inflicted %d damage to %s.\n", Attacker->name, (EffectiveAttack*50), Target->name);
		    		DisplayStats(Target);
		    		printf("\n\t\t\t\t\t\t\t\t\t\tTurn:%d\n",turns);
				}
				else{
					Target->health = Target->health - (EffectiveAttack*2);
					printf("%s inflicted %d damage to %s.\n", Attacker->name, (EffectiveAttack*2), Target->name);
					DisplayStats(Target);
					printf("\n\t\t\t\t\t\t\t\t\t\tTurn:%d\n",turns);
				}
				break;
			case 3:
				system("cls");
				EffectiveAttack = abs(Target->attack - Attacker->defense);
				defcheck=1;
				printf("\n\t\t\t\t\t\t\t\t\t\tTurn:%d\n",turns);
				break;
			case 4:
				system("cls");
				HINT(Target->class);
				printf("\n\t\t\t\t\t\t\t\t\t\tTurn:%d\n",turns);
				break;
		   case 5:
		   		system("cls");
		   		char run[255]={"Running away! ByeBye!"};
		   		Center(&run);
		   		printf("\n\t\t\t\t\t\t\t\t\t\tTurn:%d\n",turns);
		     	return(1);
		   default:
		     printf("Bad input. Try again.\n");
		     break;
		 	}
    	} 
	else {
		int EffectiveAttack = Attacker->attack;
		if(defcheck==1){
			EffectiveAttack=Attacker->attack-Target->defense;
			defcheck=0;
		}
		Target->health = Target->health - (EffectiveAttack);
		printf("%s inflicted %d damage to %s.\n", Attacker->name, (EffectiveAttack), Target->name);
	 	DisplayStats(Target);
  	}
      // Once turn is finished, check to see if someone has one, otherwise, swap and continue.
    if (Target->health <= 0) {
		printf("%s has bested %s in combat.\n", Attacker->name, Target->name) ;
		if(Attacker->class==WARRIOR){
			printf("\n\t\t\t\tCongratulations!!!");
			return 0;
		}
		else{
			printf("\nYou lose...\n...The HERO is defeated, never to be seen again..\n...Destined to be forgotten by anyone and everyone...\n");
			return 1;
		}
    } 
	else {
	 					// Swap attacker and target.
	 	player *tmp = Attacker;
	 	Attacker = Target;
	 	Target = tmp;
      }
   }
	
}
 DisplayFightMenu () {
  printf("\n1) Attack\t2) z00m\t\t3) Defend\t4) Analyze\t5) Run\n");
}
