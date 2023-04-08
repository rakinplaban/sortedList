#include <iostream>

using namespace std;

class SortedList{
    private:
        int arr[10];
    public:
        void insertArray(int n){
            int i, temp = 0;
            for(i=0;i<10;i++){
                if(arr[i]<=n){

                    arr[i+1] = n;

                }
                else if(arr[0] > n){
                    arr[0] = n;
                }
                arr[i+2] = arr[i+1];
            }
        }
        void display(){
            for(int i=0;i<10;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};

int main()
{
    SortedList l1;
    l1.insertArray(5);
    l1.display();
    l1.insertArray(10);
    l1.display();
    return 0;
}
