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
    
}

void Controller :: Start()
{
    for (int index = 0; index < 10; index++)
    {
        cout << "This is the " << index << " time in the loop" << endl;
    }
}
