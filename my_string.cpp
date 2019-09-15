//
// Created by shira on 9/15/19.
//
#include "my_string.h"

MyString::MyString(const char *s) {
    size = strlen(s);
    str = new char[size];
    strcpy(str, s);

}

MyString::~MyString() {
    if (str)
        delete[] str;
    str = NULL;
}

char *MyString::getString() const {
    return str;
}

void MyString::setString(const char *s) {
    if (s) {
        size_t len = strlen(s) + 1;
        if(str) {
            delete[](str);
        }
        str = new char[len];
        strcpy(str, s);
    } else str = NULL;
}

MyString &MyString::operator=(const MyString &s) {
    if (str)
        delete[] str;
    setString(s.getString());
    return *this;
}

MyString MyString::operator+(const MyString &s) {
    size_t sizeI = strlen(str);
    size_t sizeII = strlen(s.getString());
    char *temp = new char[sizeI + sizeII + 1];
    strcpy(temp, str);
    strcat(temp, s.str);
    MyString x(temp);
    delete[](temp);
    return x;
}

void MyString::operator+=(const MyString &s) {
    size_t sizeI = strlen(str);
    size_t sizeII = strlen(s.getString());
    char *temp = new char[sizeI + sizeII + 1];
    strcpy(temp, str);
    strcat(temp, s.str);
    delete[](str);
    setString(temp);
    delete[](temp);
}

MyString MyString::operator*(const int num) {
    char *temp;
    size_t len = strlen(str);
    temp = new char[len * num + 1];
    for (int i = 0; i < num; i++)
        strcpy(temp + i * len, str);
    MyString s(temp);
    return s;
}

bool MyString::operator==(const MyString &s) const {
    return !strcmp(str, s.getString());
}

size_t MyString::length() const {
    return strlen(str);
}

bool MyString::operator<(const MyString &str2) const {
    int result = strcmp(str, str2.getString());
    if (result == 0)
        return false;
    if (result > 0)
        return false;
    return true;
}

bool MyString::operator>(const MyString &str2) const {
    int result = strcmp(str, str2.getString());
    if (result == 0)
        return false;
    if (result < 0)
        return false;
    return true;;
}

bool MyString::operator<=(const MyString &str2) const {
    int result = strcmp(str, str2.getString());
    if (result > 0)
        return false;
    return true;

}

bool MyString::operator>=(const MyString &str2) const {
    int result = strcmp(str, str2.getString());
    if (result < 0)
        return false;
    return true;
}

bool MyString::operator!=(const MyString &str2) const {
    int result = strcmp(str, str2.getString());
    if (result == 0)
        return false;
    return true;
}

ostream &operator<<(ostream &os, const MyString &s) {

    for (size_t i = 0; i < s.length(); ++i) {
        os << s.str[i];
    }
    return os;
}

char &MyString::operator[](size_t index) {

    return str[index];

}




size_t strlen(const char *str) {
    const char *p = str;
    while (*p++);
    return (p - str - 1);
}

void strcpy(char *dst, const char *src) {
    while ((*dst++ = *src++));
}

int strcmp(const char *s1, const char *s2) {
    while (*s1 && *s1++ == *s2++);
    return (*--s1 - *--s2);
}

void strcat(char dst[], const char src[]);

void strcat(char *dst, const char *src) {
    while (*dst++);
    --dst;
    strcpy(dst, src);
}
