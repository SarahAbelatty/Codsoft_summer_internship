#include <iostream>
#include <stdlib.h>
using namespace std;

char turn ;
int numb ;
int row , col ;
int ret_val ;
int play_again ;
char matrix[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}} ;

void showing_matrix() ;
void player_turn() ;
int end_game () ;

int main()
{
    cout<<"\t\t\t T I C -- T A C -- T O E -- G A M E \t\t\t";
    cout<<"\n\t\t\t\t _FOR_2_PLAYERS \n\t\t\t ";
    while(1)
    {
        turn = 'X';
        while (end_game() == 0 )
        {
            showing_matrix();
            player_turn();
            ret_val = end_game();
        }
        if(turn == 'X' && ret_val == 1)
        {
            cout<<"\n\n Congratulations!Player with 'O' has won the game";
        }
        else if(turn == 'O' && ret_val == 1)
        {
            cout<<"\n\n Congratulations!Player with 'X' has won the game";
        }
        else
            cout<<"\n\n GAME DRAW!!!\n\n";
        char counter = '1' ;
        for ( int i = 0 ; i < 3 ; i++ )
        {
            for ( int j = 0 ; j < 3 ; j++ )
            {
                matrix[i][j] = counter++ ;
            }
        }

        cout << " if you want to play again enter 1 " ;
        cin >> play_again ;
        if ( play_again != 1 )
            break ;
    }


    return 0;
}
void showing_matrix()
{
    system( "cls" ) ;
    cout<<"PLAYER_1 [X] \t PLAYER_2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<matrix[0][0]<<"  | "<<matrix[0][1]<<"   |  "<<matrix[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<matrix[1][0]<<"  | "<<matrix[1][1]<<"   |  "<<matrix[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<matrix[2][0]<<"  | "<<matrix[2][1]<<"   |  "<<matrix[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}
void player_turn(){
    if(turn == 'X'){
        cout<<"Player_1 [X] turn : \n ";
    }
    else if(turn == 'O'){
        cout<<"Player_2 [O] turn : \n ";
    }
    cout << " enter the place : " ;
    cin >> numb ;
    switch(numb)
    {
        case 1:
            row=0; col=0; break;
        case 2:
            row=0; col=1; break;
        case 3:
            row=0; col=2; break;
        case 4:
            row=1; col=0; break;
        case 5:
             row=1; col=1; break;
        case 6:
            row=1; col=2; break;
        case 7:
            row=2; col=0; break;
        case 8:
            row=2; col=1; break;
        case 9:
             row=2; col=2; break;
        default:
            cout<<"Invalid Move";
    }
    if(turn == 'X' && matrix[row][col] != 'X' && matrix[row][col] != 'O')
    {
        matrix[row][col] = 'X';
        turn = 'O';
    }
    else if(turn == 'O' && matrix[row][col] != 'X' && matrix[row][col] != 'O' )
    {
        matrix[row][col] = 'O';
        turn = 'X';
    }
    else
    {
        cout<<"Box already filled!n Please choose another!!nn";
        player_turn();
    }
    showing_matrix();
}
int end_game ()
{
    if ( matrix[0][0] == matrix[0][1] && matrix[0][1] == matrix[0][2] )
        return 1 ;
    else if ( matrix[1][0] == matrix[1][1] && matrix[1][1] == matrix[1][2] )
        return 1 ;
    else if ( matrix[2][0] == matrix[2][1] && matrix[2][1] == matrix[2][2] )
        return 1 ;
    else if ( matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2] )
        return 1 ;
    else if ( matrix[0][0] == matrix[1][0] && matrix[1][0] == matrix[2][0] )
        return 1 ;
    else if ( matrix[0][1] == matrix[1][1] && matrix[1][1] == matrix[2][1] )
        return 1 ;
    else if ( matrix[0][2] == matrix[1][2] && matrix[1][2] == matrix[2][2] )
        return 1 ;
    else if ( matrix[0][2] == matrix[1][1]&& matrix[1][1] == matrix[2][0] )
        return 1 ;
    else
        return 0 ;
}
