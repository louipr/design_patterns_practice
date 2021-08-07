#ifndef SHAPE_H
#define SHAPE_H
class Shape {
    public:
        virtual double getArea() = 0;
        virtual int d_size() = 0;
        void setDim(double d[]){
            this->d = new double[this->d_size()];
            for(int i = 0; i < this->d_size(); i++){
                this->d[i] = d[i];
            }
        }
        ~Shape(){
            if(this->d){
                delete [] this->d;
            }
        }
    protected: 
        double *d;
};
#endif

