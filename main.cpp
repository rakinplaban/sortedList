#include <iostream>
#include <cmath>
using namespace std;


class SortedList{
    private:
        int arr[10] = {5,10,15,20,25,30,35,40,45,50};
    public:
        // Find the maximum element.
        int findMax(){
            int max_ = arr[0];
            for(int i=1;i<10;i++){
                if(arr[i] > max_){
                    max_ = arr[i];
                }
            }
            return max_;
        }

        // Insert an Element in the array.
        void insertArray(int n){
            int i, temp = 0,temp1;
            int maximum_element = findMax();
            // If the input is less then the first element.
            if(arr[0] > n){
                temp = arr[0];
                arr[0] = n;
                i = 0;
            }
            // IF the the element is greater then or equal to the maximum element of array.
            else if(maximum_element<=n){
                if(maximum_element == arr[9]){
                    arr[9] = n;
                }
                else{
                    for(i=0;i<10;i++){
                        if(arr[i]==maximum_element){
                            arr[i+1] = n;
                        }
                    }
                }
                // To exit from the function.
                return ;
            }
            else{
                // If the input is less the maximum element and greater then the first element.
                for(i=0;i<10;i++){
                    if(arr[i]>=n){
                        temp = arr[i];
                        arr[i] = n;
                        break;
                    }
                }
            }

            // Swaping.
            for(int j=i+1;j<10;j++){
                temp1 = temp;
                temp = arr[j];
                arr[j] = temp1;

            }

        }

        //Binary Search
        int binary_srch(int n){
            int left = 0, right = 9, mid = 0;

            while(left <= right){
                mid = (left + right)/2;
                if(arr[mid]==n){
                    return mid;
                }
                else if(arr[mid]<n){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            return -1;
        }

        void delete_element(int n){
            int pos = binary_srch(n);
            for (int i=0;i<10;i++){
                if(i = pos){
                    arr[]
                }
            }
        }

        // Display all elements.
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
    int input, num;

//    bool t = true;
    cout << "1-- Insert\n2-- Search\n3-- Delete\n4-- Exit" << endl;

    while(true){
        cout << "Please enter choice: ";
        cin >> input;
        switch(input){
            case 1:
                cin >> num;
                l1.insertArray(num);
                //t = true;
                break;

            case 2:
                cin >> num;

                if(l1.binary_srch(num) < 0){
                    cout << "Sorry! Not found!" << endl;
                }
                else{
                    cout << "Found at Position : " << l1.binary_srch(num) + 1 << endl;
                }

                break;
            case 3:
                l1.display();
                //t = true;
                break;
            default:
                //t = false;
                cout << "Program terminated\n";
                exit(0);
                break;
        }
    }

    return 0;
}
