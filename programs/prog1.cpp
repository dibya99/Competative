#include <iostream>
#include <string>
#include<stdlib.h>
using namespace std;
float getpercentage(string str)
{
    int p=0;
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        if(str[i]=='P')
        p++;
    }
    float percent=p/(l*1.0);
    return percent;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	int count;
	    int l;
	    string str,str2;
	for(int j=0;j<T;j++)
	{
	    count=0;
	    l=0;
	    str="";
	    str2="";
	    cin>>l;
	    cin>>str;
	    str2=str;
	    int flag=1;
	    for(int i=0;i<l;i++)
	    {
	        if(flag)
	        {
	        if(getpercentage(str2)>=0.75)
	        {
	             cout<<count<<endl;
	             exit(0);
	        }
	        }
	        flag=0;

	            if(i==1 && str[i]=='A'&&((str[i-1]=='P')&&((str[i+1]=='P')||(str[i+2]=='P'))))

	            {
	                str2[i]='P';
	                count++;
	            }
	            if((i>=2 && i<=l-3)&&str[i]=='A' && ((str[i-1]=='P'||str[i-2]=='P')&&(str[i+1]=='P'||str[i+2]=='P')))
	            {
	             str2[i]='P';
	             count++;
	            }
	            if(i==l-2 && str[i]=='A'&&((str[i+1]=='P')&&((str[i-1]=='P')||(str[i-2]=='P'))))
	            {
	                str2[i]='P';
	                count++;
	            }
	             if(getpercentage(str2)>=0.75)
	             {
	             cout<<count<<endl;;
	             exit(0);
	             }
	             if(i==l-1)
	             {
	             cout<<"-1\n";
	             exit(0);
	             }


	    }
	}

	return 0;
}
