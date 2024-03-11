#ifndef BIN_H
#define BIN_H
#include <vector>
#include <random>



class Bin
{
public:
    //Default Contructor
    Bin();

    //Deklaration af funktioner
    void fillBin(int min, int max, int amount);

    int drawAndRemove();

    unsigned int count(int value) const;

    unsigned int size() const;



private:
    //deklaration af objekt
    std::default_random_engine mRandomEngine;
    //deklaration af vektor
    std::vector<int>mValues;

};

#endif // BIN_H



