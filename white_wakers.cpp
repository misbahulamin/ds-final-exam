#include<bits/stdc++.h>
using namespace std;
//Misbahul Amin Towaha
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase!=0)
    {
        int N, C, sum=0;
        cin>>N>>C;
        int array[N];
        for(int i=0; i<N; i++)
        {
            cin>>array[i];
        }
        for(int i=0; i<N; i++)
        {
            sum+=array[i]*2;
        }
        if(sum<=C)
        {
            cout<<"Yes"<<endl;
        }
        // else if(N==1 && array[0]*2<=C)
        // {
        //     cout<<"Yes"<<endl;
        // }
        else
        {
            cout<<"No"<<endl;
        }
        testCase--;
    }
    return 0;
}