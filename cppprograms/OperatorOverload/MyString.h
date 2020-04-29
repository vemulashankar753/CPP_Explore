

/*
 * MyString.h
 *
 *  Created on: Apr 23, 2020
 *      Author: svemul200
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_


class MyString{
private:
    char *s;
 public:

    MyString();
    MyString(const char* s1); //overloaded constuctor
    MyString(const MyString& source); //Copy Constructor
    MyString(MyString &&rhs); //Move Constructor //Based on Rvalue REference
    ~MyString();
    
    MyString& operator=(const MyString& rhs); //Copy Assigment Constructor
    MyString& operator=(MyString&& rhs); //Move Assignment Operator
    void display() const;
    int get_length() const;
    const char* get_str() const;
   

};


#endif /* MYSTRING_H_ */


