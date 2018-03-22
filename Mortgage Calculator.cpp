/*Mortgage claculator
 * This prgogram will calculate the monhtly payment for a loan. It will then show the schedual of payments if the user requests it.
 * Date: 20/04/11
 * Version: 1.0
 */

#include <iostream>
#include <fstream>
#include <math.h>
#include "conio.h"

using namespace std;

//mortgage calculator function.
//inputs: origninal loan amount, length and yearly interest in percent.
//outputs: outputs to the screen.
void loancalc(float p, float l, float i){
float j,n,h,c,m,q;
char s;
int month;
//calculates the monthly interest rate
j=i/(12*100);
//calculates the number of months
n=l*12;
month= 0;
//calculates the monthly payment
m=(p*j)/(1-pow((1+j),(-n)));
cout<<"Your monthly payment is: "<<m<<endl;
//checks whether the user would like to see the schedual of payments
cout<<"Would you like to see the schedual of payments? (y for yes)."<<endl;
cin>>s;
if (s=='y'){
cout<<"Bellow is the Monht, Interest, Principal and the amount you have left to pay per month respectivly:"<<endl;
//while p is bigger than 0 (when the loan has not been payed off in full) keep on looping.
while(p>0){
//inc months integer just for display purposes
month++;
//calculates this months interest
h=p*j;
//calculates the amount of the loan you have paid of that month
c=m-h;
//it then takes this number away from the amount of the loan and calculates the amount of the loan you have left to pay off
q=p-c;
//displays amounts.
cout<<month<<" "<<h<<" "<<c<<" "<<q<<endl;
//resets the loan to this value
p=q;}}}

int main(void){
float p,l,i;
//asks for inputs
cout<<"Please enter the Principle amount of the loan:"<<endl;
cin>>p;
cout<<"Please enter the length of the loan in years:"<<endl;
cin>>l;
cout<<"Please enter the anual interest rate of the loan:"<<endl;
cin>>i;

//calls on the calculation function
loancalc(p,l,i);

//stops the program from ending after results are displayed.
cout << "Please press any key to close.\n" << endl;
_getch();
return 0;}

