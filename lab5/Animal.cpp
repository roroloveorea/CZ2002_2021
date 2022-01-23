#include <iostream>
#include <string>
using namespace std ;
enum COLOR { Green, Blue, White, Black, Brown } ;
class Animal {
public :
/*Animal() : _name("unknown") {
cout << "constructing Animal object "<< _name << endl ;
}*/
//new
Animal(string n, COLOR c):_name(n),_color(c){
    //_name = n;
    //_color = c;
  cout << "constructing Animal object "<< n << endl ;
  cout << "constructing Animal color "<< c << endl ;
}
/*~Animal() {
cout << "destructing Animal object "<< _name << endl ;
}*/
void speak() const {
cout << "Animal speaks "<< endl ;
}
void move() const { }
private :
string _name;
COLOR _color ;
};
int main() {
    Animal a;
a("bear",Brown);
a.speak() ;
 cout << "Program exiting …. "<< endl ;
return 0;
}
