#ifndef CAMERA_H
#define CAMERA_H
#include "myslam/common_include.h"
namespace myslam
{
    class Camera
    {
    private:
        /* data */
    public:
        typedef std::shared_ptr<Camera> Ptr;
        Camera(/* args */);
        ~Camera();
    };

    
    Camera::~Camera()
    {
    }
    

}



#endif //CAMERA_H