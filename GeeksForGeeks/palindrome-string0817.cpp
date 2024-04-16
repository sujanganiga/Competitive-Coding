/*

//User function template for C++
class Solution{
public:	
	stack <char> q;
	
	int isPalindrome(string S)
	{
	    int i=0;
	    while(S[i]!='\0'){
	        q.push(S[i]);
	        i++;
	    }
	    i=0;
	    while(i<=(S.size()/2)){
	        if(S[i]!=q.top()){
	            return 0;
	        }
	        q.pop();
	        i++;
	    }
	    return 1;
	}

};
*/