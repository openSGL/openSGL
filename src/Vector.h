#ifndef SGL_Vector_h
#define SGL_Vector_h

class SGLvector2u
{
    private:

        uint32_t  x,y;



    public:
        uint32_t get_x()
        {
            return x;
        }
        uint32_t get_y()
        {
            return y;
        }

        uint32_t set_x(uint32_t x_param)
        {
            y = x_param;
        }

        uint32_t set_y(uint32_t y_param)
        {
             y = y_param;
        }



};



#endif // SGL_Vector_h
