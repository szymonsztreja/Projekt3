#include "macros.h"

auto CalorieIntake(double Weight, Macros& Produkt) -> double
{
    double CaloriesTotal = 0;
    CaloriesTotal = (Produkt.Carbs+Produkt.Protein)*4 + Produkt.Fats*9;
    Produkt.Carbs += Produkt.Carbs;
    Produkt.Protein += Produkt.Protein;
    Produkt.Fats += Produkt.Fats;
    return Weight*CaloriesTotal;
}
