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
ll call(char);
map<ll, ll> mp;

int main()
{char ch;
 ll num=0;
 ll f1=48;
 ll f2=15;
 ll s1=60;
 ll s2=3;
 ll temp1,temp2,temp3,temp4,temp5,temp6,lelo;
 long long count=0;
 	FILE *fin;
	ofstream fout;
	
	 fin=fopen("OUTPUT.txt", "rb");
	 fout.open("OUTPUT2.txt");
       
       for(ch='A';ch<='Z';ch++)
        {ll lol=ch;
         mp[num]=lol ;
         num++;
	    }
	    
	    
       for(ch='a';ch<='z';ch++)
        {ll lol=ch;
         mp[num]=lol;
         num++;
	    }
	    
	    
       for(ch='0';ch<='9';ch++)
        {ll lol=ch;
         mp[num]=lol;
         num++;
	    }
	  
	    mp[62]=32;
	    mp[63]=10;
	    
		 		 
	   num=1;
	    while(1)
	     { count++;
		   ch=fgetc(fin);
		     T[num]=call(ch);
	    

	      num++;
	       if(num==4)
	        {num=1;
	          
	          if(T[1]==255&&T[2]==255&&T[3]==255)
                 break;
				 			      
	           lelo=T[1]&128;
	           if(lelo==0)
	            temp1=0;
	             else
	              temp1=32;
	               lelo=T[1]&64;
				   if(lelo==0)
	                temp1=temp1+0;
	                 else
	                  temp1=temp1+16;
	                   lelo=T[1]&32;
	                   if(lelo==0)
	                    temp1=temp1+0;
	                     else
	                      temp1=temp1+8;
	                       lelo=T[1]&16;
	                       if(lelo==0)
	                        temp1=temp1+0;
	                         else
	                          temp1=temp1+4;
	                           lelo=T[1]&8;
	                           if(lelo==0)
	                            temp1=temp1+0;
	                             else
	                              temp1=temp1+2;
	                               lelo=T[1]&4;
	                               if(lelo==0)
	                                temp1=temp1+0;
	                                 else
	                                  temp1=temp1+1;
	                  
	                                   lelo=T[1]&2;
	                                   if(lelo==0)
	                                    temp2=0;
	                                     else
	                                      temp2=2;
	                                       lelo=T[1]&1;
	                                        if(lelo==0)
	                                         temp2=temp2+0;
	                                          else
	                                           temp2=temp2+1;
	                                           
	                                            lelo=T[2]&128;
	                                            if(lelo==0)
	                                             temp3=0;
	                                              else
	                                               temp3=8;
	                                                lelo=T[2]&64;
	                                                if(lelo==0)
	                                                 temp3=temp3+0;
	                                                  else
	                                                   temp3=temp3+4;
	                                                    lelo=T[2]&32;
	                                                    if(lelo==0)
	                                                     temp3=temp3+0;
	                                                      else
	                                                       temp3=temp3+2;
	                                                        lelo=T[2]&16;
	                                                        if(lelo==0)
	                                                         temp3=temp3+0;
	                                                          else
	                                                           temp3=temp3+1;
	                                                             
	                                                            lelo=T[2]&8; 
	                                                            if(lelo==0)
	                                                             temp4=0;
	                                                              else
	                                                               temp4=8;
	                                                                lelo=T[2]&4;
	                                                                if(lelo==0)
	                                                                 temp4=temp4+0;
	                                                                  else
	                                                                   temp4=temp4+4;
	                                                                    lelo=T[2]&2;
	                                                                    if(lelo==0)
	                                                                     temp4=temp4+0;
	                                                                      else
	                                                                       temp4=temp4+2;
	                                                                        lelo=T[2]&1;
	                                                                        if(lelo==0)
	                                                                         temp4=temp4+0;
	                                                                          else
	                                                                           temp4=temp4+1;
	                                                                            
	                                                                             lelo=T[3]&128;
	                                                                             if(lelo==0)
	                                                                              temp5=0;
	                                                                               else
	                                                                                temp5=2;
	                                                                                 lelo=T[3]&64;
	                                                                                 if(lelo==0)
	                                                                                  temp5=temp5+0;
	                                                                                   else
	                                                                                    temp5=temp5+1;
	                                                                                     
	                                                                                     lelo=T[3]&32;
	                                                                                     if(lelo==0)
	                                                                                      temp6=0;
	                                                                                       else
	                                                                                        temp6=32;
	                                                                                         lelo=T[3]&16;
	                                                                                         if(lelo==0)
	                                                                                          temp6=temp6+0;
	                                                                                           else
	                                                                                            temp6=temp6+16;
	                                                                                             lelo=T[3]&8;
	                                                                                             if(lelo==0)
	                                                                                              temp6=temp6+0;
	                                                                                               else
	                                                                                                temp6=temp6+8;
																									 lelo=T[3]&4; 
  	                                                                                                 if(lelo==0)
	                                                                                                  temp6=temp6+0;
	                                                                                                   else
	                                                                                                    temp6=temp6+4;
	                                                                                                     lelo=T[3]&2;
 	                                                                                                     if(lelo==0)
	                                                                                                      temp6=temp6+0;
	                                                                                                       else
	                                                                                                        temp6=temp6+2;
	                                                                                                         lelo=T[3]&1;
	                                                                                                         if(lelo==0)
	                                                                                                          temp6=temp6+0;
	                                                                                                           else
	                                                                                                            temp6=temp6+1;
	                                                                                                         
	                         
	            char ch1,ch2,ch3,ch4;
	           	           
			   ch1= mp[temp1];
			   ch2= mp[ (temp2<<4) + temp3];
			   ch3= mp[ (temp4<<2) + temp5];
			   ch4= mp[temp6];
			    fout<<ch1<<ch2<<ch3<<ch4;
	            T[1]=-1;
	            T[2]=-1;
	            T[3]=-1;
	            T[4]=-1;
			 
			   }
  		 }
  		    
  		   
	    return 0;
	
}

ll call(char ch)
{ll num=ch,temp,lelo;
      
      lelo=num&128;
	  if(lelo==0)
	   temp=0;
	    else
	     temp=128;
	      
	       lelo=num&64;
	        if(lelo==0)
	         temp=temp+0;
	          else
	           temp=temp+64;
	           
	            lelo=num&32;
	             if(lelo==0)
	              temp=temp+0;
	               else
	                temp=temp+32;
	                
	                 lelo=num&16;
	                  if(lelo==0)
	                   temp=temp+0;
	                    else
	                     temp=temp+16;
	                     
	                      lelo=num&8;
	                       if(lelo==0)
	                        temp=temp+0;
	                         else
	                          temp=temp+8;
	                          
	                           lelo=num&4;
	                            if(lelo==0)
	                             temp=temp+0;
	                              else 
	                              temp=temp+4;
	                               
	                                lelo=num&2;
	                                 if(lelo==0)
	                                  temp=temp+0;
	                                   else
	                                    temp=temp+2;
	                                    
	                                     lelo=num&1;
	                                      if(lelo==0)
	                                       temp=temp+0;
	                                        else
	                                         temp=temp+1;
	 return temp;
}
