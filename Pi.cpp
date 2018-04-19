
#include <iostream>
#include <vector>
using namespace std;
struct Point
{
    float x,y;
};
double approx(vector<Point>pts)
{
    float Pi = 0.0;
    vector<Point>::iterator it;
    for(int i=0;i<pts.size();++i)
    {
        cout<<pts[i].x<<" "<<pts[i].y<<endl;
    }
    cout<<endl;
    int diametr;
    int radius;
    int temp=pts[0].x*2+pts[0].y*2;
    if (temp<=1)
    {
        cout<<"Мы внутри диска";
        radius++;
    }
    else
        cout<<"За пределами";
    diametr=radius*2;
    float maxX=pts[0].x;
    float maxY=pts[0].y;
    for(int i=0;i<pts.size();++i)
    {
        if(maxX<pts[i].x)
        {
            maxX=pts[i].x;
        }
        else if(maxY<pts[i].y)
        {
            maxY=pts[i].y;
        }
    }
    float dlina;
    float tempDiametr;
    if(maxX>maxY)
    {
        dlina=diametr*3.14;
        tempDiametr=diametr-maxX;
        Pi=dlina/tempDiametr;
    }
    
    if(maxX<maxY)
    {
        dlina=diametr*3.14;
        tempDiametr=diametr-maxY;
        Pi=dlina/tempDiametr;
    }
    cout<<endl;
    return Pi;
    
    
}

int main()
{
    Point point1;
    point1.x=0.2;
    point1.y=0.6;
    Point point2;
    point2.x=0.2;
    point2.y=0.4;
    vector<Point> vec(2);
    vec[0]=point1;
    vec[1]=point2;
    cout<<approx(vec);
    
}
