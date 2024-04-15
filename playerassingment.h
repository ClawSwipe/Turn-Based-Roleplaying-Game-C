// Creates player and sets class.
player* NewPlayer(class class, char name[50]) {
    // Allocate memory to player pointer.
    player *tempPlayer = malloc(sizeof(player));
    SetName(tempPlayer, name);
    static int PlayersCreated = 0; // Keep track of players created.
	if (PlayersCreated > 0) {
    	tempPlayer->autoPilot = true;
	} 
	else {
    tempPlayer->autoPilot = false;
	}
++PlayersCreated;
    // Assign stats based on the given class.
    switch(class) {
    case WARRIOR:
        tempPlayer->health = 60;
        tempPlayer->attack = 3;
        tempPlayer->defense = 5;
        tempPlayer->Sturn=10;
        tempPlayer->class = WARRIOR;
        break;
    case ELF:
        tempPlayer->health = 100;
        tempPlayer->attack = 7;
        tempPlayer->defense = 2;
        tempPlayer->Sturn=7;
        tempPlayer->class = ELF;
        break;
    case GOBLIN:
        tempPlayer->health = 100;
        tempPlayer->attack = 5;
        tempPlayer->defense = 5;
        tempPlayer->Sturn=5;
        tempPlayer->class = GOBLIN;
        break;
    case DRAGON:
    	tempPlayer->health = 100;
        tempPlayer->attack = 10;
        tempPlayer->defense = 5;
        tempPlayer->Sturn=10;
        tempPlayer->class = DRAGON;
        break;
    default:
      	tempPlayer->health = 10;
        tempPlayer->attack = 0;
        tempPlayer->defense = 0;
        break;
    }
    return(tempPlayer); // Return memory address of player.
}
void DisplayStats(player *target)  {
  printf("\n%s\nHealth: %d\nAttack: %d\nDefense: %d\n", target->name, target->health,target->attack,target->defense);
}
int SetName(player *target, char name[50]) {
  strcpy(target->name, name);
  return(0);
}

