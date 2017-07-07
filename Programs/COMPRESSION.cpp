#include<iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
#include<fstream>

#define ll int

using namespace std;

vector< pair<ll,ll> > A;
ll T[5];
map<ll, ll> mp;

int main()
{char ch;
 long double count=0;
 ll num=0;
 ll f1=48;
 ll f2=15;
 ll s1=60;
 ll s2=3;
 ll temp1,temp2,temp3,temp4,lelo;
 ll size=0;
 
	FILE *fin;
	ofstream fout;
	
	 fin=fopen("INPUT.txt", "rb");
	 fout.open("OUTPUT.txt");
       
       for(ch='A';ch<='Z';ch++)
        {ll lol=ch;
         mp[lol]=num ;
         num++;
	    }
	    
	    
       for(ch='a';ch<='z';ch++)
        {ll lol=ch;
         mp[lol]=num;
         num++;
	    }
	    
	    
       for(ch='0';ch<='9';ch++)
        {ll lol=ch;
         mp[lol]=num;
         num++;
	    }
	    
	    mp[32]=62;
	    mp[10]=63;
	     size=ftell(fin);
        		 		 
	   num=1;
	    while(1)
	     { 
	       ch=fgetc(fin);
	        count++;
	        if(ch==EOF)
	         break; 
		   
		  T[num]=ch;
	      T[num]=mp[T[num]];
	       
	       if(T[num]==0&&ch!='A')
	        continue;
	       
	   
	      num++;
	      
	       if(num==5)
	        {num=1;
	         
	           lelo=T[2]&32;
	           if(lelo==0)
	            temp1=0;
	             else
  	              temp1=2;
  	              lelo=T[2]&16;
				   if(lelo==0)
	                temp1=temp1+0;
	                 else
	                  temp1=temp1+1;
	                  
	                   lelo=T[2]&8;
					   if(lelo==0)
	                    temp2=0;
	                     else
	                      temp2=8;
	                       lelo=T[2]&4;
	                       if(lelo==0)
	                        temp2=temp2+0;
	                         else
	                          temp2=temp2+4;
	                           lelo=T[2]&2;
	                           if(lelo==0)
	                            temp2=temp2+0;
	                             else
	                              temp2=temp2+2;
	                              lelo=T[2]&1;
	                               if(lelo==0)
	                                temp2=temp2+0;
	                                 else
	                                  temp2=temp2+1;
	                  
					                   lelo=T[3]&32;                   
				                       if(lelo==0)
	                                    temp3=0;
	                                     else
	                                      temp3=8;
	                                      lelo=T[3]&16;
	                                       if(lelo==0)
	                                        temp3=temp3+0;
	                                         else
	                                          temp3=temp3+4;
	                                          lelo=T[3]&8;
	                                           if(lelo==0)
	                                            temp3=temp3+0;
	                                             else
	                                              temp3=temp3+2;
	                                               lelo=T[3]&4;
	                                               if(lelo==0)
	                                                temp3=temp3+0;
	                                                 else
	                                                  temp3=temp3+1;
	                                                   
													   lelo=T[3]&2; 
				                                       if(lelo==0)
	                                                    temp4=0;
	                                                     else
	                                                      temp4=2;
	                                                       lelo=T[3]&1;
	                                                       if(lelo==0)
	                                                        temp4=temp4+0;
	                                                         else
	                                                          temp4=temp4+1;
	                     
	         
	            char ch1,ch2,ch3;
	           
			   ch1= (T[1]<<2) + temp1;
			   ch2= (temp2<<4) + temp3;
			   ch3= (temp4<<6) + T[4];
			   
			    fout<<ch1<<ch2<<ch3;
	            T[1]=-1;
	            T[2]=-1;
	            T[3]=-1;
	            T[4]=-1;
			 
			   }
  		 }
  		
  		  for(ll i=num;i<=4;i++)
  		   {T[i]=62;count++;}
  		     
            if(num!=1)
			 {
			 
	           lelo=T[2]&32;
	           if(lelo==0)
	            temp1=0;
	             else
  	              temp1=2;
  	              lelo=T[2]&16;
				   if(lelo==0)
	                temp1=temp1+0;
	                 else
	                  temp1=temp1+1;
	                  
	                   lelo=T[2]&8;
					   if(lelo==0)
	                    temp2=0;
	                     else
	                      temp2=8;
	                       lelo=T[2]&4;
	                       if(lelo==0)
	                        temp2=temp2+0;
	                         else
	                          temp2=temp2+4;
	                           lelo=T[2]&2;
	                           if(lelo==0)
	                            temp2=temp2+0;
	                             else
	                              temp2=temp2+2;
	                              lelo=T[2]&1;
	                               if(lelo==0)
	                                temp2=temp2+0;
	                                 else
	                                  temp2=temp2+1;
	                  
					                   lelo=T[3]&32;                   
				                       if(lelo==0)
	                                    temp3=0;
	                                     else
	                                      temp3=8;
	                                      lelo=T[3]&16;
	                                       if(lelo==0)
	                                        temp3=temp3+0;
	                                         else
	                                          temp3=temp3+4;
	                                          lelo=T[3]&8;
	                                           if(lelo==0)
	                                            temp3=temp3+0;
	                                             else
	                                              temp3=temp3+2;
	                                               lelo=T[3]&4;
	                                               if(lelo==0)
	                                                temp3=temp3+0;
	                                                 else
	                                                  temp3=temp3+1;
	                                                   
													   lelo=T[3]&2; 
				                                       if(lelo==0)
	                                                    temp4=0;
	                                                     else
	                                                      temp4=2;
	                                                       lelo=T[3]&1;
	                                                       if(lelo==0)
	                                                        temp4=temp4+0;
	                                                         else
	                                                          temp4=temp4+1;
	                     
	          
	            char ch1,ch2,ch3;
	           
			   ch1= (T[1]<<2) + temp1;
			   ch2= (temp2<<4) + temp3;
			   ch3= (temp4<<6) + T[4];
			   
			    fout<<ch1<<ch2<<ch3;
	            T[1]=-1;
	            T[2]=-1;
	            T[3]=-1;
	            T[4]=-1;
			 
			 }
			
	   	   //cout<<"INPUT FILE SIZE : "<<(count)/1024<<"kb\n\n";
	   	   
	    return 0;
	
}
