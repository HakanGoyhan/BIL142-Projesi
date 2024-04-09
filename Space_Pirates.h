#ifndef INC_142_PROJE_2024_SPACE_PIRATES_H
#define INC_142_PROJE_2024_SPACE_PIRATES_H
#include <iostream>
#include <memory>
#include "gemi.h"
#include "Decision.h"


constexpr int _moneylost{10};
constexpr int _FUEL_COST_TO_ESCAPE{33};
constexpr int _fuellost{33};
constexpr int SUCCESS_RATE_OF_PIRATES{50};
constexpr int _pirate_damage{10};

class Space_Pirates {
private:
    int moneylost{_moneylost};
    int FUEL_COST_TO_ESCAPE{_FUEL_COST_TO_ESCAPE};
    int fuellost{_fuellost};
    int pirate_damage{_pirate_damage};
    Decision decision;
public:
    Space_Pirates();
    ~Space_Pirates();
    void take_action(std::shared_ptr<gemi> );
};

#endif //INC_142_PROJE_2024_SPACE_PIRATES_H
