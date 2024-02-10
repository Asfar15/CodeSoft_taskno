#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random,n,flag=0;
    cout<<endl<<endl;
    random=rand();
    while(1)
    {
        cout<<"Guess The Number: ";
        cin>>n;
        system("clear");
        if(n-100>random)
        {
            cout<<"Guess is Too High! \n\n";
            continue;
        }
        if(n+100<random)
        {
            cout<<"Guess is Too Low! \n\n";
            continue;
        }
        if(n==random)
        {
           cout<<"Congratulations! You have guessed it right!\nThe number was: "<<random;
           break;
        }
        else
        {
            cout<<"You are close!\n\n";
        }
    }
    cout<<"\n\nThank You for Playing!!\n";
}
