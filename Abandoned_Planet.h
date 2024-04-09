#ifndef INC_142_PROJE_2024_ABANDONED_PLANET_H
#define INC_142_PROJE_2024_ABANDONED_PLANET_H

//Initialize
constexpr int _moneygain = 10;
constexpr int SUCCESS_RATE{50};

#include <iostream>
#include <memory>
#include "gemi.h"
#include "Space_Pirates.h"

class Abandoned_Planet {
private:
    Space_Pirates Pirates;
    int money_gain{_moneygain};
public:
    Abandoned_Planet();
    ~Abandoned_Planet();
    void take_action(std::shared_ptr<gemi>);
};


#endif //INC_142_PROJE_2024_ABANDONED_PLANET_H
