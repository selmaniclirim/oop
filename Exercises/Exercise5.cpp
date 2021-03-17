//
// Created by Clirim on 3/17/2021.
//

#include<iostream>
using namespace std;

struct Player {
    char name[15];
    int level;
    int points;
};

struct ComputerGame {
    char name[20];
    Player p[30];
    int pNumber;
};

void bestPlayer(ComputerGame *array, int n) {
    int temp = 0;
    int maxPlayers = 0;
    int maxPoints = 0;
    int indexPG = 0;
    int indexGG = 0;
    for(int i = 0; i < n; i++) {
        temp = array[i].pNumber;
        if(temp > maxPlayers) {
            maxPlayers = temp;
            indexPG = i;
        }
    }
    for(int i = 0; i < sizeof(array[indexPG].p); i++) {
        temp = array[indexPG].p[i].points;
        if(temp > maxPoints) {
            maxPoints = temp;
            indexGG = i;
        }
    }

    // this is in macedonian cause the task wasn't optimized for the english group
    cout << "Najdobar igrac e igracot so korisnicko ime " << array[indexPG].p[indexGG].name
    << " koj ja igra igrata " << array[indexPG].name << endl;

//    This is how the cout should've been if the task was optimized
//    cout << "The best player " << array[indexPG].p[indexGG].name
//         << " plays the game " << array[indexPG].name << endl;
}

int main() {
    int n,m;
    char ime[20];
    cin>>n;
    //create an array of max 100 computer games;
    ComputerGame gameArray[100];
    for (int i=0; i<n; i++) {
        ComputerGame game;
        cin >> game.name >> game.pNumber;
        Player pl[30];
        for (int j=0; j < game.pNumber; j++) {
            Player newP;
            cin >> newP.name >> newP.level >> newP.points;
            game.p[j]=newP;
        }
        gameArray[i]=game;
    }

    bestPlayer(gameArray, n);
    return 0;
}
