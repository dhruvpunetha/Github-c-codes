#include<bits/stdc++.h> 
using namespace std;
struct Key  
{ 
    int freq; // to store the frequency of a character 
    char ch; 
    bool operator<(const Key &k) const  // storing key according to freq  in queue
    { 
        bool j=freq < k.freq;
        return j; 
    } 
}; 
void arrangement(string s) 
{ 
    string ans = "" ;
    int len = s.length(); 
    int cou[26] = {0}; 
    for (int i = 0 ; i < len ; i++) 
        cou[s[i]-'a']++;   //we are  Storing frequencies of all characters  in cou
    priority_queue< Key > pque;   //creating a priority queue
    for (char c = 'a' ; c <= 'z' ; c++)   //entering characters and frequency in the queue
        if (cou[c-'a']) 
            pque.push( Key { cou[c-'a'], c} ); 
  
    Key prev {-1, '$'} ; 
    while (!pque.empty())  //loop to form the output
    { 
        Key k = pque.top();
        pque.pop(); //popping the top character from queue with most frequency
        ans = ans + k.ch; //adding it to the answer
        if (prev.freq > 0)   //now if frequency of character greater then 1 we add it back in queue 
            pque.push(prev); 
        (k.freq)--;  // decreasing the frequency of character for each instance of that character we add in answer
        prev = k; 
    } 
    if (len == ans.length())    //our answer will be accurate only if the length of resultant string is same as original
    {
    cout<<"Arrangement is possible"<<endl;
       cout << ans << endl; 
}
    else 
    {
        cout << "Arrangement is not possible" << endl; 
} 
}
int main() 
{ 
    string su;
    cout<<"Enter String For Which You Want To Do Calculations\n";
    cin>>su;
    transform(su.begin(), su.end(), su.begin(), ::tolower);    //converting given sring to lowercase for ease of calculation
    arrangement(su); 
    return 0; 
} 