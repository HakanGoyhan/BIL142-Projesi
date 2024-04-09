#ifndef INC_142_PROJE_2024_METEORSHOWER_H
#define INC_142_PROJE_2024_METEORSHOWER_H

//Initialize
constexpr float const_meteor_damage = 10.0f;
#include <iostream>
#include <memory>
#include "gemi.h"

class MeteorShower {
private:
    float meteor_damage{const_meteor_damage};
public:
    MeteorShower();
    ~MeteorShower();
    void take_action(std::shared_ptr<gemi>);
};


#endif //INC_142_PROJE_2024_METEORSHOWER_H

