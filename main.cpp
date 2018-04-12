#include <iostream>
#include <vector>

using namespace std;

// Global constant variables
const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;




// function prototype

void printScoreboard( vector < vector <int> > );

int main()
{
    int periods; // columns
    int teams;  // rows

    vector < vector<int> > scoreBoard;


    cout<<"How many competitors? ";
    cin>>teams;
    cout<<"How many scoring periods? ";
    cin>>periods;

    if( teams < MIN_TEAMS || periods < MIN_PERIODS || 
            teams > MAX_TEAMS || periods > MAX_PERIODS )
    {
        cout<<"Must have between "<<MIN_TEAMS<<" and "<<MAX_TEAMS<<" competitors.\n";
        cout<<"and between "<<MIN_PERIODS<<" and "<<MAX_PERIODS<<" periods.\n";
        return 0;
    }
    else
    {
        //make scoreboard and fill it with zeros


        scoreBoard.resize( teams );

        for (int row = 0; row < scoreBoard.size(); row++)
        {
            scoreBoard [row].resize( periods ); // resizes column for each row

            for (int col = 0; col < scoreBoard[row].size(); col++)
            {
                scoreBoard [row][col] = 0;

            } // end for

        } // end for



        // calls function
        printScoreboard( scoreBoard );



        /*
        //once created, display the scoreboard
        // delete below for loop block after getting printScoreboard working

        cout<<"SCOREBOARD"<<endl;
        for(int r = 0; r < teams; r++)
        {
        cout<<"Player "<<r + 1<<": ";

        for(int c = 0; c < periods; c++)
        {

        cout << scoreBoard[r][c] << "|";

        } // end for

        cout<<endl; // newline after each row

        } // end for
        */


    } // end else


    return 0;
} // end main





// define function
void printScoreboard(vector < vector <int> > grid )
{
    cout << "SCOREBOARD\n";
    // traverse grid and print out each row as a player's score
    // and each column as the score for that scoring period


    for(int r = 0; r < grid.size(); r++)
    {
        cout<<"Player "<<r + 1<<": ";

        for(int c = 0; c < grid[r].size(); c++)
        {

            cout << grid[r][c] << "|";

        } // end for

        cout<<endl; // newline after each row

    } // end for





} // end function
