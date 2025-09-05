#include <bits/stdc++.h>
using namespace std;
class car{
    public:
        int x,y;
        string car_name;
        car(){

        }
        car(string car_name,int x,int y)
        {
            this->car_name=car_name;
            this->x= x;
            this->y=y;
        }
        int dist()
        {
            return x*x + y*y;
        }

};
bool comp(car A,car B)
{
    int da = A.dist();
     int db = B.dist();
     if(da==db)
        return A.car_name.length()<B.car_name.length();
    return da<db;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<car>v;
    for(int i=0;i<n;i++)
    {
        string n;
        int x,y;
        cin>>n>>x>>y;
        car temp(n,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),comp);
    for(auto it :v)
    {
        cout<<"car_name :"<<it.car_name<<" distance :"<<it.dist()<<"km Location :"<<it.x<<" "<<it.y;
        cout<<"\n";
    }
}