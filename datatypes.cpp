/*data types
  primitive:integer,float,character,boolean.
  derieved :function,array,pointer,reference.
  user-defined: class,structure,union,enum.
  */
 /* int = 4 bytes [1 byte = 8 bits]
        unsigned =  4 bytes => 0 to 2^32-1 because 
        signed   =  4 bytes    [2^31 to 2^31-1 MSB indicates the sign if '0'= positive else = negative]
    float = 4 bytes eg: 1.232323 upto 7 decimal
    double = 8 bytes eg: 1.23234245 upto 15 decimal
    char   = 1 byte eg: 'c' it stores the value using the ASIIC table "a" = 65
    boolean = 1 byte eg: 1,0 here we use 1 byte but we need only 1 bit because we can access only 1 byte  hard disc
    */
   /* signed = 4 bytes
     unsigned= 4 bytes
     long = 8 bytes
     short = 2 bytes
     */ 
#include<iostream>
using namespace std;
int main(){
    int i;//declaration
    i = 10;//intialization
    cout<<"size of int "<<sizeof(i)<<endl;
    float f;
    cout<<"size of float "<<sizeof(f)<<endl;
    double d;
    cout<<"size of double "<<sizeof(d)<<endl;
    char c;
    cout<<"size of char "<<sizeof(c)<<endl;
    bool b;
    cout<<"size of bool "<<sizeof(b)<<endl;
    short int si;
    cout<<"size of short int "<<sizeof(si)<<endl;

    long int li;
    cout<<"size of long int "<<sizeof(li)<<endl;
    unsigned int ui ;
    cout<<"size of unsigned int "<<sizeof(ui)<<endl;
    signed int sii;
    cout<<"size of signed int "<<sizeof(sii)<<endl;
    
    return 0;

    

}