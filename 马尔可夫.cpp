#include<bits/stdc++.h>  
using namespace std;

#define none "\0"

typedef deque<string> Pre;
const int inf=0x7fffffff;
const int N=3;
const int LONG=1e5;
const string mess="-> Please input SourceFile, and the result will print here: \n";
map<Pre,vector<string> >S;
 
int Insert(Pre&pre,const string&s){

    if(pre.size()==N) {
        S[pre].push_back(s);
        pre.pop_front();
    }
    pre.push_back(s);
    return 0;

}
 
int CreatePre(istream& input){

    Pre pre;
    for(int i=0;i<N;i++) Insert(pre,none);
    string x;
    while(input>>x) Insert(pre,x);
    Insert(pre,none);
    return 0;
}

int Output(){
    //Make sure the results are different each time. 
    srand(time(NULL));
    Pre pre;
    for(int i=0;i<N;i++)	Insert(pre,none);
    for(int i=0;i<LONG;i++){ 
        vector<string>cur=S[pre];
        string a=cur[rand()%cur.size()];
        if(a==none)break;
        cout<<a<<" ";
        pre.pop_front();
        pre.push_back(a);
    }
    return 0;
}

int main(){
    string SourceFile;
    cout<<mess<<endl;
    cin>>SourceFile;
    ifstream fin(SourceFile);
    if(fin.fail())return 0;
    CreatePre(fin);
    Output();
    return 0;
}
