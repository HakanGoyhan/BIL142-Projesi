#ifndef INC_142_PROJE_2024_PLAY_GAME_H
#define INC_142_PROJE_2024_PLAY_GAME_H

#include "gemi.h"
#include "Space_Pirates.h"
#include "Abandoned_Planet.h"
#include "MeteorShower.h"
#include "normal_ship.h"
#include "strong_ship.h"
#include "fast_ship.h"
#include "ShipTypeSelection.h"
#include <iostream>
#include <string>
#include <memory>

constexpr int max_event_number{5};
class Play_Game{
private:
    int event_number{0},expected_event_number{max_event_number};
    bool game_is_on = true, keep_playing = true, control = true;
    std::string ship_type, game_over_or_not,forwait;
    Space_Pirates Pirates;
    Abandoned_Planet Empty_Planet;
    MeteorShower Asteroid;
    ShipTypeSelection Selection;
public:
    Play_Game();
    ~Play_Game();
    void BackEndOfGame(std::shared_ptr<gemi>);
    void StartGame();
    int RandomNumberGenerator();
};


#endif //INC_142_PROJE_2024_PLAY_GAME_H
