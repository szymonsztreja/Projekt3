#ifndef MACROS_H
#define MACROS_H
#include <vector>

class Macros
{
public:
    std::vector<Macros> Products;
    double Protein;
    double Carbs;
    double Fats;    
    Macros(double P, double C, double F){
        Protein = P;
        Carbs = C;
        Fats = F;
    };

};


#endif // MACROS_H
