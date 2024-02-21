#include <iostream>
// using namespace std;
class Animal
{
private:
    std::string name;
public:
    Animal(std::string name ){
        this ->name=name;
    }
    void showname(){
        std::cout<<"my name is : "<<this->name<<std::endl;
    }
};
void shownamefriend(Animal&a){
    a.showname();
}
int main(){
    Animal dog("spot");
    shownamefriend(dog);
    return 0;
}





