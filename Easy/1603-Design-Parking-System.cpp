class ParkingSystem {
public:

    int big;
    int medium;
    int small;

    ParkingSystem(int bigSpaces, int mediumSpaces, int smallSpaces) {
        big = bigSpaces;
        medium = mediumSpaces;
        small = smallSpaces;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(big > 0){
                big--;
            } else return false;
        }
        else if(carType == 2){
            if(medium > 0){
                medium--;
            } else return false;
        }
        else if(carType == 3){
            if(small > 0){
                small--;
            } else return false;
        }

        return true;
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
