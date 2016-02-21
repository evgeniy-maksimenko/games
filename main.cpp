#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

void herosInventory()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];
    int numItems = 0;
    inventory[numItems++] = "sword";
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";
    cout<< "Your items:\n";
    for(int i=0;i<numItems;i++){
        cout << inventory[i] << endl;
    }
    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe";
    cout<< "Your items:\n";
    for(int i=0;i<numItems;i++){
        cout <<inventory[i]<<endl;
    }
    cout << "\nThe item name'" << inventory[0] << "'has ";
    cout << inventory[0].size() << " letters in it.\n";
    cout << "\nYour find a healing potion.";
    if(numItems < MAX_ITEMS)
    {
        inventory[numItems++] = "healing potion";
    }
    else
    {
        cout << "You have too many items and can`t carry another.";
    }
    cout << "\nYour items:\n";
    for(int i=0;i<numItems;i++)
    {
        cout<<inventory[i]<<endl;
    }
}

void ticTacToeBoard()
{
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] =
    {
        {'0','X','0'},
        {' ','X','X'},
        {'X','0','0'}
    };
    cout << "Here`s the tic-tac-toe board:\n";
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMNS;j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    cout << "\n'X' moves to the empty location.\n\n";
    board[1][0] = 'X';
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMNS;j++){
            cout<<board[i][j];
        }
        cout<<endl;
    }
    cout<<"\n'X' wins!";
}

void herosInventory2()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    cout<< "Your items:\n";
    for(int i=0;i<inventory.size();i++){
        cout << inventory[i] << endl;
    }
    inventory.pop_back();
    cout<< "Your items:\n";
    for(int i=0;i<inventory.size();i++){
        cout << inventory[i] << endl;
    }
    inventory.clear();
    if(inventory.empty())
    {
        cout <<"\n\You have nothing.n";
    }
    else
    {
        cout <<"\n\You have at least one item.n";
    }

}

void herosInventory3()
{
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;

    cout<< "\nYour items:\n";
    for(iter = inventory.begin();iter != inventory.end();iter++){
        cout << *iter << endl;
    }

    myIterator = inventory.begin();
    *myIterator = "battle axe";
    cout<< "\nYour items:\n";
    for(iter = inventory.begin();iter != inventory.end();iter++){
        cout << *iter << endl;
    }

    inventory.insert(inventory.begin(), "crossbow");
    cout<< "\nYour items:\n";
    for(iter = inventory.begin();iter != inventory.end();iter++){
        cout << *iter << endl;
    }

    cout << "\nThe item name "<<*myIterator <<" has ";
    cout<< myIterator->size() << " letters in it.\n";

    inventory.erase((inventory.begin() + 2));
    cout<< "\nYour items:\n";
    for(iter = inventory.begin();iter != inventory.end();iter++){
        cout << *iter << endl;
    }
}

void highScores()
{
    vector<int>::const_iterator iter;
    cout<<"Creating a list of scores.\n";
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);
    for(iter = scores.begin();iter != scores.end();iter++){
        cout << *iter << endl;
    }
    cout<<"\nFinding a score.";
    int score;
    cout<<"\nEnter a score to find: ";
    cin >> score;
    iter = find(scores.begin(), scores.end(), score);
    if(iter != scores.end())
    {
        cout << "Score found.\n";
    }
    else
    {
        cout << "Score not found.\n";
    }

    cout<<"\nRandomizing scores.\n";
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(scores.begin(), scores.end());
    for(iter = scores.begin();iter != scores.end();iter++){
        cout << *iter << endl;
    }

    cout<<"\nSorting scores.\n";
    sort(scores.begin(), scores.end());
    for(iter = scores.begin();iter != scores.end();iter++){
        cout << *iter << endl;
    }
}


int main()
{
    //herosInventory();
    //ticTacToeBoard();
    //herosInventory2();
    //herosInventory3();
    highScores();
    return 0;
}
