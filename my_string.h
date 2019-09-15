//
// Created by shira on 9/15/19.
//

#ifndef CPP_CLASS_STRING_SHIRAZALTSMAN_MY_STRING_H
#define CPP_CLASS_STRING_SHIRAZALTSMAN_MY_STRING_H
#include <iostream>
using namespace std;
class MyString
{
public:
    // constructor.
    MyString(const char* s = NULL);
    MyString(const MyString & s);
    ~MyString();
    // view function.
    char* getString() const;
    // modify function.
    MyString & operator =(const MyString &);
    // operators
    bool operator==(const MyString &) const;

    MyString operator* (int);
    bool operator<(const MyString &) const;
    bool operator>(const MyString &) const;
    bool operator<=(const MyString &) const;
    bool operator>=(const MyString &) const;
    bool operator!=(const MyString &) const;

    char& operator[] (size_t index);
    friend ostream & operator<<(ostream &, const MyString &);
    MyString operator+(const MyString & s);
    void operator+=(const MyString & s);
    size_t length() const;

private:
    char * str;
    size_t size;
    void setString(const char* s);
};

size_t strlen(const char str[]);
void strcpy(char *dst, const char* src);
int strcmp(const char *s1, const char *s2);
void strcat(char *dst, const char *src);
#endif //CPP_CLASS_STRING_SHIRAZALTSMAN_MY_STRING_H
