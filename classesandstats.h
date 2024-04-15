#include<stdbool.h>
typedef enum ClassEnum  {
    WARRIOR,
    ELF,
    GOBLIN,
    DRAGON
} class;

// Player Structure
typedef struct playerStructure {
    char name[50];
    class class;
    int health;
    int attack;    
    int defense;   
    int Sturn;
    bool autoPilot;
} player;
