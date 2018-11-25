//
//  main.cpp
//  Wk12_Ch10
//
//  Created by Mason Fisher on 11/14/18.
//  Copyright © 2018 Mason Fisher. All rights reserved.
//

#include <iostream>
#include <ctime>
#include "Classes/arrayListType.h"

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int size = 10000;
    arrayListType<int> list10k(size);
    for(int i = 0; i < size; i++)
            list10k.insert(rand()%10);
    
    list10k.print();
    list10k.shellSort();
    list10k.print();
    cout << "There where " + to_string(list10k.getNumComp()) + " item comparisons in this sort.\n";
    cout << "There where " + to_string(list10k.getNumMove()) + " item movements in this sort.\n";
    
    return 0;
}
