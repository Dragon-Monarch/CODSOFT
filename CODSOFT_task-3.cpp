#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//toss
int toss(string player1 , string player2)
{
    srand(time(0));
    int tossrand=(rand()% 2)+1;
    int tossuser;
    cout<<"Player 1 enter 1 or 2 for toss : "<<endl;
    cin>>tossuser;
    if (tossrand==tossuser)
    {
        cout<<"Player 1("<<player1<<") won the toss."<<endl;
        string currentplayer=player1;
        string secondplayer=player2;
        return 1;
    }
    else
    {
        cout<<"Player 2("<<player2<<") won the toss."<<endl;
        string currentplayer=player2;
        string secondplayer=player1; 
        return 2;
    }
}

void display_grid(int array[])
{
    cout<<"  "<<array[0]<<"  |  "<<array[1]<<"  |  "<<array[2]<<"  \n"
          "-----------------\n"
          "  "<<array[3]<<"  |  "<<array[4]<<"  |  "<<array[5]<<"  \n"
          "-----------------\n"
          "  "<<array[6]<<"  |  "<<array[7]<<"  |  "<<array[8]<<"  \n";
}

void display_grid2(char array2[])
{
    cout<<"  "<<array2[0]<<"  |  "<<array2[1]<<"  |  "<<array2[2]<<"  \n"
          "-----------------\n"
          "  "<<array2[3]<<"  |  "<<array2[4]<<"  |  "<<array2[5]<<"  \n"
          "-----------------\n"
          "  "<<array2[6]<<"  |  "<<array2[7]<<"  |  "<<array2[8]<<"  \n";
}


bool check_win(char array2[9])
    {
        if  (array2[0] == array2[1] && array2[0] == array2[2])
        {
            return true;
        }
        else if (array2[3] == array2[4] && array2[3] == array2[5])
        {
            return true;
        }
        else if (array2[6] == array2[7] && array2[6] == array2[8])
        {
            return true;
        }
        else if (array2[0] == array2[3] && array2[0] == array2[6])
        {
            return true;
        }
        else if (array2[1] == array2[4] && array2[1] == array2[7])
        {
            return true;
        }
        else if (array2[2] == array2[5] && array2[2] == array2[8])
        {
            return true;
        }
        else if (array2[0] == array2[4] && array2[0] == array2[8])
        {
            return true;
        }
        else if (array2[6] == array2[4] && array2[6] == array2[2])
        {
            return true;
        }
        else
        {
            return false;
        }
    };




