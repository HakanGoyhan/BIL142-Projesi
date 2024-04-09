#include "gemi.h"

void gemi::Gain_money(int _money){
    money += _money;
}
void gemi::Lose_money(int _money){
    money -= _money;
}
void gemi::Lose_fuel(int _fuel){
    fuel -= _fuel;
}
void gemi::Lose_health(float damage){
    health -= (damage * damage_received);
}

int gemi::get_Fuel()const{
    return fuel;
}
float gemi::get_Health()const{
    return health;
}
int gemi::get_Money()const{
    return money;
}
float gemi::get_damage_received(){
    return damage_received;
}
float gemi::get_Speed(){
    return speed;
}
void gemi::status()
{
    std::cout << "Current fuel status :" << get_Fuel() << "\n" << "Current health status : " << get_Health() << "\n"
              << "Current money status : " << get_Money() << "\n";
    show_ship();
}
float gemi::Score()const
{
    return (static_cast<float>(fuel) * 5) + (health * 10) + (static_cast<float>(money));
}
