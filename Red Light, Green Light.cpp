#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
   int t=1;
   cin>>t;
   while(t--)
   {
      solve();
      cout<<"\n";
   }
   
   return 0;
}
void solve()
{
    int NoOfPlayers,HeightofBoth,count=0;
    cin>>NoOfPlayers>>HeightofBoth;
    int PlayerHeight[NoOfPlayers];
    for (int i = 0; i < NoOfPlayers; i++)
    {
        cin>>PlayerHeight[i];
    }
    
    for (int i = 0; i < NoOfPlayers; i++)
    {
        if (PlayerHeight[i]>HeightofBoth)
        {
            count++;
        }
    }
    cout<<count;
}