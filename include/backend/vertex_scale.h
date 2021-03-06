#ifndef MYSLAM_BACKEND_SCALE_H
#define MYSLAM_BACKEND_SCALE_H

#include "vertex.h"

namespace myslam {
namespace backend {

/**
 * vertex of scale factor used in EdgeMapFusion
 */
class VertexScale : public Vertex {
public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

    VertexScale() : Vertex(1) {}

    virtual std::string TypeInfo() const { return "VertexScale"; }

    VertexEdgeTypes TypeId() const {
        return V_CLOUD_SCALE;
    }
};

}
}

#endif
