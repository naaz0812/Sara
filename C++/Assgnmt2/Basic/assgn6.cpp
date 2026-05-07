#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    

    cout<<"\n";
    if(ch==65|| ch==69||ch==73||ch==79||ch==85|| ch==97||ch==101||ch==105||ch==111||ch==117)
    {
        cout<<" Vowel "<<endl;
    }
    else
    {
        cout<<" Consonant  "<<endl;
    }

}

