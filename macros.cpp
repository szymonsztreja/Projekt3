#include "macros.h"

Macros macros_summary(0,0,0);

auto CalorieIntake(double Weight, Macros& Produkt) -> double
{
    double grams = 0.01;
    double CaloriesTotal = 0;
    CaloriesTotal = (Produkt.Carbs+Produkt.Protein)*4 + Produkt.Fats*9;
    macros_summary.Carbs += Produkt.Carbs;
    macros_summary.Protein += Produkt.Protein;
    macros_summary.Fats += Produkt.Fats;
    return grams*Weight*CaloriesTotal;
}
