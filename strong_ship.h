
#ifndef INC_142_PROJE_2024_STRONG_SHIP_H
#define INC_142_PROJE_2024_STRONG_SHIP_H
#include <iostream>
#include "gemi.h"

class strong_ship : public gemi {

public:
    strong_ship();
    ~strong_ship();

    void Gain_money(int)override;
    void Lose_money(int)override;
    void Lose_fuel(int)override;
    void Lose_health(float )override;
    float get_damage_received()override;
    float get_Speed()override;
    void show_ship()override;
};


#endif //INC_142_PROJE_2024_STRONG_SHIP_H

