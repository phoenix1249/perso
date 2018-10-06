#include "character.h"

character::character(){
    nom_ = "";
    vie_ = 10;
}

character::character(std::string nom){
    nom_ = nom;
    vie_ = 10;
}

character::character(std::string nom, int vie){
    nom_ = nom;
    vie_ = vie;
}

std::string character::nom(){
    return nom_;
}

int character::vie(){
    return vie_;
}

std::ostream& operator<<(std::ostream& sortie, character& chara){
    sortie<<"Je suis "<<chara.nom()<<" et j'ai "<<chara.vie()<<" PV\n";
    return sortie;
}