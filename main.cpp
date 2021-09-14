#include <iostream>

using namespace std;
struct dataset{
        int M;
        string word;

    };

int main()
{
    int N,i;
    cin>>N;
    string word;

    dataset big_array[N];

    if (1<=N<=1000)
    {
        int i=0;
        do{

                cin>>big_array[i].M>>big_array[i].word;
                if ((word.length())<=80)
                {
                    if (big_array[i].M<=(big_array[i].word.length()))
                    {
                        for(int j=0;j<(big_array[i].word.length())-1;j++)
                    {
                       if(j==big_array[i].M-1)
                       {
                           for( int t=j;t<((big_array[i].word.length())-1);t++)
                           {
                               word[t]=word[t+1];
                           }
                           break;
                       }
                    }
                    }
                }

                i++;
        }
        while(i<N);
        for(int i=1;i<=N;i++)
        {
            cout<<i<<"\t"<<big_array[i-1].word<<endl;
        }

    }

    return 0;
}
