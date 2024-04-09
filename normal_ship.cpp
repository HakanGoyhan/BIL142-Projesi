// İnitialize
constexpr float const_health{100.0f};
constexpr int const_fuel {100};
constexpr int const_money {0};
constexpr float const_damage_received {1.0f};
constexpr float const_speed {1.0f};

#include "normal_ship.h"
normal_ship::normal_ship()
{
    health = const_health;
    fuel = const_fuel;
    money = const_money;
    speed = const_speed;
    damage_received = const_damage_received;
}

void normal_ship::Gain_money(int _money)
{
    money += _money;
}
void normal_ship::Lose_money(int _money)
{
    money -= _money;
}
void normal_ship::Lose_fuel(int _fuel)
{
    fuel -= _fuel;
}
void normal_ship::Lose_health(float damage )
{
    health -= (damage * const_damage_received);
}
float normal_ship::get_damage_received()
{
    return damage_received;
}
float normal_ship::get_Speed()
{
    return speed;
}
void normal_ship::show_ship()
{
    if(this->health >=75)
    {
        std::cout << "   /\\   \n";
        std::cout << "  /  \\  \n";
        std::cout << " /____\\ \n";
        std::cout << "/______\\ \n";
        std::cout << "|      | \n";
        std::cout << "|      | \n";
        std::cout << "|      | \n";
        std::cout << "|______| \n";
        std::cout << " \\    /  \n";
        std::cout << "  \\__/   \n";
    }
    else if(this->health >45 && this->health <75)
    {
        std::cout << "   /\\   \n";
        std::cout << "  /  \\  \n";
        std::cout << " /    \\ \n";
        std::cout << "/______\\ \n";
        std::cout << "|      | \n";
        std::cout << "|      | \n";
        std::cout << "|      | \n";
        std::cout << "|______| \n";
        std::cout << " \\    /  \n";
        std::cout << "  \\__/   \n";
    }
    else
    {
        std::cout << "   /\\   \n";
        std::cout << "  /  \\  \n";
        std::cout << " /    \\ \n";
        std::cout << "/      \\ \n";
        std::cout << "|      | \n";
        std::cout << "|      | \n";
        std::cout << "|      | \n";
        std::cout << "|______| \n";
        std::cout << " \\    /  \n";
        std::cout << "  \\__/   \n";
    }
}
normal_ship::~normal_ship() = default;

