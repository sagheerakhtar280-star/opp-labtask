#ifndef Darr_h
#define Darr_h
#include<iostream>
using namespace std;
class DArray{
    DArray();
    DArray& operator = (const DArray&);
    ~DArray();
    void push_back(int);

};
#endif
ostream& operator<<(ostream&out,const DArray&);
