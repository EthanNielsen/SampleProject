//
//  Controller.cpp
//  SampleProject
//
//  Created by Nielsen, Ethan on 1/25/18.
//  Copyright © 2018 Ctech. All rights reserved.
//

#include "Controller.hpp"

using namespace std; //In order to use the keywords you need to have this line.

Controller :: Controller()
{
    int EasyAs [3] = {1,2,3};
    
    double Answer [2]  = {true,false};
    
    char names [4][10] = {"Samantha","Ben","John","Alex"};
    
    char myName [1][6] = {"Ethan"};
    
    cout << &myName << endl;
}

void Controller :: Start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This is the " << index << " time in the loop" << endl;
    }
    
    for (int index = 13; index < 31; index++)
    {
        cout << "This is number " << index << endl;
    }
}

