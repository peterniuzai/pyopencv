// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/str.hpp"
#include "CvSet.pypp.hpp"

namespace bp = boost::python;

static ::CvSeq * get_h_prev( ::CvSet const & inst ) { return inst.h_prev; }

static ::CvSeq * get_h_next( ::CvSet const & inst ) { return inst.h_next; }

static ::CvSeq * get_v_prev( ::CvSet const & inst ) { return inst.v_prev; }

static ::CvSeq * get_v_next( ::CvSet const & inst ) { return inst.v_next; }

static ::CvSeqBlock * get_free_blocks( ::CvSet const & inst ) { return inst.free_blocks; }

static ::CvSeqBlock * get_first( ::CvSet const & inst ) { return inst.first; }

static cv::MemStorage get_storage(CvSet const &inst) { return cv::MemStorage(inst.storage); }

static bp::object get_block_max( ::CvSet const & inst ){        
    return inst.block_max? bp::str(inst.block_max): bp::object();
}

static bp::object get_ptr( ::CvSet const & inst ){        
    return inst.ptr? bp::str(inst.ptr): bp::object();
}

static ::CvSetElem * get_free_elems( ::CvSet const & inst ) { return inst.free_elems; }

void register_CvSet_class(){

    bp::class_< CvSet >( "CvSet" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSet >() )    
        .def_readwrite( "active_count", &CvSet::active_count )    
        .def_readwrite( "delta_elems", &CvSet::delta_elems )    
        .def_readwrite( "elem_size", &CvSet::elem_size )    
        .def_readwrite( "flags", &CvSet::flags )    
        .def_readwrite( "header_size", &CvSet::header_size )    
        .def_readwrite( "total", &CvSet::total )    
        .add_property( "h_prev", bp::make_function(&::get_h_prev, bp::return_internal_reference<>()) )    
        .add_property( "h_next", bp::make_function(&::get_h_next, bp::return_internal_reference<>()) )    
        .add_property( "v_prev", bp::make_function(&::get_v_prev, bp::return_internal_reference<>()) )    
        .add_property( "v_next", bp::make_function(&::get_v_next, bp::return_internal_reference<>()) )    
        .add_property( "free_blocks", bp::make_function(&::get_free_blocks, bp::return_internal_reference<>()) )    
        .add_property( "first", bp::make_function(&::get_first, bp::return_internal_reference<>()) )    
        .add_property( "storage", bp::make_function(&::get_storage, bp::with_custodian_and_ward_postcall<0, 1>()) )    
        .add_property( "block_max", &::get_block_max )    
        .add_property( "ptr", &::get_ptr )    
        .add_property( "free_elems", bp::make_function(&::get_free_elems, bp::return_internal_reference<>()) );

}
