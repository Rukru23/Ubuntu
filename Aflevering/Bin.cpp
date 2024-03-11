#include "Bin.h"
#include <iostream>
#include <chrono>
#include <algorithm>

//contructor for bin klassen, intialisere mrandomengine med et seed der passer til tiden
Bin::Bin() : mRandomEngine(std::chrono::system_clock::now().time_since_epoch().count()){


}


void Bin::fillBin(int min, int max, int amount){
    int range = max - min + 1;                  //Beregner intervallet af tal
    int baseAmount = amount / range;            //elementer som skal fordeles ligeligt
    int extraAmount = amount % range;           //resten af elementerne fordeles jævnt

    mValues.clear(); //ryder beholderen

    //Loop igennem beholderen og indsætter tal
    for (int i = min; i <= max; ++i){
        int count = baseAmount + (i - min < extraAmount ? 1 : 0);
        mValues.insert(mValues.end(), count, i);
    }
    //Blander indholdet
    std::shuffle(mValues.begin(), mValues.end(), mRandomEngine);

}


int Bin::drawAndRemove(){
    if (mValues.empty()){                               //tjekker om beholderen er tom
        std::cout << "The bin is empty" << std::endl;
        return -1;                                      //Retuner -1 for at  vise fejl
    }

    std::uniform_int_distribution<int> distribution(0, mValues.size() - 1); //Opretter en uniform fordeling
    int index = distribution(mRandomEngine);               //Finder et tilfældigt index
    int values = mValues[index];                           //trækker nr fra indexet
    mValues.erase(mValues.begin() + index);                //Fjerner værdien fra beholderen

    return values ;

}

unsigned int Bin::count(int value) const{
    return std::count(mValues.begin(), mValues.end(), value); //Tæller forekomsten af en værdi













}

unsigned int Bin::size() const{
    return mValues.size();                              //Udskriver størrelsen på binskær
}
