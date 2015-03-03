#ifndef OPTIXSAMPLE_H
#define OPTIXSAMPLE_H

#include <optixu/optixpp_namespace.h>
#include <QImage>

class OptixSample
{
public:
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief our defalut constructor
    //----------------------------------------------------------------------------------------------------------------------
    OptixSample();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief our default destructor
    //----------------------------------------------------------------------------------------------------------------------
    ~OptixSample();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief initialise our class
    //----------------------------------------------------------------------------------------------------------------------
    void init();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief our trace function that launches our Optix context
    //----------------------------------------------------------------------------------------------------------------------
    QImage trace();
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief a mutator to set the width and height of our scene
    //----------------------------------------------------------------------------------------------------------------------
    inline void setSize(unsigned int _width, unsigned int _height){m_width = _width; m_height = _height;}
    //----------------------------------------------------------------------------------------------------------------------
protected:
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief An instance of the optix engine
    //----------------------------------------------------------------------------------------------------------------------
    optix::Context m_context;
    //----------------------------------------------------------------------------------------------------------------------
private:
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief out output buffer
    //----------------------------------------------------------------------------------------------------------------------
    optix::Buffer m_outputBuffer;
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief the width of our scene
    //----------------------------------------------------------------------------------------------------------------------
    unsigned int m_width;
    //----------------------------------------------------------------------------------------------------------------------
    /// @brief the height of our scene
    //----------------------------------------------------------------------------------------------------------------------
    unsigned int m_height;
    //----------------------------------------------------------------------------------------------------------------------
};

#endif // OPTIXSAMPLE_H
