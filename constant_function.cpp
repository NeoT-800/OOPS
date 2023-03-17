#include<iostream>
using namespace std;

class Fraction{

    private: 
        int denominator;
        int numerator;

    public:   
        Fraction(){
            
        }  
        Fraction(int numerator, int denominator){
            this -> numerator = numerator;
            this -> denominator = denominator;
        }
    
//     Note:  Constant functions are those which don’t change any property of current objects. Only constant objects of the class could invoke these.
        
    int getNumerator() const{
            return numerator;
        }
        int getDenominator() const{
            return denominator;
        }
        void setNumerator(int r){
            numerator = r;
        }
        int setDenominator(int d){
            denominator = d;
        }
        void print() const{
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
        void add(Fraction f2){
            int lcm = this -> denominator*(f2.denominator);
            int x = lcm/denominator;
            int y = lcm/f2.denominator;
            int num = x*numerator + y*(f2.numerator);
            numerator = num;
            denominator = lcm;
            simplify();
        }
};

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);

    Fraction const f3;
    cout<<f3.getNumerator()<<" and "<<f3.getDenominator()<<endl;

}
