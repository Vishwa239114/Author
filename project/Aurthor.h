#include<iostream>
#include<string.h>

class Aurthor{
	int authid,nobooks,totalsale;
	string authname,bookname;
	
	public:
	   Aurthor(){
	   	this->authid=1001;
	   	this->authname="RamCharan";
	   	this->bookname="RamKahni";
	   	this->nobooks=950;
	   	this->totalsale=500;
	   	
	   }
	   	Aurthor(int authid,string authname,string bookname,int nobooks,int totalsale){
	   	this->authid=authid;
	   	this->authname=authname;
	   	this->bookname=bookname;
	   	this->nobooks=nobooks;
	   	this->totalsale=totalsale;
		   }
	
	void avlCopy(){
		int avl=this->nobooks-this->totalsale;
		cout<<"Avl Copy's="<<avl<<endl;
	}
	
	
};
