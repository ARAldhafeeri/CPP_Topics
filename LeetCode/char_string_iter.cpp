/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".

*/


class Solution {
public:
    string defangIPaddr(string address) {
        string output;
        for (char i : address)
        {
            if( i == '.') {
                output+= "[.]";
            } 
            else {
                output += i;
            }
        }
        return output;
    }
};