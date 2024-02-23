#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    // int health;
    // int level;
    int health=15;

    private:
    int level=20;
    void print(){
        cout<<"level is : "<<level<<endl;
    }
    // getter setter 
    int Gethealth(){
        return health;
        
    }
    char getLevel(){
        return level;
        // here level is prinvate , so to acces it in main fucntion we can use getter , ramesh.Getlevel();
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
};
int main(){

   //creating object of class Hero
//    Hero h1;
//    cout<<"size : "<<sizeof(h1);
     Hero Ramesh;
    //  Ramesh.setHealth(20);
    //  cout<<"health : "<<Ramesh.health<<endl;
    //  cout<<"health : "<<Ramesh.setHealth()<<endl;
    //  cout<<"level : "<<Ramesh.level<<endl;
    // cout<<"ramesh level is : "<<Ramesh.getLevel()<<endl;

return 0;
}