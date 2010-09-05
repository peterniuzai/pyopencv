// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cvaux_wrapper.hpp"
#include "cvaux_ext_classes_4.pypp.hpp"

namespace bp = boost::python;

struct CvFGDetector_wrapper : CvFGDetector, bp::wrapper< CvFGDetector > {

    CvFGDetector_wrapper( )
    : CvFGDetector( )
      , bp::wrapper< CvFGDetector >(){
        // null constructor
    
    }

    virtual ::IplImage * GetMask(  ){
        bp::override func_GetMask = this->get_override( "GetMask" );
        return func_GetMask(  );
    }

    virtual void Process( ::IplImage * pImg ) {
        namespace bpl = boost::python;
        if( bpl::override func_Process = this->get_override( "Process" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Process.ptr(), pImg );
        }
        else{
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :Process");
              boost::python::throw_error_already_set();
        }
    }
    
    static void default_Process( ::CvFGDetector & inst, ::cv::Mat & pImg ){
        if( dynamic_cast< CvFGDetector_wrapper * >( boost::addressof( inst ) ) ){
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :Process");
              boost::python::throw_error_already_set();
        }
        else{
            inst.Process(get_IplImage_ptr(pImg));
        }
    }

    virtual void Release(  ){
        bp::override func_Release = this->get_override( "Release" );
        func_Release(  );
    }

