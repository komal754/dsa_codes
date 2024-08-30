#include <iostream>
using namespace std;

int daysReq(int upspeed, int downspeed, int reqheight)
{
if(upspeed>reqheight){
    return 1;
}

int curr_height=0;
int reqdays=1;

while(curr_height<reqheight){

    curr_height+=upspeed;

    if(curr_height>=reqheight){
        return reqdays;
    }
    curr_height-=downspeed;
    reqdays++;
}
return reqdays;
}

int main()
{
    int upspeed, downspeed, reqheight;
    cout << "enter upseed" << endl;
    cin >> upspeed;
    cout << "enter downspeed" << endl;
    cin >> downspeed;
    cout << "enter reqired height" << endl;
    cin >> reqheight;

    cout << "days needed: " << endl;
    cout << daysReq(upspeed, downspeed, reqheight);
    return 0;
}