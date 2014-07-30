#include<iostream>
using namespace std;
int check(int width[],int i,int j)
    {
     int b=width[i],c;
    for(int a=i;a<=j;a++)
        {
        if(b>width[a])
            {
            b=width[a];
        }
        
    }
     switch(b)
        {
        case 1: c=1;
        break;
        case 2: c=2;
        break;
        case 3: c=3;
        break;
        default:
        cout<<"wrong input";
    }
    return c;
}
int main()
    {
    int N,T;
    cin>>N;
    cin>>T;
    int width[N];
    for(int i=0;i<N;i++)
        {
    cin>>width[i];
    }
    int i,j,c;
    while(T--){
    cin>>i>>j;
   c=check(width,i,j);
        cout<<c<<endl;}
}