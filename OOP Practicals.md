# Simple Programs :

### Practical - 1 : Write a program to display "Hello World !" 

```cpp
#include <iostream>
using namespace std;

int main (){
cout<<"Hello World";

}
```
![[Pasted image 20241001022340.png]]
### Practical - 2 : Write a program to insert new lines to display multiple statements: ["Hello World !","I am Jeet"] 

```cpp
#include <iostream>
using namespace std;

int main (){
cout<<"Hello World"<<endl<<"I am Jeet";
cout<<"\nThis is in a new line";

}
```
![[Pasted image 20241001022417.png]]

### Practical - 3 : Write a program to write single line and multi-line comments. 

```cpp
#include <iostream>
using namespace std;

int main (){

// This is a single line comment

/*
This is a multi line comment
This is written using the "/* ..."
*/
}
```

### Practical - 4 : Write a program to display size of [int, float, double, char] in your system. 

```cpp
#include <iostream>
using namespace std;

int main (){
cout<<"Size of int :"<<sizeof(int);
cout<<"Size of float :"<<sizeof(float);
cout<<"Size of double :"<<sizeof(double);
cout<<"Size of char :"<<sizeof(char);
}
```
![[Pasted image 20241001022913.png]]

# Class Programs :

### Practical - 1 : Write a program to perform addition using arithematic addition.

```cpp
#include <iostream>
using namespace std;

class Arithematic {
private:
	int a,b;

public:
	void add(int a, int b){
		cout<<"Addition of "<<a<<" and "<<b<<" : "<<a+b;
	}
};

int main (){
	int a,b;

	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;

	Arithematic a1;
	a1.add(a,b);
	return 0;
}
```
![[Pasted image 20241001023007.png]]
### Practical - 2 : Write a program to find the largest number among Three numbers.

```cpp
#include <iostream>
using namespace std;

class Arithematic {
private:
	int a,b,c;

public:
	void max(int a, int b, int c){
		a>b? a>c? cout<<"A is max" : cout<<"C is max" : b>c?          cout<<"B is max" : cout<<"C is max";
	}
};

int main (){
	int a,b,c;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<"Enter the value of c ";
	cin>>c;

	Arithematic a1;
	a1.max(a,b,c);
	return 0;
}
```
![[Pasted image 20241001023037.png]]
### Practical - 3 : Write a program to swap two numbers.

```cpp
#include <iostream>
using namespace std;

class Operations {
public:
void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout<<"After swap : \na: "<<a<<"\nb: "<<b;
	}
};

int main (){
	int a,b;

	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;

	cout<<"Before swap : \na: "<<a<<"\nb: "<<b<<endl;

	Operations o1;
	o1.swap(a,b);
	return 0;
}
```
![[Pasted image 20241001023101.png]]
### Practical - 4 : Write a program to swap two numbers without using temporary numbers.

```cpp
#include <iostream>
using namespace std;

class Operations {
private:
	int a = 10,b = 5;

public:
	void swap(int a, int b){
		
	cout<<"Before swap : \na: "<<a<<"\nb: "<<b<<endl; 
    a = a+b;
    b = a-b;
    a = a-b;
	cout<<"After swap : \na: "<<a<<"\nb: "<<b; 
	}
};

int main (){
    Operations o1;
	o1.swap(10,5);
    
	return 0;
}
```
![[Pasted image 20241001023133.png]]
### Practical - 5 : Write a program to find if number is odd or even.
```cpp
#include <iostream>
using namespace std;

class Operations {
private:
	int a;

public:
	void isEven(int a){
	(a%2==0)?cout<<a<<" is even":cout<<a<<" is odd";
	}
};

int main (){
	int a;
	Operations o1;
	cout<<"Enter the value to test: ";
	cin>>a;
	o1.isEven(a);
    
	return 0;
}
```
![[Pasted image 20241001023200.png]]
### Practical - 6 : Write a program to find the sum of natural numbers.

