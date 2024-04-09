
#ifndef INC_142_PROJE_2024_GEMI_H
#define INC_142_PROJE_2024_GEMI_H
#include <iostream>
#include <random>

class gemi {
protected:
    int fuel;
    int money;
    float health;
    float damage_received;
    float speed;
public:

    virtual void Gain_money(int);

    virtual void Lose_money(int);

    virtual void Lose_fuel(int);

    virtual void Lose_health(float );

    virtual float get_Speed();

    virtual float get_damage_received();

    int get_Fuel()const;

    int get_Money()const;

    float get_Health()const;

    virtual void show_ship()= 0;

    float Score()const;

    void status();

};

#endif //INC_142_PROJE_2024_GEMI_H
