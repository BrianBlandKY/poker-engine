#include <QCoreApplication>
#include <iostream>
#include <string>
#include "player.h"
#include "table.h"

using namespace std;

const int PLAYER_COUNT = 9;
const int CARD_COUNT = 2;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    char input;

    Table* table = new Table(PLAYER_COUNT, CARD_COUNT);
    Player* player1 = new Player(1);
    Player* player2 = new Player(2);
    Player* player3 = new Player(3);
    Player* player4 = new Player(4);
    Player* player5 = new Player(5);
    Player* player6 = new Player(6);

    table->addPlayer(player1);
    table->addPlayer(player2);
    table->addPlayer(player3);
    table->addPlayer(player4);
    table->addPlayer(player5);
    table->addPlayer(player6);

    table->removePlayer(player3);
    table->removePlayer(player5);

    //table->deal();
    //table->showPlayerHands();

    do{
        for(int round=0;round<1712304;round++){ //1712304
            table->deal();
            cout << "Round " << to_string(round) << endl;
            table->showPlayerHands();
        }

        cin >> input;
    }
    while(input != 'x');

    return a.exec();
}
