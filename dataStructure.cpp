#include<bits/stdc++.h>
using namespace std;


void explainDeque(){
//declartion:
deque<int> dq;
dq.push_back(1); //{1}
dq.emplace_back(2); //{1,2}
dq.push_front(4); //{4,1,2}
dq.emplace_front(3); //{3,4,1,2}

dq.pop_back(); //{3,4,1}
dq.pop_front(); //{4,1}

dq.back();
dq.front();

//rest of the functions are similar to vectors
//such as: begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){ //Stack data structure follows LIFO (Last in last Out)
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5); //{5,4,3,2,1}

    cout << st.top(); //prints 5, "st[2] is invalid in stack"
    st.pop(); //{4,3,2,1}

    cout << st.size(); //4

    cout << st.empty(); //false

    stack<int>st1, st2;
    st1.swap(st2); //swap first stack with second stack
}

void explainQueue(){ //Queue follow FIFO(First in First Out)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4); //{1,2,3,4}

    q.back() += 5;

    cout <<q.back(); //it will add 5 to 4  = 9;

    cout << q.front(); //o/p: 1

    //size, swap & empty same as stack
}

void explainPriorityQueue(){ //Max Heap:
    priority_queue<int> pq;
    pq.push(2); //{2}
    pq.push(5); //{5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); //o/p: 10

    pq.pop(); //{8,5,2}

    cout << pq.top(); //8

    //size, swap & empty function is same as others

    //Minimum Heap:-

    priority_queue <int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout << pq.top(); // o/p: 2

}

void explainSet(){ //sets contain uniqe elements which are present in ordered form
//Time Complexity: O(log N)

set<int> st;

st.insert(1); //{1}
st.insert(2); //{1,2}
st.emplace(4); //{1,2,4}
st.emplace(3); //{1,2,3,4}

auto it = st.find(2);

auto it = st.find(6); //if an element is not present in a set it will return st.end()
//which means it will point to the end of the last element

st.erase(2);

int cnt = st.count(1); //if the element exists it will return 1, if not then 0

auto it1 = st.find(1);
auto it2 = st.find(2);
st.erase(it1, it2); //we can also earse the iterator st.earse(first,last) 
//eg: {1,2,3,4,5} it will delete 2&3(last) not 4, o/p: {1,4,5}

auto it1 = st.lower_bound(2);  //Find the first occurrence of 2
auto  it2 = st.upper_bound(3); //Find the position after the last occurrence of 4
}

void explainMultiSet(){ //it is sorted but not unique it can contain duplicate elemets

multiset <int> ms;

ms.insert(1); //{1}
ms.insert(1); //{1,1}
ms.insert(1); //{1,1,1}

ms.erase(1);//it erase's all the occurence of 1's

int cnt = ms.count(1); //count the number of occurance of 1

ms.erase(ms.find(1)); //earseses first occurance of 1

    // To erase the first two occurrences of 1
    auto it1 = ms.find(1); // Find the first 1
    auto it2 = next(it1, 2); // Move iterator two positions ahead
    ms.erase(it1, it2); // Erase first two 1s

}

void explainUSet(){ //Time Complexity: O(1), In worst case sometimes it is:O(N)
//it contains unique values but it is not ordered
    unordered_set <int> st;
    //all the functions are same as set except lower_bound and upper_bound
}

void explainMap(){//it contains data in the form of key:value pair, here key is unique and can be of any data type
//Map stores unique keys in sorted order
map <int, int> mpp;
map<int, pair<int,int>> mpp;

mpp[1] = 2; //here 1 is key & 2 is value, it is stored in the form of {1,2}

mpp.emplace(3,1);
mpp.insert(4,2); //[{1,2} {3,1} {4,2}]

map< pair<int, int> ,int> mpp;

mpp[2,3] = 10; //{2,3},10

for(auto it : mpp){
    cout << it.first << " "<< it.second <<endl ;
    //since it is stored in pair we can use for each loop & print the first element then the second
}

cout << mpp[1]; //value of 1 key
cout << mpp[5]; //returns 0 or null if value is not present

auto it = mpp.find(4);
cout<< (it)->second; // The arrow operator -> is used to access the member of the element pointed to by the iterator.
//it will return second element of key:4

auto it = mpp.find(6); //if key is not present it will return mpp.end() i.e after the last

auto it = mpp.lower_bound(2);
auto it = mpp.upper_bound(3);

//erase, swap, size, empty are same as above

}

void expliMultiMap(){
    //everything same as map, only it can store multiple keys sorted order
    //only mpp[key] cannot be used here
}

void explainUnorderdMap(){
    //Time Complexity: O(1), in worst case sometimes it is: O(N)
    //it contains unique keys which is stored in unorder form
    //same as sets and unorder_set difference 
}


































int main(){

    return 0;
}