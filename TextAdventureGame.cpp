#include <iostream>

int main() {
    //string variable to hold the players name
    std::string name;
    //The variables that hold the players choice number
    int gameStart = 0;
    int innChoice = 0;
    int lobbyChoice = 0;
    int barChoice = 0;
    int barChoice2 = 0;
    int shadyChoice = 0;
    int shadyChoice2 = 0;
    //The amount of tries a players has to input 1 to start the game
    int startTries = 0;
    int innTries = 0;
    int barTries = 0;
    int barTries2 = 0;
    int shadyTries = 0;
    int shadyTries2 = 0;



    //title
    std::cout << "===================================\n";
    std::cout << " Welcome to the text adventure game\n";
    std::cout << "===================================\n";
    //welcoming message and question

    std::cout << "\nLets start out with your name: ";

    std::cin >> name;

    std::cout << "\nHello " << name << ", I hope you enjoy this adventure\n";

    std::cout << "Want to start the game?\n";

    std::cout << "\n1) Yes\n";
    std::cout << "2) No\n";


    std::cin >> gameStart;


    startTries++;

    //stops the player from spamming
    while (gameStart != 1 && startTries < 10) {
        std::cout << "\nInvalid Input try again \n";
        std::cout << "Also option 2 is invalid to \n";
        std::cin >> gameStart;

        startTries++;
    }

    //If the players choice is 1
    if (gameStart == 1) {
        std::cout << "Great choice, lets start this.\n";

        std::cout << "Starting game\n";
        //loops a . to make it look like its loading
        for (int i = 0; i < 20; i++) {
            std::cout << ".\n";
        }

        //The beggining of the game
        std::cout << "(You wake up in a strange inn in the medieval time period)\n";
        std::cout << "You think to yourself: What do i want to, I could :\n";
        //The 3 options for the player to choose
        std::cout << "\n  1) Sleep some more\n";
        std::cout << "  2) Get up and head out of your room\n";
        std::cout << "  3) Jump out of the window\n";

        //the player input for this choice
        std::cin >> innChoice;

        innTries++;

        //This while loop will make sure the user loops the question if it is not 1,2 or 3
        while (innChoice != 1 && innChoice != 2 && innChoice != 3 && innTries < 10) {

            std::cout << "\nInvalid input try again\n";
            std::cin >> innChoice;

            innTries++;
        }

        //inn choice for choice 1
        if (innChoice == 1) {

            std::cout << "You rest your eyes for just a while longer\n";
            std::cout << "Game Ending 1 - Tired/n";

            return 0;
        }
        //inn choice for choice 2
        else if (innChoice == 2) {
            std::cout << "You stand up out of your bed and walk out of your room.\n";
            std::cout << "You find yourself in the inn lobby.\n";
            std::cout << "It seems no one is at the inn desk currently.\n";
            std::cout << "Your only option is to walk out of the inn.\n";
            std::cout << "You walk out of the inn into the town of Valeria.\n";
            std::cout << "\nValeria is a small villige town with a population of 64.\n";
            std::cout << "There are a few buildings other than the inn but you feel inclined to go to the bar to get information about where you are.\n";
            std::cout << "You make your way into the bar and suprisingly see only 3 people.\n";
            std::cout << "You think to youreslf: who do i want to talk to?\n";
            //The 3 people in the bar the player can talk to
            std::cout << "\n  1) Talk to the shady person in the back of the bar\n";
            std::cout << "  2) Talk to the bar tender\n";
            std::cout << "  3) Talk to the person drinking at the bar\n";



            //User input for the bar choice
            std::cin >> barChoice;



            barTries++;

            while (barChoice != 1 && barChoice != 2 && barChoice != 3 && barTries < 10) {
                std::cout << "Invalid input try again\n";

                std::cin >> barChoice;

                barTries++;
            }

            //talking to the shady man
            if (barChoice == 1) {
                std::cout << "You walk up to the strange person in the back of the bar.\n";
                std::cout << "They hand you a picture of their king and say\n";
                std::cout << "\n-Wanna make some money?-\n";

                std::cout << "\n  1) Yes\n";
                std::cout << "  2) No\n";

                std::cin >> shadyChoice;

                shadyTries++;

                while (shadyChoice != 1 && shadyChoice != 2 && shadyTries < 10) {
                    std::cout << "Invalid input try again\n";

                    std::cin >> shadyChoice;

                    shadyTries++;
                }
                //if you say yes to the shady man
                if (shadyChoice == 1) {
                    std::cout << "The shady person tasks you with murdering the king and you wanted to make money so you do.\n";

                    std::cout << "You make your way torward the castle and immeditly see the king on his throne protected by his guards\n";

                    std::cout << "You reach in your pockets to see what you could use and you find some poison powder\n";

                    std::cout << "while no one is looking you slip the powder into the kings drink and no one sees you doing this\n";

                    std::cout << "The king takes a sip out of his drink and dies withing seconds the whole court is in outburst question how did this happen\n";

                    std::cout << "They blame you beacuse you are a outsider and one of their own could never do this\n";

                    std::cout << "They cut you down where you stand but you did manage to take their king down with you\n";

                    std::cout << "ending 5 - a royal death\n";

                    return 0;
                }//if you say no to the shady man
                else if (shadyChoice == 2) {
                    std::cout << "You say no to they shady person and he stabs you\n";
                    std::cout << "The shady person says: should of said yes\n";
                    std::cout << "Ending 4 - Shady stabbing\n";

                    return 0;
                }

            }//Talking to the bar tender
            else if (barChoice == 2) {
                std::cout << "\nYou walk up to the bar tender he asks if you want somthing to drink?\n";
                std::cout << "You cant really talk back to him beacuse dialouge would take way to long to add so you just stare at him and he walks away\n";

                std::cout << "what do you want to do now?\n";

                std::cout << "\n  1) walk over to the shady person\n";
                std::cout << "  2) walk to the person at the bar\n";

                std::cin >> barChoice2;

                barTries2++;

                while (barChoice2 != 1 && barChoice2 != 2 && barTries2 < 10) {
                    std::cout << "Invalid input try again\n";

                    std::cin >> barChoice2;

                    barTries2++;
                }
                //talk to shady person after talking to bar tender
                if (barChoice2 == 1) {
                    std::cout << "You walk up to the strange person in the back of the bar.\n";
                    std::cout << "They hand you a picture of their king and say\n";
                    std::cout << "\n-Wanna make some money?-\n";

                    std::cout << "\n  1) Yes\n";
                    std::cout << "  2) No\n";

                    std::cin >> shadyChoice2;

                    shadyTries2++;

                    while (shadyChoice2 != 1 && shadyChoice2 != 2 && shadyTries2 < 10) {
                        std::cout << "Invalid input try again\n";

                        std::cin >> shadyChoice2;

                        shadyTries2++;
                    }
                    //if you say yes to the shady man
                    if (shadyChoice2 == 1) {
                        std::cout << "The shady person tasks you with murdering the king and you wanted to make money so you do.\n";

                        std::cout << "You make your way torward the castle and immeditly see the king on his throne protected by his guards\n";

                        std::cout << "You reach in your pockets to see what you could use and you find some poison powder\n";

                        std::cout << "while no one is looking you slip the powder into the kings drink and no one sees you doing this\n";

                        std::cout << "The king takes a sip out of his drink and dies withing seconds the whole court is in outburst question how did this happen\n";

                        std::cout << "They blame you beacuse you are a outsider and one of their own could never do this\n";

                        std::cout << "They cut you down where you stand but you did manage to take their king down with you\n";

                        std::cout << "ending 5 - a royal death\n";

                        return 0;
                    }//if you say no to the shady man
                    else if (shadyChoice2 == 2) {
                        std::cout << "You say no to they shady person and he stabs you\n";
                        std::cout << "The shady person says: should of said yes\n";
                        std::cout << "Ending 4 - Shady stabbing\n";

                        return 0;
                    }
                }
                //talk to person sitting at bar
                else if (barChoice2 == 2) {
                    std::cout << "You walk up to the person at the bar and he stabs you with a knife\n";
                    std::cout << "before you pass out he says i dont like outsiders\n";
                    std::cout << "ending 3 - bar stabbing\n";

                    return 0;
                }


            }//talk  to person sitting at bar
            else if (barChoice == 3) {
                std::cout << "You walk up to the person at the bar and he stabs you with a knife\n";
                std::cout << "before you pass out he says i dont like outsiders\n";
                std::cout << "ending 3 - bar stabbing\n";
                return 0;
            }



        }
        //inn choice for choice 3
        else if (innChoice == 3) {
            std::cout << "You randomly have the urge to jump out of the window not knowing how far the fall is\n";
            std::cout << "You fall out of the window and its a 3 story fall - you break your legs\n";
            std::cout << "Ending 2 - you end up breaking your legs so the adventure has to wait\n";

            return 0;
        }


    }
}
