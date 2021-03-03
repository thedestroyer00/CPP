/*Data conversion in cpp :
primitive -> user-define
user-define -> primitive
user-define -> user -define
*/
# include <iostream>
# include <cstdio>


class Time{
    private:
        int hrs, mins, secs;

    public:
        Time() = default;
       
        Time(int hr, int min, int sec):hrs(hr),
            mins(min), secs(sec){}

        Time(int time){
            //convert int(primitive) data type to user defined type. 
            //while creating an object of Time class
            hrs = time/3600;
            mins = (time%3600)/60;
            secs = (time%3600)%60;
        }

        int hours()const{
            return hrs;
        }
        
        void operator=(int time){
            //convert int(primitive) data type to user defined type. 
            //while assigning an int to an obj of class Time
            hrs = time/3600;
            mins = (time%3600)/60;
            secs = (time%3600)%60;
        }

        operator int(){
            //convert user defined data type to int(primitive) date type
            //while creating an int or assigning to an int 
            return (hrs*3600 + mins*60 + secs);
        }
        
        void print(){
            printf("\n Hours : %d \n Minutes : %d \n Seconds : %d\n\n", hrs, mins, secs);
        }


};

class Days{
    private:
        int days;
    
    public:
        Days() = default;

        Days(int day): days(day) {}

        Days(const Time& time){
            //convert time into day(user-defined type to user-define type)
            //while creating an obj of Days class
            days = time.hours()/24;
        }

        void operator= (const Time& time){
            //convert time day (user-defined type to user-define type)
            //while assigning Time obj to an obj of Days class type
            days = time.hours()/24;
        }
        
        void operator= (int day){
            //convert int into Days(primitive type to user-define type)
            //while assigning an int to an obj of Days class
            days = day;
        }

        void print(){
            std::cout << " Days : " << days << std::endl;
        }
};



int main(){
    //declear and initilize Time obj
    Time t = {120,45,30};
    t.print();

    //assign new value to Time obj using int
    t = 34000230;
    t.print();

    //declear and initilize Days obj using Time obj
    Days d = t; 
    d.print();

    //assign new value to Days obj using int;
    d = 45;
    d.print();

    return 0;
}
