#include<iostream>
using namespace std;

enum NameHari { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}

//if the day is sunday, what day is it?
//write your code using enum and Sunday is your default 'day'
int main(){
Namehari hariIni;

Switch(hariIni){
  case Sunday: cout"1";
               break;
  case Monday: cout"2";
               break;
  case Tuesday: cout"3";
                break;
  case Wednesday: cout"4";
                  break;
  case Thursday: cout"5";
                 break;
  case Friday: cout"6";
               break;
  case Saturday: cout"7";
                 break;
}

cout<<"Hari ke-"hariIni+1;
cin>>hariIni;
return 0;


