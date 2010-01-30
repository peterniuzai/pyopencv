// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object/life_support.hpp"
#include "CvSVMParams.pypp.hpp"

namespace bp = boost::python;

struct CvSVMParams_wrapper : CvSVMParams, bp::wrapper< CvSVMParams > {

    CvSVMParams_wrapper(CvSVMParams const & arg )
    : CvSVMParams( arg )
      , bp::wrapper< CvSVMParams >(){
        // copy constructor
        
    }

    CvSVMParams_wrapper( )
    : CvSVMParams( )
      , bp::wrapper< CvSVMParams >(){
        // null constructor
    
    }

    cv::Mat class_weights_as_Mat;
    CvMat class_weights_as_CvMat;
    void set_class_weights(cv::Mat const &new_class_weights)
    {
        class_weights_as_Mat = new_class_weights; // to keep a reference to class_weights
        class_weights_as_CvMat = class_weights_as_Mat; // to ensure class_weights points to a valid CvMat
        class_weights = &class_weights_as_CvMat;
    }
    cv::Mat & get_class_weights()
    {
        if(class_weights != &class_weights_as_CvMat) set_class_weights(cv::Mat(class_weights));
        return class_weights_as_Mat;
    }

    cv::TermCriteria get_term_crit() { return cv::TermCriteria(term_crit); }
    void set_term_crit(cv::TermCriteria const &_term_crit) { term_crit = _term_crit; }

    CvSVMParams_wrapper(int _svm_type, int _kernel_type, double _degree, double _gamma, double _coef0, double _C, double _nu, double _p, cv::Mat const & _class_weights, cv::TermCriteria const &_term_crit )
    : CvSVMParams( _svm_type, _kernel_type, _degree, _gamma, _coef0, _C, _nu, _p, 0, (CvTermCriteria)_term_crit )
      , bp::wrapper< CvSVMParams >(){
        // constructor
        set_class_weights(_class_weights);
    }

};

void register_CvSVMParams_class(){

    bp::class_< CvSVMParams_wrapper >( "CvSVMParams", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSVMParams >() )    
        .def_readwrite( "C", &CvSVMParams::C )    
        .def_readwrite( "coef0", &CvSVMParams::coef0 )    
        .def_readwrite( "degree", &CvSVMParams::degree )    
        .def_readwrite( "gamma", &CvSVMParams::gamma )    
        .def_readwrite( "kernel_type", &CvSVMParams::kernel_type )    
        .def_readwrite( "nu", &CvSVMParams::nu )    
        .def_readwrite( "p", &CvSVMParams::p )    
        .def_readwrite( "svm_type", &CvSVMParams::svm_type )    
        .add_property( "class_weights", bp::make_function(&::CvSVMParams_wrapper::get_class_weights, bp::return_internal_reference<>()),
        &::CvSVMParams_wrapper::set_class_weights)    
        .add_property( "term_crit", &::CvSVMParams_wrapper::get_term_crit, &::CvSVMParams_wrapper::set_term_crit)    
        .def( bp::init< int, int, double, double, double, double, double, double, cv::Mat const &, cv::TermCriteria const & >(( bp::arg("_svm_type"), bp::arg("_kernel_type"), bp::arg("_degree"), bp::arg("_gamma"), bp::arg("_coef0"), bp::arg("_C"), bp::arg("_nu"), bp::arg("_p"), bp::arg("_class_weights"), bp::arg("_term_crit") )) );

}
