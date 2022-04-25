#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    unsigned short int n,x,y,b;
    while(1)
    {
        n=0;
        while(n<3)
        {
            cout<<"How many Columns & Rows do you want (More than 2)?\n";
            cin>>n;
            system("CLS");
        }
        char TTT[n][n];
        for(unsigned int i=n*n-1; i+1; i--)TTT[i/n][i%n]=' ';
        for(unsigned int i=n*n; i; i--)
        {
Start:
            for(unsigned int j=0; j<n*n; j++)
            {
                if(j%n<1&&j)
                {
                    cout<<endl;
                    for(int i=n*2-1; i; i--)cout<<'-';
                    cout<<endl;
                }
                if(j%n)cout<<'|';
                cout<<TTT[j/n][j%n];
            }
            cout<<endl;
            if((n*n+1-i)%2)cout<<"x";
            else cout<<"o";
            cout<<"'s Turn\nPlease enter the Row & Column in order from Top to Bottom from Left to Right.\nTo Reset, please enter a number bigger than the number of Rows & Columns.\n";
            cin>>x>>y;
            system("CLS");
            x--,y--;
            if(TTT[x][y]==' '&&x<n&&y<n)
                if((n*n+1-i)%2)TTT[x][y]='x';
                else TTT[x][y]='o';
            else goto Start;

            {
                for(int i=n; i; i--)
                {
                    b=1;
                    for(int j=n; j; j--)if(TTT[i-1][j-1]!='x')b*=0;
                    if(b)
                    {
                        goto X;
                    }
                }
                for(int i=n; i; i--)
                {
                    b=1;
                    for(int j=n; j; j--)if(TTT[j-1][i-1]!='x')b*=0;
                    if(b)
                    {
                        goto X;
                    }
                }
                b=1;
                for(int i=n; i; i--)
                    if(TTT[i-1][i-1]!='x')
                        b*=0;
                if(b)
                {
                    goto X;
                }
                b=1;
                for(int i=n; i; i--)
                    if(TTT[i-1][n-i-1]!='x')
                        b*=0;
                if(b)
                {
                    goto X;
                }
            }
            {
                for(int i=n; i; i--)
                {
                    b=1;
                    for(int j=n; j; j--)if(TTT[i-1][j-1]!='o')b*=0;
                    if(b)
                    {
                        goto O;
                    }
                }
                for(int i=n; i; i--)
                {
                    b=1;
                    for(int j=n; j; j--)if(TTT[j-1][i-1]!='o')b*=0;
                    if(b)
                    {
                        goto O;
                    }
                }
                b=1;
                for(int i=n; i; i--)
                    if(TTT[i-1][i-1]!='o')
                        b*=0;
                if(b)
                {
                    goto O;
                }
                b=1;
                for(int i=n; i; i--)
                    if(TTT[i-1][n-i-1]!='o')
                        b*=0;
                if(b)
                {
                    goto O;
                }
            }
            if(i<2) cout<<"It's a Draw!";
        }
        if(0)
        {
X:
            cout<<"x's Winner!";
            goto End;
        }
        if(0)
        {
O:
            cout<<"o's Winner!";
            goto End;
        }
        if(0)
        {
End:
            cout<<endl;
            for(unsigned int j=0; j<n*n; j++)
            {
                if(j%n<1&&j)
                {
                    cout<<endl;
                    for(int i=n*2-1; i; i--)cout<<'-';
                    cout<<endl;
                }
                if(j%n)cout<<'|';
                cout<<TTT[j/n][j%n];
            }
        }
        cout<<"\nPress any key to Restart.";
        getche();
        system("CLS");
    }
}
