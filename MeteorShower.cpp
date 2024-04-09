#include "MeteorShower.h"

void MeteorShower::take_action(std::shared_ptr<gemi> my_gemi)
{
    std::cout<<"Meteor shower started"<<"\n";
    for(int i=0;i<3;++i)
    {
        my_gemi->Lose_health(meteor_damage);
    }
    std::cout << "You took " << meteor_damage * my_gemi->get_damage_received() << " damage three times  \n";
    my_gemi->status();
}
MeteorShower::~MeteorShower() = default;
MeteorShower::MeteorShower() : meteor_damage(const_meteor_damage) {}
