#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<string> v(5);
  vector<string> w(5);
  vector<int> x(10);
  vector<int> y(10);
  v = {"Luke", "Francesck", "Anthony", "Andrew", "Anna"};
  string cantante;
  int i;
  for (i = 0; i < w.size(); i++) {
    cout << "Ins nome cantante: ";
    cin >> cantante;
    w[i] = cantante;
  }
  for (i = 0; i < x.size(); i++) {
    x[i] = i+1;
  }
  for (i = 0; i < y.size(); i++) {
    y[i] = (i+1) * 2;
  }
  cout << v[0] << " " << v[2] << " " << v[4] << endl;

  for (i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  for (i = 0; i < w.size(); i++) {
    cout << w[i] << " ";
  }
  cout << endl;
  for (i = 0; i < x.size(); i++) {
    cout << x[i] << " ";
  }
  cout << endl;
  for (i = 0; i < y.size(); i++) {
    cout << y[i] << " ";
  }
  cout << endl;
  for(i = 1; i <= x.size(); i=i*2){
    cout << x[i] << " ";
  }
  cout << endl;
  for(i = 1; i <= x.size(); i+=2){
    cout << x[i] << " ";
  }
  cout << endl;
  for(i = 1; i <= x.size(); i=i*2){
    cout << x[i] << " ";
  }
}