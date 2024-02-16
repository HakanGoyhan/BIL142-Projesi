#include <iostream>
#include <string>
#include <algorithm>
#include "gemi.cpp"

int main(){

    bool keep_playing = true, game_is_on = true;
    int event_number{0};
    std::string cevap;
    gemi my_gemi;

    while(keep_playing)
    {

        while (game_is_on)
        {
            
            if ((event_number == 4) || (my_gemi.yakit_get() < 0))
            {                
                game_is_on = false;
                std::cout << "Game Over. \n";
                
            }

            event_number++;
        }       

        // Yeni Oyuna Baslanip Baslanmayacagi Kontrol Edilir
        std::cout << "Yeni bir oyuna başlamak ister misiniz? (evet/hayir) \n";
        std::cin >> cevap;        
                       
        if (cevap == "evet")
        {
            keep_playing = true;
        }
        else if (cevap == "hayir")
        {
           keep_playing = false;

        }
    }
        return 0;
}