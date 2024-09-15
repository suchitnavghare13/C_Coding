#include<iostream>
//using friend function add 2 time objects t1 anf t2 and print result time
//example time 1=1hr 40mins 35sec
//        time 2=2hr 50mins 55sec  
//               3   90     90
//                90+90/60  90%60    

//reult time     4hr 31mins  30sec

using namespace std;
//forward decleration
class Time
{
    private:
        int hh,mm,ss;
    public:
        void set_Time(int h,int m,int s)
        {
            hh=h;
            mm=m;
            ss=s; 
            cout<<"\nTime set to "<<hh<<" : "<<mm<<" : "<<ss;
        }
        void display_Time()
        {
            cout<<"\nTime is "<<hh<<" : "<<mm<<" : "<<ss;
        }
        friend Time add(Time t1,Time t2);// proto-typed within class

};

Time add(Time t1,Time t2)
{
  Time temp;
  temp.hh=t1.hh+t2.hh;
  temp.mm=t1.mm+t2.mm;
  temp.ss=t1.ss+t2.ss;
  temp.mm=temp.mm+temp.ss/60;//adds min
  temp.ss=temp.ss%60;//copies leftover sec
  temp.hh=temp.hh+temp.mm/60;//adds hrs
  temp.mm=temp.mm%60;//copies leftover mins
  return temp;
}

int main()
{
 Time t1,t2,t3;
 t1.set_Time(1,40,35);
 t2.set_Time(2,50,55);
 t3=add(t1,t2);
 t1.display_Time();
 t2.display_Time();
 t3.display_Time();
}
