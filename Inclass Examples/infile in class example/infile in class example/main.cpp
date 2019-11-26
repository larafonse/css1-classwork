//
//  main.cpp
//  infile in class example
//
//  Created by Nicolas Lara on 11/21/19.
//  Copyright © 2019 Nicolas Lara. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream in_file;
    string str;
    
    in_file.open("/Users/nicolaslara/Documents/infile in class example/infile in class example/input.txt");
    
    if(in_file.fail())
    {
        cout<<"Error: file open failed.\n";
        exit (1);
    }
    
    
    in_file>>str;
    
    cout<<str<<endl;
    
    in_file.close();
    
    return 0;
}
