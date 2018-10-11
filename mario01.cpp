#include <iostream>
 
using namespace std;
int main() {
 int height ;
 cout << "請輸入三角形高度(高度打於八或小於一):";
 cin >> height; 
 if(8>height && height>0) {
  for (int a=0; a<height;a++) {
   for (int b=height;b>a;b--) {
     cout<<" ";
   }
    for (int b=0; b<=a; b++) {
      cout<<"#";
    }
    cout<<"\n"; 
  }
  cout <<"高度:" <<height << "\n";
 }
 else {
  cout <<"高度打於八或小於一";
  }
}
 
