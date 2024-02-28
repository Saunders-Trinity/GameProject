//
// Created by tenni on 2/28/2024.
//

#ifndef GAMEPROJECT_CHARACTER_H
#define GAMEPROJECT_CHARACTER_H

#endif //GAMEPROJECT_CHARACTER_H
using namespace std;
//create characters who have  a health bar, species name. Type of species

class Character{
public:
    int health;
    int shield;
    string name;
    string type;

    //default constructor
    Character(){
        health = 0;
        shield = 0;
        name = "unknown";
        type = "unknown";
    }




    //all function declarations go here
    int getHealth();
    int getShield();
    string getName();
    string getType();



};
//define functions outside of class below

//getter functions
int Character::getHealth(){
    return health;
}
int Character::getShield(){
    return shield;
}
string Character::getName(){
    return name;
}
string Character::getType(){
    return type;
}
