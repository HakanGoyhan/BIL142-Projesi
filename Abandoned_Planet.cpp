#include "Abandoned_Planet.h"
void Abandoned_Planet::take_action(std::shared_ptr<gemi> my_gemi)
{
    std::cout<<"We found an abandoned planet"<<"\n";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    int random_number = dis(gen);
    if(random_number < SUCCESS_RATE)
    {

        my_gemi->Gain_money(money_gain);
        std::cout<<"We found "<<money_gain<<" money how lucky you"<<"\n";
    }
    else
    {
        Pirates.take_action(my_gemi);
    }
    my_gemi->status();
}
Abandoned_Planet::~Abandoned_Planet() = default;
Abandoned_Planet::Abandoned_Planet() : Pirates(), money_gain(_moneygain) {}