int main()
{
    cout<<"WELCOME TO TICTACTOE\n";
    int array[]={1,2,3,4,5,6,7,8,9};
    char array2[]={'1','2','3','4','5','6','7','8','9'};
    display_grid(array);

    //names
    string player1 ,player2;
    cout<<"Player 1 enter your name : "<<endl;
    cin>>player1;

    cout<<"Player 2 enter your name : "<<endl;
    cin>>player2;
    cout<<"Player 1("<<player1<< ") will play with X \nPlayer 2("<<player2<<") will play with O."<<endl;
    //         toss(player1 , player2);
    srand(time(0));
    int tossrand=(rand()% 2)+1;
    int tossuser;
    cout<<"Player 1 enter 1(Head) or 2(Tail) for toss : "<<endl;
    cin>>tossuser;
    if (tossrand==tossuser)
    {
        cout<<"Player 1("<<player1<<") won the toss."<<endl;
        string currentplayer=player1;
        string secondplayer=player2;
        int tosscheck =1;
    }
    else
    {
        cout<<"Player 2("<<player2<<") won the toss."<<endl;
        string currentplayer=player2;
        string secondplayer=player1; 
        int tosscheck= 2;
    }
    //player1="X";
    //player2="O";

    //currentplayer move
    int current_player_move , second_player_move;
    int count = 0; 
    int over;
    if (tossrand==tossuser)
    {
        while (true)
        {             
            //first player move
            while (true)
            {
                cout<<player1<<" enter your move : "<<endl;
                cin>>current_player_move;

                if ((current_player_move>9) || (current_player_move<1) || (array2[((current_player_move)-1)]=='X') || (array2[((current_player_move)-1)]=='O'))
                {
                    cout<<"Invalid input !!! Try again.."<<endl;
                    continue;
                }
                
                for (int i = 0; i<9 ; i++)
                {
                    if (array[i]==current_player_move)
                    {
                        array2[i]='X';
                        display_grid2(array2);  
                        count+=1;
                    }
    
                }
                

                
                if (check_win(array2)==1)
                {
                    cout<<"Congratulations "<<player1<<" you win.."<<endl;
                    over=1;
                    break;

                    
                }

                if (count==9)
                {
                    cout<<"Game is Draw."<<endl;
                    over=1;
                    break;
                }
                else
                {
                    break;
                }     
                
            }

            if (over==1)
            {
                break;
            }
           //second player move
            while (true)
            {
                cout<<player2<<" enter your move : "<<endl;
                cin>>second_player_move;
                
                if ((second_player_move>9) || (second_player_move<1) || (array2[((second_player_move)-1)]=='X') || (array2[((second_player_move)-1)]=='O'))
                {
                    cout<<"Invalid input !!! Try again.."<<endl;
                    continue;
                }
                
                for (int i = 0; i<9 ; i++)
                {
                    if (array[i]==second_player_move)
                    {
                        array2[i]='O';
                        display_grid2(array2);  
                        count+=1;
                    }
    
                }
               
                if (check_win(array2)==1)
                {
                    cout<<"Congratulations "<<player2<<" you win.."<<endl;
                    over=1;
                    break;
                    
                }

                if (count==9)
                {
                    cout<<"Game is Draw."<<endl;
                    over=1;
                    break;
                }
                else
                {
                    break;
                }
                
            }

            if (over==1)
            {
                break;
            }

        } 
    }

    else
    {
        while (true)
        {
            //first player move
            while (true)
            {
                cout<<player2<<" enter your move : "<<endl;
                cin>>second_player_move;

                if ((second_player_move>9) || (second_player_move<1) || (array2[((second_player_move)-1)]=='X') || (array2[((second_player_move)-1)]=='O'))
                {
                    cout<<"Invalid input !!! Try again.."<<endl;
                    continue;
                }
                
                for (int i = 0; i<9 ; i++)
                {
                    if (array[i]==second_player_move)
                    {
                        array2[i]='O';
                        display_grid2(array2);  
                        count+=1;
                    }
    
                }
                
                if (check_win(array2)==1)
                {
                    cout<<"Congratulations "<<player2<<" you win.."<<endl;
                    over=1;
                    break;
                    
                }

                if (count==9)
                {
                    cout<<"Game is Draw."<<endl;
                    over=1;
                    break;
                }
                else
                {
                    break;
                }
                
            }

            if (over==1)
            {
                break;
            }
            //second player move
            while (true)
            {
                cout<<player1<<" enter your move : "<<endl;
                cin>>current_player_move;
                
                if ((current_player_move>9) || (current_player_move<1) || (array2[((current_player_move)-1)]=='X') || (array2[((current_player_move)-1)]=='O'))
                {
                    cout<<"Invalid input !!! Try again.."<<endl;
                    continue;
                }
                
                for (int i = 0; i<9 ; i++)
                {
                    if (array[i]==current_player_move)
                    {
                        array2[i]='X';
                        display_grid2(array2);  
                        count+=1;
                    }
    
                }
                
                if (check_win(array2)==1)
                {
                    cout<<"Congratulations "<<player1<<" you win.."<<endl;
                    over=1;
                    break;
                    
                }

                if (count==9)
                {
                    cout<<"Game is Draw."<<endl;
                    over=1;
                    break;
                }
                else
                {
                    break;
                }
                
            }

            if (over==1)
            {
                break;
            }

        }
        
    }
    
    return 0;
}