```cpp
#include <iostream>
using namespace std;

class NaturalSum {
public:
    int naturalSumFn(int n) {
        return n * (n + 1) / 2;
    }
};

int main() {
    int n = 5;
    NaturalSum obj;
    cout << "Sum of first " << n << " natural numbers: " << obj.naturalSumFn(n);
    return 0;
}
```
![[Pasted image 20241002113245.png]]
### Practical - 7 : Write a program to find leap year.
```cpp
#include <iostream>
using namespace std;

class Operations {
private:
	int year;

public:
	void isLeapYear(int year){
		if((year % 400 == 0) || ((year % 100 !=0) && (year % 4 == 0) )){
			cout<<year<<" Is a leap year.";
		} else{
			cout<<year<<" Is not a leap year.";
		}
	}
};

int main (){
	int a;
	Operations o1;
	cout<<"Enter the value to test: ";
	cin>>a;
	o1.isLeapYear(a);
    
	return 0;
}
```
![[Pasted image 20241001023258.png]]

### Practical - 8 : Write a program to reverse an integer.

```cpp
#include <iostream>
using namespace std;

class Operations {
private:
	int num, rev, reminder;

public:
	void reversed(int num){
		int reminder, rev = 0;
		
		while(num!=0){

		reminder = num % 10;
		rev = rev * 10 + reminder;
		num /= 10;
		}
	cout<<"Reversed No : "<<rev;
	}
};

int main (){
	int a;
	Operations o1;
	cout<<"Enter the value to test: ";
	cin>>a;
	o1.reversed(a);
    
	return 0;
}
```
![[Pasted image 20241001023330.png]]
### Practical - 9 : Write a program to check whether the given integer is palindrome or not.

```cpp
#include <iostream>
using namespace std;

class Operations {
public:
	int reversed(int num){
		int reminder, rev = 0;
		
		while(num!=0){

		reminder = num % 10;
		rev = rev * 10 + reminder;
		num /= 10;
		}
	cout<<"Reversed No : "<<rev;
	return rev;
	}
};

int main (){
	int a;

	cout<<"Enter the value to test: ";
	cin>>a;

	Operations o1;
	a = o1.reversed(a);
	b = o1.reversed(a);
	if(a == b){
		cout<<a<<" is a palindrome."
	}else{
	cout<<a<<" is not a palindrome."	
	}
	return 0;
}
```
![[Pasted image 20241001023957.png]]

### Practical - 10 : Write a program that prints triangles using * , Numbers, Charecters .

```cpp
#include <iostream>
using namespace std;

class Operations {
public:
void triangleStar(int n){

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

void triangleNum(int n){

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
}

void triangleChar(int n){  

	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<char('A' + j-1);
		}
		cout<<endl;
	}
}
};

int main (){
	int n;

	cout<<"Enter the length of triangle : ";
	cin>>n;

	Operations o1;
	o1.triangleStarr(n);
	o1.triangleNum(n);
	o1.triangleChar(n);

	return 0;

}
```
![[Pasted image 20241001024210.png]]

### Practical - 11 : Write A Program to find the factorial of a given number.
```cpp
#include <iostream>
using namespace std;

class Factorial {
public:
    int findFactorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    }
};

int main() {
	int n;
	cout<<"Enter the Number to test : ";
	cin>>n;
	
    Factorial f1;
    cout << "Factorial of " << n << " is: " << f1.findFactorial(n);
    return 0;
}

```
![[Pasted image 20241002113809.png]]

### Practical - 12 : Write a program to perform Mathematical Operations.

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Operations {
public:

void performOperations(int a, int b){
	cout<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<a<<" / "<<b<<" = "<<a/b<<endl;
	cout<<a<<" % "<<b<<" = "<<a%b<<endl;
	cout << "Square root of 16: " << sqrt(16) << endl; 
	cout << "Power (2^5): " << pow(2, 5) << endl; 
	cout << "Sine of 45 degrees: " << sin(45 * M_PI / 180) << endl;
	cout << "Logarithm of 100: " << log(100) << endl;
	
}
};

int main (){
	int a,b,ch;
	Operations o1;

	cout<<"Enter the 1st value : ";
	cin>>a;

	cout<<"Enter the 2nd value : ";
	cin>>b;
	
	o1.performOperations(a,b);

	return 0;

}
```
![[Pasted image 20241002114503.png]]
### Practical - 13 : Write a program to perform String Operations.

```cpp
#include <iostream>
using namespace std;

