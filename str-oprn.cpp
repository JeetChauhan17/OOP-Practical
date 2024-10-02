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
	cout<<"\nAppending str1 "<<s1<<" and str2 (using +): "<<s2<<" : "<<s1+s2;
	
cout<<"\nAppending str1 "<<s1<<" and str2 (using append()): "<<s2<<" : "<<s1.append(s2);
}

void cmp(string s1, string s2){
	// cout<<"Comparing str1 "<<s1<<" and str2 (using ==): "<<s2<<" : "<<s1.compare;
	
cout<<"\nComparing str1 "<<s1<<" and str2 (using compare()): "<<s2<<" : "<<s1.compare(s2);
}

void substring(string s1, int index, int len){
	cout<<"\nSubstring of str1 "<<s1<<" is : "<<s1.substr(index, len);
}

void search(string s1, string s2){
	int res = s1.find(s2);
	if(res != string::npos){
		cout<<"\nStr 2 "<<s2<<" found at : "<<res;
	}else{
		cout<<"\nStr 2 "<< s2 <<" not found in "<<s1;
	}
}


void repl(string s1, int pos, int n, string s2){
	cout<<"\nOriginal String : "<<s1;
	cout<<"\nReplaced String :  "<<s1.replace(pos,n, s2);
}

void insert(string s1, int pos, string s2){
	cout<<"\nOriginal String : "<<s1;
	cout<<"\nNew part to be inserted : "<<s2;
	cout<<"\nNew String :  "<<s1.insert(pos, s2);
}

void erase(string s1, int pos){
	cout<<"\nOriginal String : "<<s1;
	cout<<"\nPart to be erased : "<<s1.substr(5,s1.length()-5);
	cout<<"\nNew String :  "<<s1.erase(pos);
}
};

int main (){
	string s1 = "Hello World";
	string s2 = "Jeet here !";
	Operations o1;

	o1.len(s1);
	o1.access(s1,4);
	o1.apnd(s1,s2);
	o1.cmp(s1,"world");
	o1.cmp(s1,s2);
	o1.substring(s1,6,5);		
	o1.search(s1,"world");
	o1.search(s1,s2);
	o1.repl(s1, 6, 5, "Jeet!");
	o1.insert(s1, 6, "to the");
	o1.erase(s1, 5);
return 0;

}