#include<iostream>
using namespace std;
class maths{
	public:
		int x,y;
		maths(){
			cout<<"\n simple con.called";
		}
		maths (int a,int b){
			x=a;
			y=b;
		}
		maths(const maths &m2){
			x=m2.x;
			y=m2.y;
		}
		void display(){
			cout<<"\nx="<<x<<"\t y=" << y;
		}
};
int main(){
	maths m1;
	maths m2(12,45);
	m2.display();
	maths m3=m2;
	m3.display();
	return 0;
	

}
