//
// Created by shira on 9/15/19.
//

#include "test.h"

void test_creat() {
    cout << "------------- test creat MyString ------------" << endl;
    MyString str("Bassa Sababa");
    cout << str << " created with () assigment\n";

    MyString str2 = "Bassa Sababa";
    cout << str2 << " created with '=' \n";

}

void test_compere() {
    cout << "------------- test comper MyString ------------" << endl;
    MyString str1 = "Shira";
    MyString str2 = "Elana";
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;


    cout << "str1 < str2 = " << (str1 < str2) << endl;
    cout << "str1 > str2 = " << (str1 > str2) << endl;
    cout << "str1 >= str2 = " << (str1 >= str2) << endl;
    cout << "str1 <= str2 = " << (str1 <= str2) << endl;
    cout << "str1 == str2 = " << (str1 == str2) << endl;
    cout << "str1 != str2 = " << (str1 != str2) << endl;


}

void test_manipulation() {
    cout << "------------- test manipulate MyString ------------" << endl;

    MyString str1 = "Nana";
    MyString str2 = "Banana";

    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    MyString str3 = str1 + str2;
    cout << "str3 = str1+str2 = " << str3 << endl;
    str1 += str2;
    cout << "str1+=str2 = " << str1 << endl;
}
