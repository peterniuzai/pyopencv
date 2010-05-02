// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object/life_support.hpp"
#include "Ptr_FeatureEvaluator.pypp.hpp"

namespace bp = boost::python;

static bp::object from_FeatureEvaluator(bp::object const &inst_FeatureEvaluator)
{
    bp::extract<cv::FeatureEvaluator *> elem(inst_FeatureEvaluator);
    if(!elem.check())
    {
        char s[300];
        sprintf( s, "Argument 'inst_FeatureEvaluator' must contain an object of type FeatureEvaluator." );
        PyErr_SetString(PyExc_TypeError, s);
        throw bp::error_already_set();
    }

    bp::object result = bp::object(::cv::Ptr< cv::FeatureEvaluator >(elem()));
    bp::objects::make_nurse_and_patient(result.ptr(), inst_FeatureEvaluator.ptr());
    return result;
}

static cv::FeatureEvaluator const &pointee(::cv::Ptr< cv::FeatureEvaluator > const &inst) { return *((cv::FeatureEvaluator const *)inst); }

void register_Ptr_FeatureEvaluator_class(){

    { //::cv::Ptr< cv::FeatureEvaluator >
        typedef bp::class_< cv::Ptr< cv::FeatureEvaluator > > Ptr_FeatureEvaluator_exposer_t;
        Ptr_FeatureEvaluator_exposer_t Ptr_FeatureEvaluator_exposer = Ptr_FeatureEvaluator_exposer_t( "Ptr_FeatureEvaluator", bp::init< >() );
        bp::scope Ptr_FeatureEvaluator_scope( Ptr_FeatureEvaluator_exposer );
        Ptr_FeatureEvaluator_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Ptr< cv::FeatureEvaluator > >() );
        { //::cv::Ptr< cv::FeatureEvaluator >::addref
        
            typedef cv::Ptr< cv::FeatureEvaluator > exported_class_t;
            typedef void ( exported_class_t::*addref_function_type )(  ) ;
            
            Ptr_FeatureEvaluator_exposer.def( 
                "addref"
                , addref_function_type( &::cv::Ptr< cv::FeatureEvaluator >::addref ) );
        
        }
        { //::cv::Ptr< cv::FeatureEvaluator >::delete_obj
        
            typedef cv::Ptr< cv::FeatureEvaluator > exported_class_t;
            typedef void ( exported_class_t::*delete_obj_function_type )(  ) ;
            
            Ptr_FeatureEvaluator_exposer.def( 
                "delete_obj"
                , delete_obj_function_type( &::cv::Ptr< cv::FeatureEvaluator >::delete_obj ) );
        
        }
        { //::cv::Ptr< cv::FeatureEvaluator >::empty
        
            typedef cv::Ptr< cv::FeatureEvaluator > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            Ptr_FeatureEvaluator_exposer.def( 
                "empty"
                , empty_function_type( &::cv::Ptr< cv::FeatureEvaluator >::empty ) );
        
        }
        { //::cv::Ptr< cv::FeatureEvaluator >::release
        
            typedef cv::Ptr< cv::FeatureEvaluator > exported_class_t;
            typedef void ( exported_class_t::*release_function_type )(  ) ;
            
            Ptr_FeatureEvaluator_exposer.def( 
                "release"
                , release_function_type( &::cv::Ptr< cv::FeatureEvaluator >::release ) );
        
        }
        Ptr_FeatureEvaluator_exposer.def("fromFeatureEvaluator", &::from_FeatureEvaluator, (bp::arg("inst_FeatureEvaluator")));
        Ptr_FeatureEvaluator_exposer.staticmethod("fromFeatureEvaluator");
        Ptr_FeatureEvaluator_exposer.add_property("pointee", bp::make_function(&::pointee, bp::return_internal_reference<>()));
    }

}