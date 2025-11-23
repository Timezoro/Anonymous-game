#include <bits/stdc++.h>
using namespace std;

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    srand(time(0));
    int again = 1;
    while (again == 1){
        vector<string> dataset = {"Crocodile", "Rabbit", "Cow", "Kangaroo", "Elephant", "Lion", "Tiger", "Giraffe", "Zebra", "Panda", "Koala", "Hippopotamus", 
                                  "Rhinoceros", "Monkey", "Gorilla", "Chimpanzee", "Bear", "Wolf", "Fox", "Deer", "Moose", "Goat", "Sheep", "Horse", "Donkey", 
                                  "Camel", "Leopard", "Cheetah", "Hyena", "Otter", "Penguin", "Dolphin", "Shark", "Whale", "Octopus", "Squid", "Turtle", "Tortoise", 
                                  "Eagle", "Hawk", "Owl", "Parrot", "Flamingo", "Peacock", "Swan", "Duck", "Chicken", "Turkey"}; 
                                  //This just initial name you can change it freely                                 
        int player;
        int word = rand() % dataset.size();
        clearScreen();
        cout << "Welcome To anonymous game!\n";
        cout << "How many player: ";
        cin >> player;
        clearScreen();
        cout << "Press Enter to start...... \n";
        cin.get();
        clearScreen();
    
        int imposter = rand() % player;
        for(int i = 0; i < player; i++){
            if(i == imposter){
                cout << "you are player " << i+1;
                cin.get();
                clearScreen();
                cout << "you are Imposter \n";
                cout << "Press enter to continue......";
                cin.get();
                clearScreen();
            }else{
                cout << "you are player " << i+1;
                cin.get();
                clearScreen();
                cout << "Random word = " << dataset[word] << "\n";
                cout << "Press enter to continue......";
                cin.get();
                clearScreen();
            }
        }
        cout << "Game Start! \n";
        cout << "Press enter again to end the game.....";
        cin.get();
    
        cout << "play more? type 1 : ";
        cin >> again;
    }
}
