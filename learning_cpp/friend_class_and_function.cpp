//simple cpp program to show how friend function and friend class work:

# include <iostream>
# include <string>

// Declaration for Main class and Friend class
class MainClass;
class FriendClass;
void friendfunction(const MainClass&);

// Defination for Main class
class MainClass{
    private:
        int data;
        friend FriendClass;
        void friend friendfunction(const MainClass&);

    public:
        MainClass(): data(0){}
        MainClass(int val): data(val){}

        void print(void);

};

void MainClass::print(void){
    std::cout << "Print In MainClass" << std::endl;
    std::cout << data << std::endl;
}

//Defination for Friend function 

void friendfunction(const MainClass& obj){
    std::cout << "Print in Friend Function!" << std::endl;
    std::cout << obj.data << std::endl;
}

//Defination for Friend class 

class FriendClass{
    private:
        std::string cap;
        
    public:
        FriendClass():cap("NEW OBJECT"){}
        FriendClass(std::string s): cap(s){}
        
        void printdata(void);
        void printMain(const MainClass&);
};

void FriendClass::printdata(void){
    std::cout << "Print In FriendClass!" << std::endl;
    std::cout << cap << std::endl;
}

void FriendClass::printMain(const MainClass& obj){
    std::cout<< "Print In FriendClass!" << std::endl;
    std::cout << "MainClass data : " << obj.data << std::endl;
}


int main(){
    MainClass obj1;
    obj1.print();
    FriendClass obj2;
    obj2.printMain(obj1);
    friendfunction(obj1);

    return 0;
}

