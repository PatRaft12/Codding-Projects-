// Pat Rafter
// Final Project rock, paper, scissors
// CMPSC 101 Fall 2018
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;


int numoutcomes(int num_of_options= 3, int num_of_players = 2) {
   int possibilities;
   possibilities = num_of_options * num_of_players;
   

  
return (possibilities);    // end of numoutcomes//
  
}



void printtext ()
{
cout<<" Ready to play!"<<endl;
}
//// End of printtext////
int main()
{
 


  
//******** Variable Declarations****//
string name;
string players_1_pick;               // Player one picks rock, paper, or scissors
string player_1_name;               // Player one enters their name
string player_2_name;              // Player two enters their name
string players_2_pick;            // Player two picks rock, paper, or scissors
string rock;                     // The string rock is created 
string paper;                   // The string paper is created 
string scissors;               // The string scissors is created 
printtext();                  // This is used to print the vod function from above
char ans;                    // This statment is used as part of the loop



// File displays containing the rules.
 ofstream outfile("rules.txt"); 
 outfile<<"Player one selects rock, paper, or scissors"<<endl;
 outfile<<"Player two selects rock, paper, or scissors"<<endl; 
 outfile<<"The winner is determined  by the outcomes I provided"<<endl;
 outfile<<"Good Luck and Have Fun"<<endl;
outfile.close();

/// The game begins! and gets the users input for the game ////
do{
cout << "Welcome to rock, paper, scissors!" << endl;
cout << " \n player one enter your name: ";
cin >> name;
cout << " \n player two enter your name: ";
cin >> name;
cout << " \n player 1 enter your choice: (pick 'rock', 'paper', or 'scissors') ";
cin >> players_1_pick;

cout << " \n player 2 enter your choice: (pick 'rock', 'paper', or 'scissors') ";
cin >> players_2_pick;



if (players_1_pick == players_2_pick)
{
cout<< " We have a tie!                         "<< endl;
}
if ( players_1_pick == "paper" && players_2_pick == "scissors")
{
cout<< "\nscissors beats paper player two wins! "<<endl;
cout<< "  *****                                 "<<endl;
cout<<"   *   *                                 "<<endl;
cout<<"   *****                                 "<<endl;
cout<<"         ********\\                      "<<endl;
cout<< "         *******//                      "<<endl;
cout<<"   *********\\                           "<<endl;
cout<<"    ********//                           "<<endl;
cout<<" *****                                   "<<endl;
cout<<" *   *                                   "<<endl;
cout<<" *****                                   "<<endl;

}
else if (players_1_pick == "rock" && players_2_pick == "scissors") 
{
cout<< "\nplayer one wins!                      "<<endl;
cout<<"   *******                               "<<endl;
cout<<" *         *                             "<<endl;
cout<<"  *********                              "<<endl;
}
if (players_1_pick == "scissors" && players_2_pick == "rock" )
{
cout<< "\nrock beats scissors player two wins! "<<endl;
cout<<"\n   ********                           "<<endl;
cout<<"    *        *                          "<<endl;
cout<<"     ********                           "<<endl;
}
if (players_1_pick == "paper" && players_2_pick == "rock" )
{
cout<< "\npaper beats rock!                    "<<endl;
cout<< "  ———————                              "<<endl;
cout<< "  |      |                             "<<endl;
cout<< "  |      |                             "<<endl;
cout<<"  |      |                              "<<endl;
cout<<"  |______|                              "<<endl;

}

if (players_1_pick == "rock" && players_2_pick == "paper")
{
cout<< " \n paper covers rock! player two wins!"<<endl;
cout<< "  ———————                              "<<endl;
cout<< "  |      |                             "<<endl;
cout<< "  |      |                             "<<endl;
cout<<"  |      |                              "<<endl;
cout<<"  |______|                              "<<endl;
}
if (players_1_pick == "scissors" && players_2_pick == "paper")
{
cout<< "\n scissors beats paper player one wins"<<endl;
cout<< "  _                                     "<<endl;
cout<< "( _ )                                   "<<endl;
cout<< " _    '''''''>                         "<<endl;
cout<<"( _ )  '''''''>                         "<<endl;


}

//// Do while loop asking the users if they want to play again////

cout<< "Would you like to play again? Y/N"<<endl;
cin>>ans;
}while (ans == 'Y' || ans == 'y');
  
  return 0;
  }//end of main
