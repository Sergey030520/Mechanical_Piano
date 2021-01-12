#include <iostream>
#include <string>

enum notes{
    DO,//до
    RE,//ре
    MI,//ми
    FA,//фа
    SO,//со
    LA,//ля
    SI //си
};

void ShowNote(int bit_mask){
    switch (--bit_mask) {
        case DO:
            std::cout << "DO" << " ";
            break;
        case RE:
            std::cout << "RE" << " ";
            break;
        case MI:
            std::cout << "MI" << " ";
            break;
        case FA:
            std::cout << "FA" << " ";
            break;
        case SO:
            std::cout << "SO" << " ";
            break;
        case LA:
            std::cout << "LA" << " ";
            break;
        case SI:
            std::cout << "SI" << " ";
            break;
        default:
            break;
    }
}
int convert_char_to_int(char symbol){
    return (int(symbol) - int('0'));
}
int main() {
    int const countComb = 5;
    std::string combine[countComb];
    for (int i = 0; i < countComb; ++i){
        std::cout << "Input combine note:";
        std::cin >> combine[i];
    }
    for (int i = 0; i < countComb; ++i){
        for(int j = 0; j < combine[i].length(); ++j){
            ShowNote(convert_char_to_int(combine[i][j]));
        }
        if(i == countComb/2) std::cout << std::endl;
    }
}
