// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "CvSlice.pypp.hpp"

namespace bp = boost::python;

void register_CvSlice_class(){

    bp::class_< CvSlice >( "CvSlice" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSlice >() )    
        .def_readwrite( "end_index", &CvSlice::end_index )    
        .def_readwrite( "start_index", &CvSlice::start_index )    
        .def("from_ndarray", &bp::from_ndarray< cv::CvSlice >, (bp::arg("arr")) )    
        .staticmethod("from_ndarray")    
        .add_property("ndarray", &bp::as_ndarray< cv::CvSlice >);

}