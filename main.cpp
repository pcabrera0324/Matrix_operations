//
//  main.cpp
//  Matrix[Struct]
//
//  Created by Paul Cabrera on 10/15/18.
//  Copyright © 2018 Paul Cabrera. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;



struct matrixx{
    int one;
    int two;
    int three;
    int four;
    
    
};

void get_matrix(matrixx&,matrixx&);
void menu(matrixx&,matrixx&,int&option,matrixx&,matrixx&,matrixx&scal,int&,matrixx&,int&det);
void matrix_addition(matrixx&,matrixx&,int&option,matrixx&);
void matrix_subb(matrixx&,matrixx&,int&option,matrixx&);
void matrix_multi(matrixx&,matrixx&,int&option,matrixx&);
void scalar_mult(matrixx&,matrixx&scal,int&);
void inverse_matrix(matrixx&,int&det);


int main(int argc, const char * argv[]) {
    
    matrixx a,b,sum,sub,scal,multi;
    int option=0;
    int k=0;
    int det;
    menu(a,b,option,sum,sub,scal,k,multi,det);
    
}

void get_matrix(matrixx&a,matrixx&b)
{
    cout << "1st matrix" << endl;
    cin >> a.one;
    cin >> a.two;
    cin >> a.three;
    cin >> a.four;
    
    cout << "2nd matrix" << endl;
    cin >> b.one;
    cin >> b.two;
    cin >> b.three;
    cin >> b.four;
    
}


void menu(matrixx&a,matrixx&b,int&option,matrixx&sum,matrixx&sub,matrixx&scal,int&k,matrixx&multi,int&det)
{
    
    do{
        cout << "===MENU===\n";
        cout << "1.Matrix Addition\n";
        cout << "2.Matrix Subtraction\n";
        cout << "3.Scalar Multiplication\n";
        cout << "4.Matrix Multiplication\n";
        cout << "5.Inverse of a matrix\n";
        cout << "6.Exit\n";
        cout << "Please choose a number betweeen 1-5" << endl; cin>>option;
        
        switch(option){
            case 1:matrix_addition(a, b, option,sum); break;
            case 2:matrix_subb(a,b,option,sub); break;
            case 3:scalar_mult(a,scal,k); break;
            case 4:matrix_multi(a, b, option, multi); break;
            case 5:inverse_matrix(a, det); break;
            case 6 : cout << "Thank you" << endl;
        }
        
    } while (option!=6);
    
}


void matrix_addition(matrixx&a,matrixx&b,int&option,matrixx&sum)
{
    
    get_matrix(a,b);
    sum.one=a.one+b.one;
    sum.two=a.two+b.two;
    sum.three=a.three+b.three;
    sum.four=a.four+b.four;
    cout << "==ANSWER==" << endl;
    
    
    cout << sum.one << " " << sum.three << endl;
    cout << sum.two << " " << sum.four << endl;
    
    
    
}


void matrix_subb(matrixx&a,matrixx&b,int&option,matrixx&sub)
{
    
    get_matrix(a,b);
    sub.one=a.one-b.one;
    sub.two=a.two-b.two;
    sub.three=a.three-b.three;
    sub.four=a.four-b.four;
    cout << "==ANSWER==" << endl;
    
    
    cout << sub.one << " " << sub.three << endl;
    cout << sub.two << " " << sub.four << endl;
    
}


void matrix_multi(matrixx&a,matrixx&b,int&option,matrixx&multi)
{
    
    get_matrix(a,b);
    multi.one=a.one*b.one;
    multi.two=a.two*b.two;
    multi.three=a.three*b.three;
    multi.four=a.four*b.four;
    cout << "==ANSWER==" << endl;
    
    
    cout << multi.one << " " << multi.three << endl;
    cout << multi.two << " " << multi.four << endl;
    
}

void scalar_mult(matrixx&a,matrixx&scal,int&k)
{
    cout << "Enter scalar\n";
    cin >>k;
    cout << "1st matrix" << endl;
    cin >> a.one;
    cin >> a.two;
    cin >> a.three;
    cin >> a.four;
    scal.one=k*(a.one);
    scal.two=k*(a.two);
    scal.three=k*(a.three);
    scal.four=k*(a.four);
    cout << "==ANSWER==" << endl;
    
    
    cout << scal.one << " " << scal.three << endl;
    cout << scal.two << " " << scal.four << endl;
    
}

void inverse_matrix(matrixx&a,int&det)
{
    
    cout << "1st matrix" << endl;
    cin >> a.one;
    cin >> a.two;
    cin >> a.three;
    cin >> a.four;
    det=(a.one*a.four)-(a.two*a.three);
    
    cout << "==ANSWER==" << endl;
    
    
    cout << a.four/det << " " << -a.three/det << endl;
    cout << -a.two/det << " " << a.one/det << endl;
    
}