    virtual void LoadState( ::CvFileStorage * arg0, ::CvFileNode * arg1 ) {
        namespace bpl = boost::python;
        if( bpl::override func_LoadState = this->get_override( "LoadState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_LoadState.ptr(), arg0, arg1 );
        }
        else{
            CvVSModule::LoadState( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    static void default_LoadState( ::CvVSModule & inst, ::cv::FileStorage & arg0, ::cv::FileNode & arg1 ){
        if( dynamic_cast< CvFGDetector_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::LoadState(arg0.fs, *(arg1));
        }
        else{
            inst.LoadState(arg0.fs, *(arg1));
        }
    }

    virtual void ParamUpdate(  ) {
        if( bp::override func_ParamUpdate = this->get_override( "ParamUpdate" ) )
            func_ParamUpdate(  );
        else{
            this->CvVSModule::ParamUpdate(  );
        }
    }
    
    void default_ParamUpdate(  ) {
        CvVSModule::ParamUpdate( );
    }

    virtual void SaveState( ::CvFileStorage * arg0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_SaveState = this->get_override( "SaveState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_SaveState.ptr(), arg0 );
        }
        else{
            CvVSModule::SaveState( boost::python::ptr(arg0) );
        }
    }
    
    static void default_SaveState( ::CvVSModule & inst, ::cv::FileStorage & arg0 ){
        if( dynamic_cast< CvFGDetector_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::SaveState(arg0.fs);
        }
        else{
            inst.SaveState(arg0.fs);
        }
    }

};

static void Detect_d8fa7b620f024b1a2f20fc4afa978e15( ::CvObjectDetector & inst, ::cv::Mat & arg0, ::CvBlobSeq * arg1=0 ){
    inst.Detect(get_CvMat_ptr(arg0), arg1);
}

void register_classes_4(){

    bp::class_< CvDetectedBlob, bp::bases< CvBlob > >( "CvDetectedBlob" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvDetectedBlob >() )    
        .def_readwrite( "response", &CvDetectedBlob::response );

    bp::class_< CvFGDetector_wrapper, bp::bases< CvVSModule >, boost::noncopyable >( "CvFGDetector", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFGDetector >() )    
        .def( 
            "GetMask"
            , bp::pure_virtual( (::IplImage * ( CvFGDetector::* )(  ) )(&::CvFGDetector::GetMask) )
            , bp::return_internal_reference< >() )    
        .def( 
            "Process"
            , (void (*)( CvFGDetector &,::cv::Mat & ))( &CvFGDetector_wrapper::default_Process )
            , ( bp::arg("inst"), bp::arg("pImg") )
            , "\nArgument 'pImg':"\
    "\n    C++ type: ::IplImage *"\
    "\n    Python type: Mat" )    
        .def( 
            "Release"
            , bp::pure_virtual( (void ( CvFGDetector::* )(  ) )(&::CvFGDetector::Release) ) )    
        .def( 
            "LoadState"
            , (void (*)( CvVSModule &,::cv::FileStorage &,::cv::FileNode & ))( &CvFGDetector_wrapper::default_LoadState )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage"\
    "\nArgument 'arg1':"\
    "\n    C++ type: ::CvFileNode *"\
    "\n    Python type: FileNode" )    
        .def( 
            "ParamUpdate"
            , (void ( CvVSModule::* )(  ) )(&::CvVSModule::ParamUpdate)
            , (void ( CvFGDetector_wrapper::* )(  ) )(&CvFGDetector_wrapper::default_ParamUpdate) )    
        .def( 
            "SaveState"
            , (void (*)( CvVSModule &,::cv::FileStorage & ))( &CvFGDetector_wrapper::default_SaveState )
            , ( bp::arg("inst"), bp::arg("arg0") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage" );

    bp::class_< CvFuzzyController >( "CvFuzzyController" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyController >() );

    bp::class_< CvFuzzyCurve >( "CvFuzzyCurve", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyCurve >() )    
        .def( 
            "addPoint"
            , (void ( CvFuzzyCurve::* )( double,double ) )( &::CvFuzzyCurve::addPoint )
            , ( bp::arg("x"), bp::arg("y") ) )    
        .def( 
            "calcValue"
            , (double ( CvFuzzyCurve::* )( double ) )( &::CvFuzzyCurve::calcValue )
            , ( bp::arg("param") ) )    
        .def( 
            "clear"
            , (void ( CvFuzzyCurve::* )(  ) )( &::CvFuzzyCurve::clear ) )    
        .def( 
            "getCentre"
            , (double ( CvFuzzyCurve::* )(  ) )( &::CvFuzzyCurve::getCentre ) )    
        .def( 
            "getValue"
            , (double ( CvFuzzyCurve::* )(  ) )( &::CvFuzzyCurve::getValue ) )    
        .def( 
            "setCentre"
            , (void ( CvFuzzyCurve::* )( double ) )( &::CvFuzzyCurve::setCentre )
            , ( bp::arg("_centre") ) )    
        .def( 
            "setValue"
            , (void ( CvFuzzyCurve::* )( double ) )( &::CvFuzzyCurve::setValue )
            , ( bp::arg("_value") ) );

    bp::class_< CvFuzzyFunction >( "CvFuzzyFunction" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyFunction >() );

    bp::class_< CvFuzzyMeanShiftTracker >( "CvFuzzyMeanShiftTracker" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyMeanShiftTracker >() );

    bp::class_< CvFuzzyPoint >( "CvFuzzyPoint", bp::init< double, double >(( bp::arg("_x"), bp::arg("_y") )) )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyPoint >() )    
        .def_readwrite( "value", &CvFuzzyPoint::value )    
        .def_readwrite( "x", &CvFuzzyPoint::x )    
        .def_readwrite( "y", &CvFuzzyPoint::y );

    bp::class_< CvFuzzyRule >( "CvFuzzyRule" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvFuzzyRule >() );

    { //::CvObjectDetector
        typedef bp::class_< CvObjectDetector > CvObjectDetector_exposer_t;
        CvObjectDetector_exposer_t CvObjectDetector_exposer = CvObjectDetector_exposer_t( "CvObjectDetector", bp::init< bp::optional< char const * > >(( bp::arg("arg0")=bp::object() )) );
        bp::scope CvObjectDetector_scope( CvObjectDetector_exposer );
        CvObjectDetector_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvObjectDetector >() );
        bp::implicitly_convertible< char const *, CvObjectDetector >();
        { //::CvObjectDetector::Detect
        
            typedef void ( *Detect_function_type )( CvObjectDetector &,::cv::Mat &,CvBlobSeq * );
            
            CvObjectDetector_exposer.def( 
                "Detect"
                , Detect_function_type( &Detect_d8fa7b620f024b1a2f20fc4afa978e15 )
                , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1")=bp::object() )
                , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvArr const *"\
    "\n    Python type: Mat" );
        
        }
        { //::CvObjectDetector::GetMaxBorderSize
        
            typedef int ( ::CvObjectDetector::*GetMaxBorderSize_function_type )(  ) const;
            
            CvObjectDetector_exposer.def( 
                "GetMaxBorderSize"
                , GetMaxBorderSize_function_type( &::CvObjectDetector::GetMaxBorderSize ) );
        
        }
        { //::CvObjectDetector::GetMinWindowSize
        
            typedef ::CvSize ( ::CvObjectDetector::*GetMinWindowSize_function_type )(  ) const;
            
            CvObjectDetector_exposer.def( 
                "GetMinWindowSize"
                , GetMinWindowSize_function_type( &::CvObjectDetector::GetMinWindowSize ) );
        
        }
        { //::CvObjectDetector::Load
        
            typedef bool ( ::CvObjectDetector::*Load_function_type )( char const * ) ;
            
            CvObjectDetector_exposer.def( 
                "Load"
                , Load_function_type( &::CvObjectDetector::Load )
                , ( bp::arg("arg0")=bp::object() ) );
        
        }
    }

}