
// İnitialize
constexpr float const_health{100.0f};
constexpr int const_fuel {100};
constexpr int const_money {0};
constexpr float const_damage_received {0.5f};
constexpr float const_speed {0.5f};

#include "strong_ship.h"
strong_ship::strong_ship()
{
    health = const_health;
    fuel = const_fuel;
    money = const_money;
    speed = const_speed;
    damage_received = const_damage_received;
}

void strong_ship::Gain_money(int _money)
{
    money += _money;
}
void strong_ship::Lose_money(int _money)
{
    money -= _money;
}
void strong_ship::Lose_fuel(int _fuel)
{
    fuel -= _fuel;
}
void strong_ship::Lose_health(float damage )
{
    health -= (damage * const_damage_received);
}
float strong_ship::get_damage_received()
{
    return damage_received;
}
float strong_ship::get_Speed()
{
    return speed;
}
void strong_ship::show_ship()
{
    if(this->health >=75)
    {
        std::cout << "     /\\      \n";
        std::cout << "    /  \\     \n";
        std::cout << "   /    \\    \n";
        std::cout << "  /______\\   \n";
        std::cout << " /________\\  \n";
        std::cout << "/__________\\ \n";
        std::cout << "|    /\\    | \n";
        std::cout << "|   /  \\   | \n";
        std::cout << "|  /____\\  | \n";
        std::cout << "|__________| \n";
        std::cout << " \\        /  \n";
        std::cout << "  \\______/   \n";
    }
    else if(this->health >45 && this->health <75)
    {
        std::cout << "     /\\      \n";
        std::cout << "    /  \\     \n";
        std::cout << "   /    \\    \n";
        std::cout << "  /      \\   \n";
        std::cout << " /        \\  \n";
        std::cout << "/__________\\ \n";
        std::cout << "|    /\\    | \n";
        std::cout << "|   /  \\   | \n";
        std::cout << "|  /____\\  | \n";
        std::cout << "|__________| \n";
        std::cout << " \\        /  \n";
        std::cout << "  \\______/   \n";
    }
    else
    {
        std::cout << "     /\\      \n";
        std::cout << "    /  \\     \n";
        std::cout << "   /    \\    \n";
        std::cout << "  /      \\   \n";
        std::cout << " /        \\  \n";
        std::cout << "/          \\ \n";
        std::cout << "|    /\\    | \n";
        std::cout << "|   /  \\   | \n";
        std::cout << "|  /____\\  | \n";
        std::cout << "|          | \n";
        std::cout << " \\        /  \n";
        std::cout << "  \\______/   \n";
    }
}

strong_ship::~strong_ship()= default;



