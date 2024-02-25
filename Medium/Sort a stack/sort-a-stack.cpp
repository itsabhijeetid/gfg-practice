//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends




/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

stack<int> insert (stack<int> s, int temp) {
    int v2 = s.top();
    s.pop();
    if (s.size() == 0) {
        if (temp < v2) {
            s.push(temp);
            s.push(v2);
        } else {
            s.push(v2);
            s.push(temp); 
        }
        return s;
    }
    if (temp < v2) {
        s = insert (s, temp);
        s.push(v2);
    } else {
        s.push(v2);
        s.push(temp); 
    }
    return s;
}

stack<int> getHelp (stack<int> s) {
    if (s.size() == 1) return s;
    int temp = s.top();
    s.pop();
    s = getHelp (s);
    s = insert (s, temp);
    return s;
}

/* The below method sorts the stack s 
you are required to complete the below method */
void SortedStack :: sort()
{
   //Your code here
   s = getHelp (s);
}




