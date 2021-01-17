//1603. 设计停车系统
//https://leetcode-cn.com/problems/design-parking-system/

class ParkingSystem {
public:
    int big,medium,small;
    ParkingSystem(int big, int medium, int small) {
        this->big = big;
        this->medium = medium;
        this->small = small;
    }
    
    bool addCar(int carType) {
        switch(carType)
        {
            case 1:
                if(1 <= big)
                {
                    --big;
                    return true;
                }
                else
                {
                    return false;
                }
            case 2:
                if(1 <= medium)
                {
                    --medium;
                    return true;
                }
                else
                {
                    return false;
                }
            case 3:
            if(1 <= small)
                {
                    --small;
                    return true;
                }
                else
                {
                    return false;
                }
            default:
                return false;
        }
    }
};