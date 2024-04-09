#include "Play_Game.h"

void Play_Game::BackEndOfGame(std::shared_ptr<gemi> my_gemi)
{

    while (game_is_on)
    {
        std::cout<< "Press any key + enter to continue.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, forwait);
        int random_number = RandomNumberGenerator();
        if(random_number < 33)
        {
            Empty_Planet.take_action(my_gemi);
        }
        else if(random_number >=33 && random_number < 66)
        {
            Asteroid.take_action(my_gemi);
        }
        else
        {
            Pirates.take_action(my_gemi);
        }
        std::cout<<"------------------------------------------------------------"<<"\n"<<"\n";
        ++event_number;
        if ((event_number == expected_event_number) || (my_gemi->get_Fuel() < 0) || (my_gemi->get_Health() <= 0))
        {
            std::cout << "Game Over. Your score is :" << my_gemi->Score() << "\n";
            event_number=0;
            break;
        }
    }
}

Play_Game::~Play_Game() = default;
Play_Game::Play_Game() :
        event_number(0), expected_event_number(max_event_number), game_is_on(true), Pirates(), Empty_Planet(), Asteroid() {}

void Play_Game::StartGame()
{
    while(keep_playing)
    {
        std::cout << "Select your ship type (fast/normal/strong)"<<"\n"<<"\n";
        std::cin >> ship_type;
        std::shared_ptr<gemi> my_gemi;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        Selection = static_cast<ShipTypeSelection>(ship_type[0]);

        switch (Selection)
        {
            case ShipTypeSelection::Normal:
                std::cout << "You chose a normal ship. The game begins..." << "\n" << "\n";
                my_gemi = std::make_shared<normal_ship>();
                break;
            case ShipTypeSelection::Strong:
                std::cout << "You chose a strong ship. The game begins..." << "\n" << "\n";
                my_gemi = std::make_shared<strong_ship>();
                break;
            case ShipTypeSelection::Fast:
                std::cout << "You chose a fast ship. The game begins..." << "\n" << "\n";
                my_gemi = std::make_shared<fast_ship>();
                break;
        }
        if (my_gemi)
        {
            BackEndOfGame(my_gemi);
        }
        else
        {
            std::cout << "Failed to create ship. Exiting...\n";
            break;
        }

        while(control)
        {
            std::cout << "Would you like to start a new game ?(yes/no) \n";
            std::cin >> game_over_or_not;

            if (game_over_or_not == "yes")
            {
                keep_playing = true;
                break;
            }
            else if (game_over_or_not == "no")
            {
                keep_playing = false;
                break;
            }
            else
            {
                std::cout << "Wrong input ? \n";
            }
        }
    }
}
int Play_Game::RandomNumberGenerator(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);
    return dis(gen);
}