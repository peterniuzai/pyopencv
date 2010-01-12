// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "cvtreenodeiterator.pypp.hpp"

namespace bp = boost::python;

struct CvTreeNodeIterator_wrapper : CvTreeNodeIterator, bp::wrapper< CvTreeNodeIterator > {

    CvTreeNodeIterator_wrapper(CvTreeNodeIterator const & arg )
    : CvTreeNodeIterator( arg )
      , bp::wrapper< CvTreeNodeIterator >(){
        // copy constructor
        
    }

    CvTreeNodeIterator_wrapper()
    : CvTreeNodeIterator()
      , bp::wrapper< CvTreeNodeIterator >(){
        // null constructor
        
    }

};

void register_CvTreeNodeIterator_class(){

    bp::class_< CvTreeNodeIterator_wrapper >( "CvTreeNodeIterator" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvTreeNodeIterator >() )    
        .def_readwrite( "level", &CvTreeNodeIterator::level )    
        .def_readwrite( "max_level", &CvTreeNodeIterator::max_level )    
        .add_property( "node"
                    , pyplus_conv::make_addressof_getter(&CvTreeNodeIterator::node)
                    , pyplus_conv::make_address_setter(&CvTreeNodeIterator::node) );

}
