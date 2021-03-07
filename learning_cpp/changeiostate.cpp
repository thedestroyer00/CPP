//Manually setting iostate in cpp

# include <iostream>

std::istream& readin(std::istream& s){
    int val;
    std::cout << "enter number : ";
    s >> val;
    s.clear(s.failbit); //set istream to failstate
    
    if(val != 0){
        s.clear(s.goodbit); //set istream to goodstate
        std::cout << val << std::endl;
        return s;
    }
    else{
        std::cout << "Failbit set!" << std::endl;
        return s;
    } 
        
}

int main(){
   
    while(true){
        std::istream& in = readin(std::cin);
        if(in)
            std::cout << "Goodbit Return!" << std::endl;
        else{
            std::cout << "Reseting to goodbit!" << std::endl;
            in.clear(in.goodbit); //set istream to goodstate
            if(in){
                std::cout << "Goodbit set!" << std::endl;
                break; 
            }
            else{
                std::cout << "Fail to set!" << std::endl;
                break;
            }
        }
    }


    return 0;
}

