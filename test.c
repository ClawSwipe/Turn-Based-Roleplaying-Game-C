#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include "classesandstats.h"
#include "playerassingment.h"
#include "fight.h"
#include "hints.h"
#include "centering.h"
#include "anime.h"
#include "tutorial.h"
#include "characreation.h"
#include "ascii.h"
#include "heal.h"
#include "ROUND1.h"
#include "ROUND2.h"
#include "BOSS.h"
#include "GameOver.h"	
int main () {
	FILE *fptr;
	int check;
	char name[255];
	anime();
	tutorial();
	ASCII(WARRIOR);
	CharacterCreation(name);
	player *Hero = NewPlayer(WARRIOR, name);
	check=ROUND1(Hero);
	if(check==0){
		printf("\n\t\t\t\tTime for the next battle..\n");
		Heal(Hero);
		check=ROUND2(Hero);
		if(check==0){
			Heal(Hero);
			check=BOSS(Hero);
			if(check==0){
				GameOver();
			}
		}
	}
  return(0);
}