class Operations {
public:

void len(string s){
	cout << "str is : " << s << "\n"; 
	cout << "size: " << s.size() << " length: " << s.length() << " capacity: " << s.capacity() << "\n";
}

void access(string s, int a){
	cout << "str is : " << s << "\n";
	cout << "char at index "<<a<<" is : "s[a] << "\n";
	cout << "char at index using at()"<<a<<" is : "s.at(a) << "\n";
}

void apnd(string s1, string s2){
	cout<<"Appending str1 "<<s1<<" and str2 (using +): "<<s2<<" : "<<s1+s2;
	
cout<<"Appending str1 "<<s1<<" and str2 (using append()): "<<s2<<" : "<<s1.append(s2);
}

void cmp(string s1, string s2){
	cout<<"Comparing str1 "<<s1<<" and str2 (using ==): "<<s2<<" : "<<s1==s2;
	
cout<<"Comparing str1 "<<s1<<" and str2 (using compare()): "<<s2<<" : "<<s1.compare(s2);
}

void substring(string s1, int index, int len){
	cout<<"Substring of str1 "<<s1<<" is : "<<s1.substr(index, len);
}

void search(string s1, string s2){
	int res = s1.find(s2);
	if(res != string.npos){
		cout<<"Str 2 "<<s2<<" found at : "<<res;
	}else{
		cout<<"Str 2 "<< s2 <<" not found in "<<s1;
	}
}


void replace(string s1, int pos, int n, string s2){
	cout<<"Original String : "<<s1;
	cout<<"Replaced String :  "<<s1.replace(n, s2);
}

void insert(string s1, int pos, string s2){
	cout<<"Original String : "<<s1;
	cout<<"New part to be inserted : "<<s2;
	cout<<"New String :  "<<s1.insert(n, s2);
}

void erase(string s1, int pos){
	cout<<"Original String : "<<s1;
	cout<<"Part to be erased : "<<s1.substring(5,s1.length()-5);
	cout<<"New String :  "<<s1.erase(n);
}
};

int main (){
	string s1 = 'Hello World';
	string s2 = "Jeet here !";
	Operations o1;

	o1.len(s1);
	o1.access(s1,4);
	o1.append(s1,s2);
	o1.cmp(s1,"world");
	o1.cmp(s1,s2);
	o1.substr(s1,6,5);		
	o1.search(s1,"world");
	o1.search(s1,s2);
	o1.replace(s1, 6, 5, "Jeet!");
	o1.insert(s1, 6, "to the");
	o1.erase(s1, 5);
return 0;

}
```
![[Pasted image 20241001024512.png]]
### Practical - 14 : Write A Program to create a Book class and access data members through object.
```cpp
#include <iostream>
using namespace std;

class Book {

private:
	int ISBN;
	string bookName;
	string authorName;
	double price;

public:

Book () : ISBN(0), bookName(""), authorName(""), price(0){
	// Default paramters
}

Book(int isbn, string name, string author, double amt){
	ISBN = isbn;
	bookName = name;
	authorName = author;
	price = amt;
}
 
int getISBN(){
	return ISBN;
}

string getBookName(){
	return bookName;
}

string getAuthorName(){
	return authorName;
}

double getPrice(){
	return price;
}

void displayBookInfo(){
	cout<<"ISBN Number : "<<ISBN<<endl;
	cout<<"Book Title : "<<bookName<<endl;
	cout<<"Author Name : "<<authorName<<endl;
	cout<<"Price : "<<price<<endl;
}
};

int main(){

Book book[5];
book[0] = Book();
book[1] = Book(1001, "Think and Grow Rich", "Napolean Hill", 1499);
book[2] = Book(1002, "As a man Thinketh", "James Allen", 2999);
book[3] = Book(1003, "Meditations", "Marcus Aurellius", 1999);
book[4] = Book(1004, "Sherlock Holmes", "Arthur Conan Doyale", 1499);


for(int i=0; i<=5; i++){

cout<<"Book no: "<<i<<endl;
cout<<"ISBN : "<<book[i].getISBN()<<endl;
cout<<"Title : "<<book[i].getBookName()<<endl;
cout<<"Author : "<<book[i].getAuthorName()<<endl;
cout<<"Price : "<<book[i].getPrice()<<endl;
book[i].displayBookInfo();

cout<<endl<<endl;
}

return 0;
}
```
![[Pasted image 20241001024555.png]]
### Practical - 15 : Write a program to create an Animal Class (use Inheritance) :
```cpp
#include <iostream>
using namespace std;

