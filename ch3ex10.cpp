/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Luke Faulkner
 */

 #include <iostream>
 #include <string>


 using namespace std;

 int main(){
     // Variables
     string op;
     
     double operand1 = 0, operand2 = 0, result;

     // Input
     cin >> op;
     cin >> operand1;
     cin >> operand2;

     // Computation & Output 
     if (op.compare("plus") == 0 || op.compare("+") == 0){
         result = operand1 + operand2;
         cout << result;
     }
     else if (op.compare("minus") == 0 || op.compare("-") == 0){
         result = operand1 - operand2;
         cout << result;
     }
     else if (op.compare("mul") == 0 || op.compare("*") == 0){
         result = operand1 * operand2;
         cout << result;
     }
     else if (op.compare("div") == 0 || op.compare("/") == 0){
         result = operand1 / operand2;
         cout << result;
     }
     else {
         cout << "You did not enter a valid operand.";
     }


    return 0;
 }