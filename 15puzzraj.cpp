#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<cstdlib>
using namespace std;
    int main(){
        	int a[16];
		    int fin[4][4];
		
		//Your logic here
		
		  
		
		for(int i=0;i<=14;i++)
		{
					a[i]=1+(rand()%15);
                
					for(int j=0;j<i;j++)
					{
						if(a[j]==a[i])
						{
							a[i]=1+(rand()%15);
							j=-1;
							cout<<i;
					
								
						}
						

					}
					//cout<<a[i]<<" ";
			
			
		}
		cout<<endl;
		a[15]=0;
		int ct=0;
		
		for(int rows=0;rows<4;rows++)
		{
			for(int cols=0;cols<4;cols++)
			{
				fin[rows][cols]=a[ct];
				ct++;
			}
		}
		for(int rows=0;rows<4;rows++)
		{
			for(int cols=0;cols<4;cols++)
			{
				cout<<fin[rows][cols]<<" ";
			}
			cout<<endl;
		}
		
			}
