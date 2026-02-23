#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Car{
public:
    int idx;
    int distSq;

    Car(int idx,int distSq){
        this->idx = idx;
        this->distSq = distSq;
    }

    // Min-heap based on distance
    bool operator < (const Car& Obj) const{
        return this->distSq > Obj.distSq;
    }
};

void nearbyCar(vector<pair<int,int>> &pos, int k){
    vector<Car> cars;

    for(int i = 0; i < pos.size(); i++){
        int distSq = (pos[i].first * pos[i].first) +
                     (pos[i].second * pos[i].second);

        cars.push_back(Car(i, distSq));
    }

    priority_queue<Car> pq(cars.begin(), cars.end());

    for(int i = 0; i < k && !pq.empty(); i++){
        Car topCar = pq.top();
        cout << "Car Index: " << topCar.idx 
             << " DistanceSq: " << topCar.distSq << endl;
        pq.pop();
    }
}

int main(){
    vector<pair<int,int>> pos = {{1,3}, {-2,2}, {5,8}, {0,1}};
    int k = 2;

    nearbyCar(pos, k);

    return 0;
}