class Animal {
private:

	string name;
	int legs;
	string sound;

public:

Animal() : name(""), sound(""), legs(0){
	// Default Constructor
}

Animal(string animalName, string animalSound, int animalLegs){
	name = animalName;
	sound = animalSound;
	legs = animalLegs;
}

void speak(){
	cout<<"Default Animal sound\n";
}
};

class Dog:Animal{
public:

void speak(){
	cout<<"Bark! Bark\n";
}
};

class Cat:Animal{
public:
	
void speak(){
	cout<<"Meow! Meow!\n";
}
};

int main(){

Animal a1;
a1.speak();

Dog G;
G.speak();

Cat Bob;
Bob.speak();

return 0;
}
```
![[Pasted image 20241001024622.png]]
### Practical - 16 : Write A Program using method override and virtual keyword in class.

```cpp
#include <iostream>
using namespace std;

class Animal {
private:

	string name;
	int legs;
	string sound;

public:

Animal() : name(""), sound(""), legs(0){
	// Default Constructor
}

Animal(string animalName, string animalSound, int animalLegs){
	name = animalName;
	sound = animalSound;
	legs = animalLegs;
}

virtual void speak(){
	cout<<"Default Animal sound\n";
}
};

class Dog:Animal{
public:

void speak() override{
	cout<<"Bark! Bark\n";
}
};

class Cat:Animal{
public:
	
void speak() override{
	cout<<"Meow! Meow!\n";
}
};

int main(){

Animal a1;
a1.speak();

Dog G;
G.speak();

Cat Bob;
Bob.speak();

return 0;
}
```
![[Pasted image 20241001024651.png]]
### Practical - 17 : Write A Program to demonstrate how to access local variables and global variables.

```cpp
#include <iostream>
using namespace std;

int a = 10, b = 10;

class Test{
public:

void scope(){
	int a = 5;
	
	cout<<"A : (local variable) : "<< a << endl;
	cout<<"A : (global variable) : "<< ::a << endl;
}
};

int main(){
	int b = 2;
	
	Test t1;
	t1.scope();
	
	cout<<"B : (local variable) : "<< b << endl;
	cout<<"B : (global variable) : "<< ::b << endl;
	
	return 0;
}
```
![[Pasted image 20241001024719.png]]
### Practical - 18 : Write A Program to use of Scope resolution operator (method defined outside class).

```cpp
#include <iostream>
using namespace std;

class Test{

public:
	void disp();
};

void Test:: disp(){
	cout<<"A function of class test";
}

int main(){
	Test t1;
	t1.disp();

	return 0;
}
```
![[Pasted image 20241001024806.png]]
### Practical - 19 : Write A Program to call by value and call by reference.
```cpp
#include <iostream>
using namespace std;

class Test{
public:

void ref(int &a){
	cout<<"\noriginal (class) : "<<a;
	a++;
	cout<<"\nincremeted (class) : "<<a;
}

void val(int b){
	cout<<"\noriginal (class) : "<<b;
	b++;
	cout<<"\nincremeted (class) : "<<b;
}
};

int main(){
int a = 10, b = 10;

cout<<"\n\nCall by reference : ";
cout<<"\noriginal (main) : "<<a;
Test t1;
t1.ref(a);
cout<<"\nincremeted (main) : "<<a<<" (value changed)";

cout<<"\n\nCall by value : ";
cout<<"\noriginal (main) : "<<b;
t1.val(b);
cout<<"\nincremeted (main) : "<<b;
return 0;
}
```
![[Pasted image 20241001024841.png]]
### Practical - 20  :  Write A Program to calculate gross salary of an Employee.
```cpp
#include <iostream>
using namespace std;

class Employee {
public:
    float basicSalary, DA, HRA, grossSalary;

    void grossSalaryCalc() {
        DA = 0.8 * basicSalary;  
        HRA = 0.2 * basicSalary; 
        grossSalary = basicSalary + DA + HRA;
    }

    void displayGrossSalary() {
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main() {
    Employee emp;
    emp.basicSalary = 30000;
    emp.grossSalaryCalc();
    emp.displayGrossSalary();
    return 0;
}

```
![[Pasted image 20241001024915.png]]
![[Pasted image 20241002114708.png]]

# > MADE BY `JEET CHAUHAN` (15742).