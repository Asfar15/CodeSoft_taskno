#include<iostream>
using namespace std;

float addition(float numb1,float numb2)
{
    return numb1+numb2;
}

float subtraction(float numb1,float numb2)
{
    return numb1-numb2;
}

float multiplication(float numb1,float numb2)
{
    return numb1*numb2;
}

float division(float numb1,float numb2)
{
    return numb1/numb2;
}

int main()
{
    int ch,c;
    float numb1,numb2;
    while(c)
    {
        system("clear");
        cout<<"Choose what you want to do:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\n";
        cin>>ch;
        if(ch==1)
        {
            cout<<"Enter the 2 numbers you want to Add: \n";
            cin>>numb1>>numb2;
            cout<<"Sum = "<<addition(numb1,numb2)<<endl<<endl;
        }
        else if(ch==2)
        {
            cout<<"Enter the 2 numbers you want to Subtract: \n";
            cin>>numb1>>numb2;
            cout<<"Difference = "<<subtraction(numb1,numb2)<<endl<<endl;
        }
        else if(ch==3)
        {
            cout<<"Enter the 2 numbers you want to Multiply: \n";
            cin>>numb1>>numb2;
            cout<<"Product = "<<multiplication(numb1,numb2)<<endl<<endl;
        }
        else if(ch==4)
        {
            cout<<"Enter the 2 numbers you want to Divide: \n";
            cin>>numb1>>numb2;
            cout<<"Division = "<<division(numb1,numb2)<<endl<<endl;
        }
        else if(ch==5)
            break;
        cout<<"\n\n\nDo you want to continue? (1/0): ";
        cin>>c;
    }
    cout<<"Thank you for using!!";
}
