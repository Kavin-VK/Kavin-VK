#include <iostream>
using namespace std;

int main()
{
    int c=0;
   
    do
    {
        int number,choice,lowerlim,upperlim,chance=0;
        int guess=0,i=1;
        cout<<"__________NUMBER GUESSING GAME________"<<endl;
        cout<<"\nMake A Choice About Range:"<<endl;
        cout<<"1:Easy Level(10-100)\n2:Intermediate Level(101-1000)\n3:Anvanced Level(1001-10000)\n4:Create Range\n\n>";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                lowerlim=10;
                upperlim=100;
                chance=20;
                cout<<"\nYou have 20 chances to guess the number"<<endl;
                break;
            case 2:
                lowerlim=100;
                upperlim=1000;
                chance=15;
                cout<<"\nYou have 15 chances to guess the number"<<endl;
                break;
            case 3:
                lowerlim=1000;
                upperlim=10000;
                chance=10;
                cout<<"\nYou have 10 chances to guess the number"<<endl;
                break;
            case 4:
                cout<<"Lower Limit: ";
                cin>>lowerlim;
                cout<<"Upper Limt: ";
                cin>>upperlim;
                chance=7;
                cout<<"\nYou have 7 chances to guess the number"<<endl;
                break;    
            default:
                cout<<"Invalid Input"<<endl;
                continue;
        }
        
        i=1;
        number=(rand()%(upperlim-lowerlim+1))+lowerlim;
     
        do
        {
            cout<<"\nGuess ("<<i<<"):-\n>";
            cin>>guess;
            if(guess<lowerlim || guess>upperlim)
            {
                cout<<"Your value is not in the limit.."<<endl;
                continue;
            }
            else if(number>guess)
            {
                cout<<"Good Try!! But Guess Higher..."<<endl;
            }
            else if(number<guess)
            {
                cout<<"Good Try!! But Guess Low"<<endl;
            }
            else if(number==guess)
            {
                cout<<"That's Amazing!! You have guessed the correct number"<<endl;
                break;
            }
            i++;
        }while(number!=guess && chance+1!=i);
        
        if(i-1==chance)
        {
            cout<<"\nYou have failed to guess the correct number!! Better luck next time..."<<endl;
        }
        
        cout<<"\n\nDo you want to continue:- \n";
        cout<<"1:YES\n2:NO\n";
        cout<<">";
        cin>>choice;

        if(choice==2)
        {
            c=1;
            i=1;
            chance=0;
        }
        
    }while(c==0);
    
