#ifndef gasMileage_H_INCLUDED
#define gasMileage_H_INCLUDED

class GasMileage{
private:
    double miles;
    double gallon;
    double totalMiles;
    double totalGallons;
    double totalMPG;
public:
    GasMileage();

    void setMiles();
    void setGallon();
    void setTotalMiles();
    void setTotalGallons();


    double getMiles()const;
    double getGallon()const;
    double getTotalMiles()const;
    double getMilesPerGallon()const;
    double getTotalGallons()const;
    double getTotalMPG()const;



};


#endif // GasMileage_H_INCLUDED
