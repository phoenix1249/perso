#include <string>
#include <iostream>


class character{
private:
    std::string nom_;
    int vie_;
public:
    character();
    character(std::string nom);
    character(std::string nom,int vie);

    std::string nom();
    int vie();

};

std::ostream& operator<<(std::ostream& sortie, character& chara);


