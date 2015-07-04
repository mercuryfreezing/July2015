//
//  main.c
//  MyFirstProgram
//
//  Created by roshan on 04/07/2015.
//  Copyright (c) 2015 ikompass. All rights reserved.
//

#include <stdio.h>
void calculateTaxAmount(double income);
//Declaring a function

int main(int argc, const char * argv[]) {


    double roshanIncome = 20000;
    double alanIncome = 120000;
    double rogerIncome = 500000;

    calculateTaxAmount(roshanIncome);
    printf("Roshan Income is %.2f\n", roshanIncome);
    calculateTaxAmount(alanIncome);
    calculateTaxAmount(rogerIncome);




    return 0;

}

//Implementation of function
void calculateTaxAmount(double income){

    income = 60000;
    float taxRate = 0.09;
    float taxAmount = income * taxRate;

    printf("Tax amount is %.2f\n", taxAmount);
}


