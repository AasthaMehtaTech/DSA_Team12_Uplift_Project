class Solution{
public:	
	
	int isPanagram(string S)
	{
	    // Your code goes here 
	    int m[26]={0};
	    int i;
	    for(i=0;i<S.length();i++)
	    {
	        if(S[i]>='A' && S[i]<='Z')
	        {
	            m[S[i]-'A']++;
	        }
	        if(S[i]>='a' && S[i]<='z')
	        {
	            m[S[i]-'a']++;
	        }
	    }
	    for(i=0;i<26;i++)
	    {
	        if(m[i]==0)
	        return 0;
	    }
	    return 1;
	}

};
