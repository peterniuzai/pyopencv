// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_st.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_st(){

    { //::cvStarKeypoint
    
        typedef ::CvStarKeypoint ( *starKeypoint_function_type )( ::CvPoint,int,float );
        
        bp::def( 
            "starKeypoint"
            , starKeypoint_function_type( &::cvStarKeypoint )
            , ( bp::arg("pt"), bp::arg("size"), bp::arg("response") )
            , "\nWrapped function:"
    "\n    cvStarKeypoint" );
    
    }

    { //::cvStartAppendToSeq
    
        typedef void ( *startAppendToSeq_function_type )( ::CvSeq *,::CvSeqWriter * );
        
        bp::def( 
            "startAppendToSeq"
            , startAppendToSeq_function_type( &::cvStartAppendToSeq )
            , ( bp::arg("seq"), bp::arg("writer") )
            , "\nWrapped function:"
    "\n    cvStartAppendToSeq" );
    
    }

    { //::cvStartReadChainPoints
    
        typedef void ( *startReadChainPoints_function_type )( ::CvChain *,::CvChainPtReader * );
        
        bp::def( 
            "startReadChainPoints"
            , startReadChainPoints_function_type( &::cvStartReadChainPoints )
            , ( bp::arg("chain"), bp::arg("reader") )
            , "\nWrapped function:"
    "\n    cvStartReadChainPoints" );
    
    }

    { //::cvStartReadSeq
    
        typedef void ( *startReadSeq_function_type )( ::CvSeq const *,::CvSeqReader *,int );
        
        bp::def( 
            "startReadSeq"
            , startReadSeq_function_type( &::cvStartReadSeq )
            , ( bp::arg("seq"), bp::arg("reader"), bp::arg("reverse")=(int)(0) )
            , "\nWrapped function:"
    "\n    cvStartReadSeq" );
    
    }

    { //::cvStartWindowThread
    
        typedef int ( *startWindowThread_function_type )(  );
        
        bp::def( 
            "startWindowThread"
            , startWindowThread_function_type( &::cvStartWindowThread )
            , "\nWrapped function:"
    "\n    cvStartWindowThread" );
    
    }

    { //::cv::stereoRectify
    
        typedef void ( *stereoRectify_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Size,::cv::Mat const &,::cv::Mat const &,::cv::Mat &,::cv::Mat &,::cv::Mat &,::cv::Mat &,::cv::Mat &,int );
        
        bp::def( 
            "stereoRectify"
            , stereoRectify_function_type( &::cv::stereoRectify )
            , ( bp::arg("cameraMatrix1"), bp::arg("distCoeffs1"), bp::arg("cameraMatrix2"), bp::arg("distCoeffs2"), bp::arg("imageSize"), bp::arg("R"), bp::arg("T"), bp::arg("R1"), bp::arg("R2"), bp::arg("P1"), bp::arg("P2"), bp::arg("Q"), bp::arg("flags")=int(::cv::CALIB_ZERO_DISPARITY) ) );
    
    }

    { //::cv::stereoRectifyUncalibrated
    
        typedef bool ( *stereoRectifyUncalibrated_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat const &,::cv::Size,::cv::Mat &,::cv::Mat &,double );
        
        bp::def( 
            "stereoRectifyUncalibrated"
            , stereoRectifyUncalibrated_function_type( &::cv::stereoRectifyUncalibrated )
            , ( bp::arg("points1"), bp::arg("points2"), bp::arg("F"), bp::arg("imgSize"), bp::arg("H1"), bp::arg("H2"), bp::arg("threshold")=5 ) );
    
    }

}
