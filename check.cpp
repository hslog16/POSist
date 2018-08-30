#include<bits/stdc++.h>

using namespace std ;

int encrypt_data(int data, int key)
{
    int num=0,temp,k=1;
    while(data>0)
    {

        temp = data%10;
        temp+=key;
        temp= temp%10;
        data = data/10;
        if(k==1)
        {
            num+=temp;
            k++;
        }
        else
        {
            num = temp*10+num;
        }
    }
    return num;
}


struct time
{
    int dd , mm , yyyy , hour , second , minutes ;
};


struct ParentNode
{
    int data;
    struct node *left , *right;
};




struct node
{
    struct time t;
    int nullFlag;
    int key;

    int data ;

    int nodeNum;
    string nodeId;
    string referenceId;
    string childReference;
    string genesisReference;

    struct node *left , *right;
};



struct node* createChild(int nodeNumber , string N_id ,int data , int key)
{
    struct node* child = new(node);
    child = new(node);
    int x;
    cout<<"Enter Day  ";
    cin>>x;
    child->t.dd=x;
    cout<<"Enter Month ";
    cin>>x;
    child->t.mm=x;
    cout<<"Enter Year ";
    child->t.yyyy = x ;
    cout<<"Enter Hour ";
    cin>>x;
    child->t.hour=x;
    cout<<"Enter Minutes ";
    cin>>x;
    child->t.minutes= x;
    cout<<"Enter Seconds ";
    cin>>x;
    child->t.second=x;

    child->data = encrypt_data(data , key);
    child->nodeNum = nodeNumber;
    child->nodeId = N_id;
    return child;

}

struct ParentNode* createParent(int dat , int key)
{
    struct ParentNode* root = new(ParentNode);
    root->data = encrypt_data(dat, key);
    //cout<<root->data<<endl;
    root->left= NULL;
    root->right=NULL;
    return root;
}


int NodeNumber = 0 ;

struct ParentNode *first=createParent(32,4);

struct node *firstChild = createChild(0,"001",25,7);



int main()
{

}
