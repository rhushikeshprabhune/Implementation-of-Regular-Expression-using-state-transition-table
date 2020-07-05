#include <bits/stdc++.h> 
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std; 

int main(int argc, char* argv[])
{ 
    string input = argv[1];
    string matched_string;
    int current = 0;
    int next = 0;
    int transition_table[4][3] = {{1,-1, 2}, {1, 3, -1}, {1, -1, -1}, {-1, -1, 3}}; //transition table designed from 
    int i=0;                                                                        //the DFA
    int length = input.length();
    while(i<length)
    {
        char char_ip = input[i];
        int int_ip = char_ip - '0';
        next = transition_table[current][int_ip];
        if(next==-1)
        break;
        else
        matched_string += input[i];
        
        current = next;
        i++;
    }

    if(current == 3)
    cout << matched_string << endl;
    else
    cout << "NULL" << endl;
    
    return 0;
} 
