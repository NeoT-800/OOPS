#include<iostream>
using namespace std;

class Fraction{

    private: 
        int denominator;
        int numerator;

    public:     
        Fraction(int numerator, int denominator){
            this -> numerator = numerator;
            this -> denominator = denominator;
        }
        void print(){
            cout<< this -> numerator<<" / "<<denominator<<endl;
        }
        void simplify(){
            int gcd = 1;
            int j = min(numerator,denominator);
            for(int i=1; i<=j; i++){
                if(numerator%i==0 && denominator%i==0){
                    gcd = i;
                } 
            }
            numerator = numerator/gcd;
            denominator = denominator/gcd;
        }
        Fraction add(Fraction const &f2){
            int lcm = this -> denominator*(f2.denominator);
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + y*(f2.numerator);
            // numerator = num;
            // denominator = lcm;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction operator+(Fraction const &f2) const{
            int lcm = this -> denominator*(f2.denominator);
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + y*(f2.numerator);
            // numerator = num;
            // denominator = lcm;
            Fraction fnew(num,lcm);
            fnew.simplify();
            return fnew;
        }
        Fraction multiply(Fraction const &f2){
            int n = numerator*(f2.numerator);
            int d = denominator*(f2.denominator);
            Fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }
        Fraction operator*(Fraction const &f2) const{
            int n = numerator*(f2.numerator);
            int d = denominator*(f2.denominator);
            Fraction fnew(n,d);
            fnew.simplify();
            return fnew;
        }
        bool operator==(Fraction const &f2) const{
            return (numerator==(f2.numerator) && denominator==(f2.denominator));
        }
};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    Fraction f5 = f1 * f2;

    f1.print();
    f2.print();
    f3.print();
    f4.print();
    f5.print();

    if(f1==f2){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
}