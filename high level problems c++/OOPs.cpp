#include<iostream>
#include<cstring>
using namespace std;
//////////////////////////blue print///////////////////////////////////////////
class Car {
    private:
    int price;

    public:
    //data members
    char name[100];
    int price;
    int seats;
    int model;
    //fuctions
    //default constructor
    ~Car() {
        cout << "inside default constructoe\n";
    }
    // 2. parameterized constructor
    Car (char *a, int p, int s, int m){
        strcpy(name, a);
        price = p;
        model = m;
        seats = s; 
    }
    // 3. copy costructor
    Car(Car &X){
        cout << "Inside copy constructor\n";
        strcpy(name, X.name);
        price = X.price;
        model = X.model;
        seats = X.price;
    }
    //4. copy assignment operator
    // C = B , c already bna h and b bhi already created h
    // we are updating values of c with object b

    void operator=(Car &X){

       // name, price, model, seats: C
       // x.name, x.price,x.model etc

       cout << "Inside Copy Assignment Operator\n";
       strcpy(name,X.name);
       price = X.price;
       model = X.model;
       seats = X.seats;

    }
    // destructor
    Car(){
        cout << " Destroying object:" << name << endl;

    }
    // operator overloading
    bool operator>(Car &X){
        return price > X.price;
    }
//by using your void operator as a ternary operator 

    //print
    void print(){
        cout << "name    :" << name << endl;
        cout << "price    :" << price << endl;
        cout << "model   :" << model << endl;
        cout << "seats   :" << seats << endl;
    }
    
    // setter
    void setPrice(int p){
        if (p > 100 and p < 180){
            price = p;

        }
        else {
            price = 150;
        }
    }
    // getter
    int getPrice(){
        return price;
    }

};
/////////////////////////blue print///////////////////////////////////////////
int main()
{
    
    Car A;// A is an object of class car
    strcpy(A.name, "BMW");
    A.setPrice(100);

    A.price = 100;
    A.seats = 5;
    A.model = 2020;
    cout << "Price of A:" << A.getPrice() << endl;
    

    //if we will get the same value theno nlt this will be used 
 char name[] = "Audi";
    Car B(name, 200, 4, 2022);
    Car C = A;

    // already bane huye object ki details ko update krna
    C = B;
    // operator overloading kisi bhi operator ki functionality ko upfate kr skte h
    if (C > A) {
        cout << " C is expensive\n ";

    }
    else {
        cout << " A is expensive\n";
    }

    A.print();
    B.print();
    C.print();
    //new object bnana from already created object: copy constructor

    return 0;

}





























































