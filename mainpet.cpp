#include "pet.h"



int main(int argc, char **argv){
  Pet *p = new Pet("Buster", 6, "Dog", 85);
 Pet *p2 = new Pet("Cato", 3, "Cat", 18);


//pet number 1
 cout << "Name: " << p->getName() << endl;
 cout << "Age: " << p->getAge() << endl;
 cout << "Type: " << p->getType() << endl;
 cout << "Weight (lbs): " << p->getWeight() << endl;
 cout << endl;

//second Pet
 cout << "Name: " << p2->getName() << endl;
 cout << "Age: " << p2->getAge() << endl;
 cout << "Type: " << p2->getType() << endl;
 cout << "Weight (lbs): " << p2->getWeight() << endl;

//garbage collection
 delete p;
 delete p2;
 return 0;
}
