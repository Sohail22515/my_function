#include<iostream>
#include<vector>

using namespace std;

bool isSafe(int newx,int newy, int maze[][4],int row, int col,vector<vector<bool> > &visited){
    if((newx>=0) && (newx<row)&&
        (newy>=0) && (newy<col)&&
        (maze[newx][newy]==1)&&
        (visited[newx][newy]==false)){
            return true;
    }
    else{return false;}
}

void printAllPath(int maze[][4],int row,int col,int srcx,int srcy,string &output,vector<vector<bool> > &visited){
    if(srcx==row-1 && srcy==col-1){//base case
        cout<<output<<endl;
        return;
    }

    //UP
    int newx=srcx-1;
    int newy=srcy;
    if(isSafe(newx,newy,maze,row,col,visited)){
        visited[newx][newy]=true;
        output.push_back('U');
        printAllPath(maze,row,col,newx,newy,output,visited); // recursion ends here..
        //back tracking part
        output.pop_back();
        visited[newx][newy]=false;
    }
    
    //right
    newx=srcx;
    newy=srcy+1;
    if(isSafe(newx,newy,maze,row,col,visited)){
        visited[newx][newy]=true;
        output.push_back('R');
        printAllPath(maze,row,col,newx,newy,output,visited); // recursion ends here..
        //back tracking part
        output.pop_back();
        visited[newx][newy]=false;
    }
    
    

    //Down
    newx=srcx+1;
    newy=srcy;
    if(isSafe(newx,newy,maze,row,col,visited)){
        visited[newx][newy]=true;
        output.push_back('D');
        printAllPath(maze,row,col,newx,newy,output,visited); // recursion ends here..
        //back tracking part
        output.pop_back();
        visited[newx][newy]=false;
    }
    



    //left
    newx=srcx;
    newy=srcy-1;
    if(isSafe(newx,newy,maze,row,col,visited)){
        visited[newx][newy]=true;
        output.push_back('L');
        printAllPath(maze,row,col,newx,newy,output,visited); // recursion ends here..
        //back tracking part
        output.pop_back();
        visited[newx][newy]=false;
    }
}

signed main(){
    
    int maze[4][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,0},
        {1,1,1,1},
    };

    int row=4;
    int col=4;

    int srcx=0;
    int srcy=0;
    string output="";

    //create visited 2d array
    vector<vector<bool> > visited(row, vector<bool>(col,false));

    if(maze[0][0]==0){
        cout<<"no possible way"<<endl;
        return 0;
    }
    else{
        visited[srcx][srcy]=true;
        printAllPath(maze,row,col,srcx,srcy,output,visited);
    }
    return 0;
}