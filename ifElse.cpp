#include <iostream>
using namespace std;

int main()
{
  bool isSunday = false;
  bool isHoliday = false;

  if (isSunday && isHoliday)
  {
      cout<<"Have a greate daya"<<endl;
  }else if(isSunday && !isHoliday){

      cout<<"Today is Sunday"<<endl;
  }else{
      cout<<"Go To Work"<<endl;
  }

    // isSunday ? cout<<"Today is Sunday":cout<<"Today is Not Sunday";
  
}