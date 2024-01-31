#include<iostream>
#include<string>
using namespace std;

class cube{
    private:
        int range;
    public:
        cube(int x){
            range = x;
        }
        void printCube(){
            for(int i=1;i<=range;i++)
                cout<<i<<" Cube is "<<i*i*i<<endl; 
        }
};

int main(){
    int r;
    cout<<"Enter a range : ";
    cin>>r;
    cube cb(r);
    cb.printCube();
    return 0;
}


