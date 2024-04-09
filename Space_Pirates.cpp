#include "Space_Pirates.h"

void Space_Pirates::take_action(std::shared_ptr<gemi> my_gemi)
{
    std::string input;
    std::cout
            <<"Wild Space Pirates appeared! What will you do (for negotiate 'n', for fight 'f' for try to escape 'e')\n";

    bool flag{true};
    while (flag){
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(1, 100);
        int random_number = dis(gen);

        std::cin >> input;
        decision = static_cast<Decision>(input[0]);

        switch (decision) {
            case Decision::Escape:
                if (my_gemi->get_Fuel() < FUEL_COST_TO_ESCAPE)
                {
                    std::cout << "You don't have enough fuel ! (negotiate 'n', fight 'f')\n";
                    continue;
                }
                if (static_cast<float>(random_number) < SUCCESS_RATE_OF_PIRATES * my_gemi->get_Speed())
                {
                    my_gemi->Lose_fuel(fuellost);
                    std::cout << "You successfully escaped, that costed : " << fuellost << " fuel \n";
                    break;
                }
                else
                {
                    std::cout << "You couldn't escape! (negotiate 'n', fight 'f', try to escape 'e')\n";
                    continue;
                }
            case Decision::Fight:
                if (random_number < SUCCESS_RATE_OF_PIRATES)
                {
                    std::cout << "We won the battle against those moron pirates \n";
                }
                else
                {
                    my_gemi->Lose_health(pirate_damage);
                    std::cout << "You took " << pirate_damage * my_gemi->get_damage_received() << " damage \n";
                }
                break;
            case Decision::Negotiate:
                if (my_gemi->get_Money() < moneylost)
                {
                    std::cout << "You don't have enough money! (fight 'f', escape 'e')\n";
                    continue;
                }
                else
                {
                    my_gemi->Lose_money(moneylost);
                    std::cout << "You lost " << moneylost << " money \n";
                    break;
                }
            default:
                std::cout << "Wrong input ? \n";
                continue;
        }
        break;
    }
    my_gemi->status();
}
Space_Pirates::~Space_Pirates() = default;
Space_Pirates::Space_Pirates() :
moneylost(_moneylost), FUEL_COST_TO_ESCAPE(_FUEL_COST_TO_ESCAPE), fuellost(_fuellost), pirate_damage(_pirate_damage) {}



