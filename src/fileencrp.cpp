/* C++ Program - Encrypt File  and decrupt a file */
		
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
using namespace std;
string encryptDecrypt(string toEncrypt) {
    char key[] = {'a','b','c','d','e','f','G','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i];
    
    return output;
}
int main()
{
	char fname[20], ch,s[80],en[80];
	string t;
   fstream fps,fpt,fp,fpp;
	cout<<"Enter file name (with extension like file.txt) to encrypt : "<<endl;
	gets(fname);
	fps.open(fname,ios::in);

	if(!fps)
	{
		cout<<"Error in opening file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(1);
	}
		
	cout<<" File contain follwing data "<<endl;
	while(!fps.eof())
	{
		fps.getline(s,80);
		puts(s);
			}
  
    	fp.open(fname,ios::in);
    		fpt.open("x.txt",ios::out);
   	while(!fp.eof())
	{
		fp.getline(en,80);
	  t=encryptDecrypt(en);
	  fpt<<t;	
}      
fps.close();
	fpt.close();
	fp.close();
	 remove(fname);
	rename("x.txt",fname);
	fpp.open(fname,ios::in);
	cout<<endl<<"Data After Encruption "<<endl;
	while(!fpp.eof())
	{
			fpp.getline(s,80);
		puts(s);
			}
     
   fpp.close();   
   cout<<endl;
   
    cout<<endl;
    
    
		fstream fi,fo,f,foo;
	cout<<"Enter file name (with extension like file.txt) to encrypt : "<<endl;
	gets(fname);
	fi.open(fname,ios::in);

	if(!fi)
	{
		cout<<"Error in opening file..!!";
		cout<<"\nPress any key to exit...";
		getch();
		exit(1);
	}
		
	cout<<" File contain follwing data "<<endl;
	while(!fi.eof())
	{
		fi.getline(s,80);
		puts(s);
			}
  
    	f.open(fname,ios::in);
    		fo.open("tem.txt",ios::out);
   	while(!f.eof())
	{
		f.getline(en,80);
	  t=encryptDecrypt(en);
	  fo<<t;	
}      
fi.close();
	f.close();
	fo.close();
	 remove(fname);
	rename("tem.txt",fname);
	foo.open(fname,ios::in);
	cout<<endl<<"Data After Decruption "<<endl;
	while(!foo.eof())
	{
			foo.getline(s,80);
		puts(s);
			}
     
   foo.close();
    
 return 0;   

getch();
}
