// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "CvType.pypp.hpp"

namespace bp = boost::python;

struct CvType_wrapper : CvType, bp::wrapper< CvType > {

    CvType_wrapper(CvType const & arg )
    : CvType( arg )
      , bp::wrapper< CvType >(){
        // copy constructor
        
    }

    static bp::object get_info( ::CvType const & inst ){        
        return inst.info? bp::object(inst.info): bp::object();
    }

    static bp::object get_first( ::CvType const & inst ){        
        return inst.first? bp::object(inst.first): bp::object();
    }

    static bp::object get_last( ::CvType const & inst ){        
        return inst.last? bp::object(inst.last): bp::object();
    }

};

void register_CvType_class(){

    bp::class_< CvType_wrapper >( "CvType", bp::no_init )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvType >() )    
        .add_property( "info", bp::make_function(&::CvType_wrapper::get_info) )    
        .add_property( "first", bp::make_function(&::CvType_wrapper::get_first) )    
        .add_property( "last", bp::make_function(&::CvType_wrapper::get_last) );

}