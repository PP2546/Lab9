#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
  string character;
  int num;
  int height;
  int bounty;
        cout << "Enter your age: ";
        cin >> num;
        if(num <= 25){
            cout << "Enter your height: ";
            cin >> height;
            if(height < 100){
                character = "Chopper";
            }else if(height < 180){
                character = "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                if(bounty > 11*pow(10,8)){
                    character = "Zoro";
                }else{
                    character = "Sanji";
                }
                }
        }else if(num <= 60){
            cout << "Enter your bounty: ";
            cin >> bounty;
            if(bounty > 5*pow(10,8)){
                character = "Jinbe";
            }else{
                character = "Franky";
            }
            
        }else{
            character = "Brook";
        }
        cout << "Your character = " << character ;
   return 0;
}
