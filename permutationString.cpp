#include<iostream>

using namespace std;

void permutationString(string &str, int index){

    if(index>=str.length()){cout<<str<<endl;}// base case

    for(int j=index;j<str.length();j++){
        swap(str[index],str[j]);
        permutationString(str,index+1);//recursion ends here...

        swap(str[index],str[j]);//back tracing
    }
}
signed main(){
    string str; cin>>str;

    int index=0;
    permutationString(str,index);

}
