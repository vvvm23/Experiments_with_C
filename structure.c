#include <stdio.h>
#include <string.h>
typedef struct Creature {
    char name[20];
    char race[20];
    char description[64];
    int hp;
    int mana;
    int creature_id;
} Creature;

void display_creature_info();

int main() {
    Creature Human;

    strcpy(Human.name, "Human");
    strcpy(Human.race, "Mammilian Humanoid");
    strcpy(Human.description, "Moderately strong and intelligent humanoids.");
    Human.hp = 100;
    Human.mana = 20;
    Human.creature_id = 0x4321;

    Creature Dog;
    strcpy(Dog.name, "Dog");
    strcpy(Dog.race, "Companion");
    strcpy(Dog.description, "The Quick and Intelligent companions of humans. Fiercely loyal.");
    Dog.hp = 50;
    Dog.mana = 0;
    Dog.creature_id = 0x4322;
    
    display_creature_info(Human);
    printf("\n");
    display_creature_info(Dog);

    return 0;
}

void display_creature_info(Creature creature) {
    printf("Name: %s\n", creature.name);
    printf("Race: %s\n", creature.race);
    printf("Description: %s\n", creature.description);
    printf("HP: %d\n", creature.hp);
    printf("Mana: %d\n", creature.mana);
    printf("ID: %d\n", creature.creature_id); 
}