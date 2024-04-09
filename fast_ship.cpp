// İnitialize
constexpr float const_health{100.0f};
constexpr int const_fuel {100};
constexpr int const_money {0};
constexpr float const_damage_received {1.5f};
constexpr float const_speed {1.5f};

#include "fast_ship.h"

fast_ship::fast_ship()
{
    health = const_health;
    fuel = const_fuel;
    money = const_money;
    speed = const_speed;
    damage_received = const_damage_received;
}
void fast_ship::Gain_money(int _money)
{
    money += _money;
}
void fast_ship::Lose_money(int _money)
{
    money -= _money;
}
void fast_ship::Lose_fuel(int _fuel)
{
    fuel -= _fuel;
}
void fast_ship::Lose_health(float damage)
{
    health -= (damage * const_damage_received);
}
float fast_ship::get_damage_received()
{
    return damage_received;
}
float fast_ship::get_Speed()
{
    return speed;
}
void fast_ship::show_ship()
{
    if(this->health >=75)
    {
        std::cout << "    /\\    \n";
        std::cout << "  _/  \\_  \n";
        std::cout << " /      \\ \n";
        std::cout << "/________\\ \n";
        std::cout << "|   /\\   | \n";
        std::cout << "|__/  \\__| \n";
        std::cout << " \\      /  \n";
        std::cout << "  \\____/   \n";

    }
    else if(this->health >45 && this->health <75)
    {
        std::cout << "    /\\    \n";
        std::cout << "  _/  \\_  \n";
        std::cout << " /      \\ \n";
        std::cout << "/________\\ \n";
        std::cout << "|   /\\   | \n";
        std::cout << "|  /  \\  | \n";
        std::cout << " \\      /  \n";
        std::cout << "  \\____/   \n";
    }
    else
    {
        std::cout << "    /\\    \n";
        std::cout << "  _/  \\_  \n";
        std::cout << " /      \\ \n";
        std::cout << "/        \\ \n";
        std::cout << "|   /\\   | \n";
        std::cout << "|  /  \\  | \n";
        std::cout << " \\      /  \n";
        std::cout << "  \\____/   \n";
    }
}
fast_ship::~fast_ship()= default;